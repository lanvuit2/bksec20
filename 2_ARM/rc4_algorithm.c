#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 256 
// 'BKSEC{th3_f1l3_1s_n0t_rc4_4lg0r1thm}'
char *c = "\xb3\x28\x58\x4f\xb6\xf7\xfa\x55\x25\xed\x20\xef\xba\xcb\x65\x84\x1a\x65\xd2\xbb\x76\xd2\x32\x40\x55\x6b\xd9\x38\x53\xc6\x6e\xf0\xb\x9a\x13\x1";
char flag[36];
void swap(unsigned char *a, unsigned char *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int trans(char *key, unsigned char *S) {

    int len = strlen(key);
    int j = 0;
    int i;

    for (i = 0; i < N; i++)
        S[i] = i;

    for (i = 0; i < N; i++) {
        j = (j + S[i] + key[i % len] + 2) % N;
        swap(&S[i], &S[j]);
    }

    return 0;
}
// void print_hex(const char *s)
// {
//   while(*s)
//     printf("\\x%x", *s++ & 0xff);
//   printf("\n");
// }

int rc4(unsigned char *S, char *flag) {

    int i = 0;
    int j = 0;
    int n;

    for (n = 0; n < 36; n++) {
        i = (i + 3) % N;
        j = (j + S[i] + 1) % N;

        swap(&S[i], &S[j]);
        int rnd = S[(S[i] + S[j]) % N];

        flag[n] = rnd ^ flag[n];
    }
    // print_hex(flag);

    return 0;
}
void check(){
    if(!strncmp(flag, c, 36)){
        printf ("success\n");
    }
    else{
        printf ("failed\n");
    }
}

int main(int argc, char *argv[]) {
    
    char *key = "bksec2020";
    unsigned char S[N];
    printf("Input password:\n");
	fgets(flag, 37, stdin);
    trans(key, S);
    rc4(S, flag);
    check();
    return 0;
}
