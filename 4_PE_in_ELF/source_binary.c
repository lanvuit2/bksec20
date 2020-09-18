#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* flag = "\xbd\x2d\x35\x5d\x3d\x21\xe9\xd1\xd1\xf1\x31\xa3\xb\xb\x49\x59\xd9\x69\x51\x49\x8b\x39\x9\x49\xb\xfd\xc9\x79\x89\x91\x51\x69\xd1\xb3\xf3\x73\x41";
char guess[37];
// BKSEC{https://medium.com/@lanvuit201}

void print_failed(){
	printf("FAILURE\n");
}

void print_success(){
	printf("SUCCESS\n");
}

void check_it(){
	if(!strncmp(guess, flag, 37)){
		print_success();
	}else{
		print_failed();
	}
}

void print_hex(const char *s)
{
  while(*s)
    printf("\\x%x", *s++ & 0xff);
  printf("\n");
}

void reverse_it(){
	unsigned int  bits = sizeof(char) * 8;
	char reverse_char = 0;
	char c;
	char temp;

	for(int k = 0; k < 37; k++){
		c = guess[k];
		for (int i = 0; i < bits; i++){
			temp = (c & (1 << i));
			if(temp){
				reverse_char |= (1 << ((bits - 1) - i));
			}
		}
		guess[k] = reverse_char;
		reverse_char = 0;
	}
	print_hex(guess);
}

void flip_it(){
	for(int i = 0; i < 37; i++){
		guess[i] = guess[i] ^ 0xff;
	}
}


int main(int argc, char **argv)
{
	printf("Input password:\n");
	fgets(guess, 38, stdin);
	flip_it();
	reverse_it();
	check_it();
	return 0;
}