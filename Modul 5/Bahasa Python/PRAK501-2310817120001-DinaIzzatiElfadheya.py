def MaxBilangan(bil1, bil2, bil3, bil4):
    max_bilangan = bil1
    if bil2 > max_bilangan:
        max_bilangan = bil2
    if bil3 > max_bilangan:
        max_bilangan = bil3
    if bil4 > max_bilangan:
        max_bilangan = bil4
    return max_bilangan

a, b, c, d = map(int, input("Input\n").split())
print("\nOutput")
hasil = MaxBilangan(a, b, c, d)
print(hasil)
