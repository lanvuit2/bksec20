#!/usr/bin/python3
import base64
import sys

def main():
    f = open('out.txt', 'rb')
    cipher = f.read()
    tmp = cipher

    for i in range(9):
        tmp1 = b''.fromhex(tmp.decode('utf-8'))
        tmp2 = base64.b64decode(tmp1)
        tmp = tmp2
    print (tmp)
    
            
if __name__ == "__main__":
    main()