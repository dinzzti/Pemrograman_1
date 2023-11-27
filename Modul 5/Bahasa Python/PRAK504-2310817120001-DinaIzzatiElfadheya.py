def reverse(bilangan):
    reversed_bilangan = 0

    while bilangan > 0:
        digit = bilangan % 10
        reversed_bilangan = reversed_bilangan * 10 + digit
        bilangan //= 10

    return reversed_bilangan
print("Input")
A, B = map(int, input().split())

A = reverse(A)
B = reverse(B)
C = A + B
print("\nOutput")
print(reverse(C))
