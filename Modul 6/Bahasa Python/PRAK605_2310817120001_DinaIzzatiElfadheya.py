def matriks_persegi(n, matriks_A, matriks_B):
    hasil = [[0 for _ in range(n)] for _ in range(n)]
    
    for x in range(n):
        for y in range(n):
            hasil[x][y] = sum(matriks_A[x][k] * matriks_B[k][y] for k in range(n))
    return hasil

def print_matriks(matriks):
    for row in matriks:
        print(" ".join(map(str, row)))

def main():
    print("Input")
    n = int(input())
    
    print("Matriks A")
    matriks_A = [list(map(int, input().split())) 
        for _ in range(n)]

    print("Matriks B")
    matriks_B = [list(map(int, input().split())) 
        for _ in range(n)]

    hasil = matriks_persegi(n, matriks_A, matriks_B)

    print("\nMatriks AXB")
    print_matriks(hasil)

if __name__ == "__main__":
    main()
