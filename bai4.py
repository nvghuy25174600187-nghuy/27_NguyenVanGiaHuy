# Bài 4: Kiểm tra số nguyên tố

n = int(input("Nhập số nguyên dương n: "))

if n < 2:
    print(f"{n} không là số nguyên tố.")
else:
    la_nguyen_to = True
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            la_nguyen_to = False
            break
    if la_nguyen_to:
        print(f"{n} là số nguyên tố.")
    else:
        print(f"{n} không là số nguyên tố.")
