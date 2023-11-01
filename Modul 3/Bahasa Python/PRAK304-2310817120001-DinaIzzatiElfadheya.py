print("Input")
bilangan = (int(input()))

print("\nOutput")
if bilangan <100 and bilangan >=20: # bilangan puluhan
  print("Puluhan")
elif bilangan <20 and bilangan >=10:  # bilangan belasan
  print("Belasan")
elif bilangan >0 and bilangan <=9: # bilangan satuann
  print("Satuan")  
elif bilangan == 0 : # nol
  print("Nol")
else:
  print("Anda Menginput Melebihi Limit Bilangan")