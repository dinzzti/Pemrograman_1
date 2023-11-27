def Biodata(tahun_lahir, nama, asal):
    tahun_sekarang = 2023
    umur = tahun_sekarang - tahun_lahir

    print(f"Perkenalkan Nama Saya : {nama}")
    print(f"Umur Saya : {umur}")
    print(f"Saya Adalah Angkatan : {tahun_sekarang}")
    print(f"Asal Saya dari : {asal}")

print("Input")
tahun_lahir = int(input())
namaku = input()
asal = input()

print("\nOutput")
Biodata(tahun_lahir, namaku, asal)
