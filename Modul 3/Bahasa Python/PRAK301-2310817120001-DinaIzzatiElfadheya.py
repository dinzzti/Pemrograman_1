print("Input")
angka = (input())
x = angka.split()
a, b= map (int, x)

print("\nOutput")
if (a < b):
   print(a, b)
else:
    print(b, a)
