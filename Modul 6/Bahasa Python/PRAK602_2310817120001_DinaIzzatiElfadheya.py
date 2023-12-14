print("Input")

jumlahZetsu = int(input())

zetsuPutih = []
zetsuPutih = list(map(int, input().split()))

for x in range(jumlahZetsu):
    zetsuPutih[x] *= (x + 1)

print("\nOutput")
for x in range(jumlahZetsu):
    print(zetsuPutih[x], end=" ")
