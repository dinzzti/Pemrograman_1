print("Input")
input_str = input().split()
bilangan = int(input_str[0])
simbol = input_str[1]

print("\nOutput")

for i in range(1, 51):  # loop 1-50
    if i % bilangan == 0:
        print(simbol, end=" ")
    else:
        print(i, end=" ")