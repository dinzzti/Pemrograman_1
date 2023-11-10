while True:
  print("\nPilih program")
  print("1. Penjumlahan")
  print("2. Pengurangan")
  print("3. Perkalian")
  print("4. Pembagian")
  print("5. Exit")

  pilihan = int(input("Masukkan Pilihan : "))

  if pilihan == 5:
    print("Terimakasih, telah menggunakan kalkulator DINA_IZZATI_ELFADHEYA")
    break
  
  if pilihan < 1 or pilihan > 5:
    print("Input anda salah, silahkan coba lagi")
    continue

  a = int(input("Masukkan nilai pertama : "))
  b = int(input("Masukkan nilai kedua : "))

  if pilihan == 1:
    hasil = a + b
  elif pilihan == 2:
    hasil = a - b
  elif pilihan == 3:
    hasil = a * b
  else:
    hasil = a / b

  print(f"Hasil perkalian antara {a:.2f} dan {b:.2f} adalah {hasil:.2f}")

