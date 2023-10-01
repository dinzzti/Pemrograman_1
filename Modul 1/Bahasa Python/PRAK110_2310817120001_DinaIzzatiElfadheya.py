import math

X = 12
Y = 5
Z = (X**2)+Y**2
R = math.sqrt(Z)
S = X+Y+R
T = (X*Y)/2

print("Diketahui : ")
print("Alas =", Y, "cm")
print("Tinggi = ", X, "cm \n" )
print("Jawab : ")
print("Sisi A = ", X, "cm")
print("Sisi B = ", int(R), "cm")
print("Sisi C = ", Y, "cm")
print("Keliling =", int(S), "cm")
print("Luas = ", int (T), "cm")   