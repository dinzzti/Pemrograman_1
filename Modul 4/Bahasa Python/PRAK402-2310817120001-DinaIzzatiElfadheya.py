bilangan = int(input("Input\n"))
print("\nOutput")

for i in range(1, bilangan + 1, 2): #bilangan ganjil 
    print(i, end=" ")
print()
if bilangan % 2 == 0:
    for i in range(bilangan, 1, -2): #bilangan genap
        print(i, end=" ")
else:
    for i in range(bilangan - 1, 1, -2):
        print(i, end=" ")
print()