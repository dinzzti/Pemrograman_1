def pesankode(kode, pesan):
    for x in range(len(kode)):
        if kode[x] == ' ' and pesan[x] == ' ':
            pesan[x] = ' '
        elif kode[x] == pesan[x]:
            pesan[x] = '*'
        else:
            pesan[x] = '#'

if __name__ == "__main__":
    print("Input")
    kode = input().rstrip()
    pesan = input().rstrip()
    print("\nOutput")
    if len(kode) != len(pesan):
        print("Panjang kalimat berbeda, pesan palsu")
    else:
        pesan = list(pesan)
        pesankode(list(kode), pesan)

        bintang = pesan.count('*')
        pagar = pesan.count('#')

        print("".join(pesan))
        print(f"* = {bintang}")
        print(f"# = {pagar}")

        if bintang >= pagar:
            print("Pesan Asli")
        else:
            print("Pesan Palsu")

