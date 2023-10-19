import math

#data 
j = float("7")
t = float("10")

#hitung volume
volume = math.pi * j**2 * t

#hitung luas
luas = 2 * math.pi * j *(j+t)

#hitung keliling
keliling = 2 * math.pi * j 

#hasil
print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")