print("Input")
angka1, angka2 = map(int, input().split())
print("\nOutput")

if angka1 < angka2:
    for i in range(angka1, angka2 + 1):
        print(i, angka1 + angka2 - i, end=" - " if i < angka2 else "")
elif angka1 > angka2:
    for i in range(angka1, angka2 - 1, -1):
        print(i, angka1 + angka2 - i, end=" - " if i > angka2 else "")
else:
    print(angka1, angka2, end=" ")