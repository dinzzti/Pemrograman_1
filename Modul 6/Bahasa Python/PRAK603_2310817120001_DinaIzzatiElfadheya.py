def perkalian(n1, n2, kali, kali2):
    for x in range(n1):
        print(kali[x] * kali2[x], end=" ")

if __name__ == "__main__":
    n1, n2 = map(int, input("Input\n").split())

    if n1 != n2:
        print("\nOutput")
        print("Jumlah tidak sama")
    else:
        kali = list(map(int, input().split()))
        kali2 = list(map(int, input().split()))

        print("\nOutput")
        perkalian(n1, n2, kali, kali2)
