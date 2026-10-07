import math

# Inisialisasi variabel
putaran = 5.0
jarak = 14.0

# Menghitung keliling dan jari-jari
keliling = jarak / putaran
r = keliling / (2 * math.pi)

# Menampilkan output
print("Diketahui :")
print(f"Pak Dengklek mengelilingi taman = {int(putaran)} Putaran")
print(f"Jarak tempuh Pak Dengklek = {int(jarak)} Kilometer")
print("\nJawaban :")
print(f"Jari-jari taman yang dikelilingi Pak Dengklek adalah {r:.2f} Kilometer")