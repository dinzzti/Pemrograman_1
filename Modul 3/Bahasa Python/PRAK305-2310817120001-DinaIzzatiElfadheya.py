print("Input")
total_detik = int(input())

hari = total_detik // (24 * 3600)
jam = (total_detik % (24 * 3600)) // 3600
total_detik %= 3600
menit = total_detik // 60
detik = total_detik % 60

print("\nOutput")

if hari > 0:
    print(f"{hari} hari {jam:02d}:{menit:02d}:{detik:02d}")
else:
    print(f"{jam:02d}:{menit:02d}:{detik:02d}")
