
#7 10 & 10 10
print("Input")
input = input()
angka = input.split()
X, Y,  = map(float, angka)
C= 22/7*(X**2)*Y
D= 2*(22/7)*X*(X+Y)
E= 2*(22/7)*X
print("\nOuput")
print("Volume = ", format (C,'.2f'))
print("Luas = ", format (D,'.2f'))
print("Keliling = ", format (E,'.2f'))


