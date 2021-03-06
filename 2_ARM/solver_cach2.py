box = list(range(256))
key = 'bksec2020'

# data = [0x45, 0x5a, 0x4d, 0x6b, 0x2, 0x2c, 0x2c, 0xe8, 0xac, 0x9e, 0x80, 0x3f, 0x0, 0x54, 0xc7, 0xfd, 0x77, 0x75, 0x14, 0x8a, 0x89, 0x1c, 0x54, 0xc6, 0xc0, 0x19, 0xaf, 0x9f, 0x9f, 0x9c, 0x91, 0x6d, 0x2b, 0x3, 0xf7, 0x77]
data = 'BKSEC{th3_f1l3_1s_n0t_rc4_4lg0r1thm}'
j = 0
for i in range(5,256):
    j = (j + 2 + box[i] + ord(key[i % len(key)])) % 256
    box[i], box[j] = box[j], box[i]

res = []
i = j =0
for ch in data:
    i = (i + 3) % 256
    j = (j + box[i] + 1) % 256
    box[i], box[j] = box[j], box[i]
    t = (box[i] + box[j])% 256
    k = box[t]
    res.append(hex(ord(ch)^k))

# plain = "".join(res)

print (res)
