from idc import *
from idaapi import *
from idautils import *

RunPlugin("python", 3)

# GetDebuggerEvent(WFNE_SUSP, -1)
# arr = [  0xDA, 0xCB, 0x31, 0x7F, 0x81, 0x98, 0x20, 0x38, 0x6C, 0xCF, 
#   0x03, 0xA7, 0xFF, 0x04, 0x64, 0x5E, 0x46, 0xFD, 0x5F, 0xE7, 
#   0x03, 0x7E, 0xB1, 0xDA, 0xBB, 0xE1, 0xEB, 0x0E, 0x67, 0x70, 
#   0x3B, 0xCC, 0xF2, 0x9E, 0x04, 0x93, 0x81, 0x28, 0x41, 0x07, 
#   0xF1, 0xF9, 0x07, 0x9A, 0xCF, 0x36, 0xDE, 0x42, 0x97, 0x0C, 
#   0x25, 0xA7]
arr = [218, 203, 49, 127, 129, 152, 123, 56, 113, 213, 7, 167, 240, 82, 111, 82, 8, 241, 83, 241, 81, 96, 191, 154, 186, 242, 172, 85, 98, 116, 61, 159, 188, 217, 26, 147, 155, 51, 62, 57, 225, 171, 7, 129, 192, 39, 150, 70, 205, 5, 37, 182]
flag =''
xor = []
for i in range(52):
    # autoWait()
    GetDebuggerEvent(WFNE_SUSP, -1)
    # index = 0
    rdx = GetRegValue("RDX")
    # while (arr[i] != get_byte(index + rax) and (index != 0xff)):
    #     index += 1
    # print (str(i) + " --> " + hex(rax))
    # print chr(index)
    xor.append(rdx)
    # flag += chr(arr[i] ^ rdx)

    continue_process()
    GetDebuggerEvent(WFNE_SUSP, -1)    # bo dem can thiet de ho tro cho ham continue_process()

print (xor)
print ('done!')
# print (flag)
# SVATTT{http://dynamorio.org/docs/group__drwrap.html}
# SVATTT hint: you may wanna take a look at winafl.dll
