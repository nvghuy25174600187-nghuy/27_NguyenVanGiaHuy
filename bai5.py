# Bài 5: Tính giai thừa của một số nguyên dương

n = int(input("Nhập số nguyên dương n: "))

if n < 0:
    print("Không tính được giai thừa cho số âm.")
else:
    giai_thua = 1
    for i in range(1, n + 1):
        giai_thua *= i
    print(f"{n}! = {giai_thua}")
