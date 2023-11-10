print("Input")
banyak_baris, kelipatan = map(int, input().split())
total = 0
#barisnya error
print("\nOutput")

for i in range(1, banyak_baris + 1):
    baris_total = 0
    for bilangan in range(i, 0, -1):
        nilai_kelipatan = bilangan * kelipatan
        print(f"({bilangan} * {kelipatan})", end="")
        if bilangan > 1:
            print(" + ", end="")
        baris_total += nilai_kelipatan
    total += baris_total
    print(f" = {baris_total}")

print(total)
