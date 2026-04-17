@echo off
setlocal enabledelayedexpansion
:: 用来启用git代理，使用方法：git-proxy.bat on [端口号]
:: 常见代理端口
set PORTS=7890 1080 8889 8080

set ACTION=%1
set PORT=%2
set HOST=127.0.0.1

if "%ACTION%"=="" (
    echo 用法: git-proxy.bat {on^|off^|status} [端口号]
    exit /b 1
)

if "%ACTION%"=="on" (
    if "%PORT%"=="" (
        for %%p in (%PORTS%) do (
            powershell -Command "exit (Test-NetConnection %HOST% -Port %%p).TcpTestSucceeded ? 0 : 1"
            if !errorlevel! == 0 (
                set PORT=%%p
                goto :found
            )
        )
        echo ❌ 没有检测到可用代理端口，请手动指定: git-proxy.bat on [端口]
        exit /b 1
    )
    :found
    set PROXY=http://%HOST%:%PORT%
    git config --global http.proxy  %PROXY%
    git config --global https.proxy %PROXY%
    echo ✅ Git 已启用代理: %PROXY%
    exit /b 0
)

if "%ACTION%"=="off" (
    git config --global --unset http.proxy
    git config --global --unset https.proxy
    echo ❌ Git 已关闭代理
    exit /b 0
)

if "%ACTION%"=="status" (
    echo 🔎 当前 Git 代理:
    git config --global --get http.proxy
    git config --global --get https.proxy
    exit /b 0
)

echo 用法: git-proxy.bat {on^|off^|status} [端口号]
exit /b 1
