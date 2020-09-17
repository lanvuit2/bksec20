'''
char *__fastcall func0(char *result, char *a2)  //swap func
{
  char v2; // ST0C_1

  v2 = *result;
  *result = *a2;
  *a2 = v2;
  return result;
}

int __fastcall func1(const char *a1, int a2)
{
  bool v2; // nf
  int v3; // r2
  int v4; // r3
  int v6; // [sp+0h] [bp+0h]
  char *s; // [sp+4h] [bp+4h]
  int v8; // [sp+Ch] [bp+Ch]
  signed int i; // [sp+10h] [bp+10h]
  signed int j; // [sp+10h] [bp+10h]
  signed int v11; // [sp+14h] [bp+14h]

  s = (char *)a1;
  v6 = a2;
  v11 = strlen(a1);
  v8 = 0;
  for ( i = 0; i <= 255; ++i )
    *(_BYTE *)(i + v6) = i;
  for ( j = 0; j <= 255; ++j )
  {
    v4 = (unsigned __int8)s[j % v11] + *(unsigned __int8 *)(j + v6) + v8 + 2;
    v3 = -v4;
    v2 = -v4 < 0;
    v4 = (unsigned __int8)v4;
    if ( !v2 )
      v4 = -(unsigned __int8)v3;
    v8 = v4;
    func0((char *)(v6 + j), (char *)(v4 + v6));
  }
  return 0;
}

int __fastcall func2(int a1, int a2, int a3)
{
  int v3; // r3
  bool v4; // nf
  int v5; // r2
  int v6; // r3
  int v8; // [sp+4h] [bp+4h]
  int v9; // [sp+8h] [bp+8h]
  int v10; // [sp+Ch] [bp+Ch]
  int v11; // [sp+10h] [bp+10h]
  int v12; // [sp+14h] [bp+14h]
  signed int i; // [sp+18h] [bp+18h]

  v10 = a1;
  v9 = a2;
  v8 = a3;
  v11 = 0;
  v12 = 0;
  for ( i = 0; i <= 35; ++i )
  {
    v3 = (unsigned __int8)(v11 + 3);
    if ( v11 + 3 <= 0 )
      v3 = -(unsigned __int8)-(char)(v11 + 3);
    v11 = v3;
    v6 = v12 + *(unsigned __int8 *)(v3 + v10) + 1;
    v5 = -v6;
    v4 = -v6 < 0;
    v6 = (unsigned __int8)v6;
    if ( !v4 )
      v6 = -(unsigned __int8)v5;
    v12 = v6;
    func0((char *)(v10 + v11), (char *)(v6 + v10));
    *(_BYTE *)(i + v8) = *(_BYTE *)(v10 + (unsigned __int8)(*(_BYTE *)(v12 + v10) + *(_BYTE *)(v11 + v10))) ^ *(_BYTE *)(i + v9);
  }
  return 0;
}

int __fastcall func3(int a1, int a2)
{
  int v2; // ST04_4
  int v3; // ST00_4
  int v5; // [sp+Ch] [bp+Ch]

  v2 = a1;
  v3 = a2;
  func1("bksec2020", (int)&v5);
  func2((int)&v5, v2, v3);
  return 0;
}

int __cdecl main(int argc, const char **argv, const char **envp)
{
  const char **v3; // ST00_4
  size_t v4; // r0
  char *s1; // ST0C_4

  v3 = argv;
  v4 = strlen(argv[1]);             		  // v3[2] plaintext
  s1 = (char *)malloc(4 * v4);                // key in v4; len(v4)=9
  func3((int)v3[2], (int)s1);
  if ( !strncmp(s1, (const char *)c, 0x24u) ) // 36 bytes
    puts("failure");
  else
    puts("suscess");
  return 0;
}
'''
## https://azeria-labs.com/memory-instructions-load-and-store-part-4/#:~:text=ARM%20uses%20a%20load%2Dstore,registers%20before%20being%20operated%20on.
## LDR R2, [R0]  => load data from [address==R0] => R2
## STR R2, [R0]  => store data from R2 => [address==R0]
## str r2, [r1, #4] => store data from R2 => [address r1 + 4]
## DCD unk_BCC
'''
The DCD directive allocates one or more words of memory, aligned on 
four-byte boundaries, and defines the initial runtime contents of the 
memory. DCDU is the same, except that the memory alignment is arbitrary.
'''
import string
from Crypto.Cipher import ARC4
from z3 import *

class Cracker:
	def __init__(self):
		self.cipher_text = b'\xB3\x28\x58\x4F\xB6\xF7\xFA\x55\x25\xED\x20\xEF\xBA\xCB\x65\x84\x1A\x65\xD2\xBB\x76\xD2\x32\x40\x55\x6B\xD9\x38\x53\xC6\x6E\xF0\x0B\x9A\x13\x7C'

		# self.cipher_text = bytes(36)
		self.plaint_text = [BitVec(f'k_{i}',9) for i in range(36)]
		self.alphabet = string.printable[:-6].encode()
	
	def func2(self, list_256, a2, arg3_cipher_store):	
		v11,v12 =0,0
		for i in range(0x24):
			v3 = (v11+3)&0xff
			# if v11 + 3 <= 0:v3 = (-(-(v11 + 3)))&0xff
			v11 = v3
			v6 = (v12 + list_256[v3]+1)&0xff
			# if v6<=0: v6 = -(-v6)
			v12 = v6
			list_256[v11],list_256[v6] = list_256[v6],list_256[v11]
			arg3_cipher_store[i] = list_256[(list_256[v12]+list_256[v11])&0xff] ^ a2[i]
		
	def func1(self, str_arg1, a2):
		v8,v11 = 0,len(str_arg1)
		for i in range(256):a2[i]=i
		for i in range(256):
			v4 = (str_arg1[i%v11] + a2[i]+v8+2)&0xff
			# v3 = -v4;
			# if v4 <= 0:v4 = -v3
			v8 = v4
			a2[i],a2[v4] = a2[v4],a2[i]
		
	def func3(self):
		v5 = [0 for _ in range(0x100)]
		a2 = [0 for _ in range(0x24)]
		self.func1(b'bksec2020',v5)
		# print(v5)
		self.func2(v5,self.cipher_text,a2)
		print(bytes(a2))
		'''
		s = Solver()
		## rule 0
		for i in range(len(self.plaint_text)):s.add(Or([self.plaint_text[i]==c for c in self.alphabet]))
		v11,v12 =0,0
		for i in range(0x24):
			v3 = (v11+3)&0xff
			v11 = v3
			v6 = (v12 + v5[v3]+1)&0xff
			v12 = v6
			v5[v11],v5[v6] = v5[v6],v5[v11]
			s.add(self.cipher_text[i] == v5[(v5[v12]+v5[v11])&0xff] ^ self.plaint_text[i])
		
		while s.check()==sat:
			print(s.model())
			yield bytes(s.model()[self.plaint_text[i]].as_long() for i in range(len(self.plaint_text)))
			s.add(Or([self.plaint_text[i]!=s.model()[self.plaint_text[i]].as_long() for i in range(len(self.plaint_text))]))
		'''
		
if __name__=='__main__':	
	crack = Cracker()
	crack.func3()
	