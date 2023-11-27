def mutlak(angka):
    if angka < 0:
        angka = -angka
    return angka

def hitung(nilai1, nilai2):
    hasil = nilai1 - nilai2
    return mutlak(hasil)

a, c, b, d= map(int, input("Input\n").split())
print("\nOutput")
hasil = hitung(a, b) + hitung(c, d)
print((hasil))
