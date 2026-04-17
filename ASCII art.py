import sys
import pyfiglet

fonts = ["big","block",  "slant", "standard", "banner", "digital","mini","roman","small","Consolas","Courier New","Monaco","DejaVu Sans Mono"]

def ascii_art(text, font="slant"):
    return pyfiglet.figlet_format(text, font=font)

if __name__ == "__main__":
    if len(sys.argv) < 2:
        text = input("请输入文字：")
    else:
        text = " ".join(sys.argv[1:])  # 允许命令行参数作为文字

    print("\n可选字体：")
    for i, f in enumerate(fonts, 1):
        print(f"{i}. {f}")

    choice = input("\n请选择字体编号（默认 1）：")
    try:
        font = fonts[int(choice) - 1] if choice else fonts[0]
    except (IndexError, ValueError):
        font = fonts[0]

    print("\n" + ascii_art(text, font))
# import pyfiglet

# # 常用字体列表
# fonts = ["slant", "standard", "block", "small", "big", "digital"]

# def ascii_art(text, font="slant"):
#     return pyfiglet.figlet_format(text, font=font)

# def main():
#     print("ASCII Art 生成器（输入 q 退出）\n")
#     while True:
#         text = input("请输入文字：")
#         if text.lower() == "q":
#             break

#         # 打印字体菜单
#         print("\n可选字体：")
#         for i, f in enumerate(fonts, 1):
#             print(f"{i}. {f}")

#         choice = input("请选择字体编号（默认 1）：")
#         try:
#             font = fonts[int(choice)-1] if choice else fonts[0]
#         except (IndexError, ValueError):
#             font = fonts[0]

#         art = ascii_art(text, font)
#         print("\n" + art)

#         print("注意：复制后请粘贴到等宽字体环境（如 Consolas、Code 编辑器）以防止走形\n")

# if __name__ == "__main__":
#     main()
