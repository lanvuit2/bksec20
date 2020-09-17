a1 = "SBKSEC hint: you may wanna take a look at winafl.dll"
a2 = [72, 62, 29, 46, 94, 148, 63, 189, 84, 119, 177, 166, 48, 24, 17, 59, 46, 95, 254, 219, 140, 85, 63, 142, 223, 93, 44, 173, 81, 9, 15, 208, 92, 191, 80, 87, 32, 189, 18, 110, 154, 42, 69, 235, 57, 185, 165, 120, 207, 113, 111, 119]
a3 = "SBKSEC{Wr4pp3r_$v4ttt_2019_qu4l$_r3v3r$3_ch4ll3ng3$}"

out = []

for i in range(52):
    out.append(ord(a3[i]) ^ a2[i])

print (len(out))
for i in out:
    print (hex(i))