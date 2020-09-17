import random
import binascii

#  init
file_data = open("binary.exe","rb")
data = list(file_data.read())
random.seed(0x41)

ori = """    tmp = *(ptr++);
    num1 = num_rand;
    num3 = num1 ^ val;
    if (tmp != num3){
        return 0;
    }"""
print (len(data))
for i in range(len(data)):
    string = ori
    xor = random.randint(0, 0xff)
    # print (hex(xor))
    string = string.replace("num_rand", hex(xor))
    string = string.replace("val", hex(data[i] ^ xor))
    print (string)
