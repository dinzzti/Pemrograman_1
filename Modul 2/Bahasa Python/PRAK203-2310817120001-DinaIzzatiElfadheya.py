print("Input")
angka = (input())
x = angka.split()
a, b, i, j, x, y = map (float, x)
c = (a-b)*i/j-(x+y)

print("\nOutput")
print(format(c,'.3f'))



