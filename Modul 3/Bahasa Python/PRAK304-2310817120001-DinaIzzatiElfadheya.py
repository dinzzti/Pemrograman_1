print("Input")
bilangan = (int(input()))

print("\nOutput")
if bilangan <100 and bilangan >=20:
  print("Puluhan")
elif bilangan <20 and bilangan >=10:  
  print("Belasan")
elif bilangan >0 and bilangan <=9: 
  print("Satuan")  
elif bilangan == 0 :
  print("Nol")
else:
  print("Anda Menginput Melebihi Limit Bilangan")
