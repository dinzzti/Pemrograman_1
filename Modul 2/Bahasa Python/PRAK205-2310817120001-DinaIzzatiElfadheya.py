import math
print("Input")
input_str= input()
angka= input_str.split()
tinggi, sisi_miring = map(float,angka)
c= (sisi_miring**2)-tinggi**2
alas= math.sqrt(c)
keliling= tinggi+sisi_miring+alas
luas= tinggi*alas/2

print("\nOutput")
print("Alas = ",format(alas,'.0f'), "cm")
print("Tinggi = ",format(tinggi,'.0f'), "cm")
print("Keliling = ",format(keliling,'.0f'),"cm")
print("Luas = ",format(luas,'.0f'), "cm^2")
