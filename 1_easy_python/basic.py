#!/usr/bin/python3
from base64 import b64encode
import sys

def main():
    if not (len(sys.argv) > 1 and len(sys.argv) < 3):
        print(f"[!] Incorrect usage. { sys.argv[0] } <flag>") 
    else:
        flag = sys.argv[1]
        tmp = flag
        for i in range(15):
            tmp1 = b64encode(tmp.encode('ascii'))
            tmp2 = tmp1.hex()
            tmp = tmp2
    with open('out.txt', 'w') as f:
        f.write(tmp)
        f.close()
    
            
if __name__ == "__main__":
    main()