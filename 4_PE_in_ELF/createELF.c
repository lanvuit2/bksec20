#include <stdio.h>
#include <stdlib.h>

void failed(){
	printf("FAILURE\n");
}

void success(){
	printf("SUCCESS\n");
}
int check(char* ptr, unsigned long size)
{
    unsigned long idx = 0;
    // while (idx != 10){
    //     printf("%s", *(&ptr+idx));
    // }
    char tmp;
    int num1, num2, num3;
        tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x77;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0x96;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x77;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0x96;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x30;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x77;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x30;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0x87;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x77;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x77;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0x87;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x77;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x87;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x77;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x87;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0x87;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0x87;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x30;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x77;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x30;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x87;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0x96;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x30;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0x87;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x87;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x87;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x96;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x30;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x96;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x30;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0x87;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x77;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x30;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x96;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x30;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0x87;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x30;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x30;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x77;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0x96;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x87;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0x96;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x87;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0x87;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x30;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x30;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0x96;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x77;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x96;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x87;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x30;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0x96;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x77;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x30;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0x96;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x30;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x77;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x77;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x30;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x96;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x77;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0x87;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x30;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0xb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0x96;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x30;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x77;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x87;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x30;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x87;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x77;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x12;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x30;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x96;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x91;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0xf7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1f;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7d;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8f;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5f;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfc;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaf;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0xf4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x26;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0x76;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x37;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x67;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0xb4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x96;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x69;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x96;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x30;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x62;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x77;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0xe7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0x58;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb9;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbd;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7c;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x87;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xee;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe2;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x46;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb6;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd0;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd6;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x69;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xaa;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0x8e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x63;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xf8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0xbd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0x5c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x9a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x16;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7e;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4f;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x61;
    num3 = num1 ^ 0x8a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0x26;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc5;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0xfd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0xd1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0xbf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xac;
    num3 = num1 ^ 0x2f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5a;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2c;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x52;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x8c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0x66;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x2b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0xb0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0x2e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x77;
    num3 = num1 ^ 0x9c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x61;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x53;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x80;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa9;
    num3 = num1 ^ 0x40;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0xea;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0xc3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x58;
    num3 = num1 ^ 0xa7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbb;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0xdb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb1;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x77;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0xcd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfb;
    num3 = num1 ^ 0x13;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0x48;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0xca;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf7;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0x4b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb2;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x73;
    num3 = num1 ^ 0x73;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xce;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc3;
    num3 = num1 ^ 0x3c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf4;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x29;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfd;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x57;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2a;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0x30;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0x25;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd7;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x67;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0xae;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0x2c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0xef;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x60;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0x14;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x87;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xea;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x86;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0x4d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x15;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0xf2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0xe4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x66;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x62;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0xa0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf8;
    num3 = num1 ^ 0x22;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0x3b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0x28;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0xa4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6a;
    num3 = num1 ^ 0xad;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3a;
    num3 = num1 ^ 0x7f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0xe8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x33;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5c;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd8;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0xed;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x83;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0xe6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x84;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0xa6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x52;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x9e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdc;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0xcf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2d;
    num3 = num1 ^ 0x78;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa3;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdb;
    num3 = num1 ^ 0x63;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x78;
    num3 = num1 ^ 0x87;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcd;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x16;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1b;
    num3 = num1 ^ 0x96;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5d;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0x8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9c;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x13;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x7a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x68;
    num3 = num1 ^ 0x5a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc6;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa5;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0x87;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0x23;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf2;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0xd5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0xf3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc4;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xfa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0x7d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0xf1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf6;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x17;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x42;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x7c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x25;
    num3 = num1 ^ 0xda;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0x46;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x83;
    num3 = num1 ^ 0x3f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6e;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x77;
    num3 = num1 ^ 0x77;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8c;
    num3 = num1 ^ 0x7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc0;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0xcb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x76;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe7;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x47;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x18;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0xaa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0x21;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0x5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x31;
    num3 = num1 ^ 0xce;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6d;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x59;
    num3 = num1 ^ 0xaf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x75;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x99;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x65;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0xc0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0xd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7b;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6c;
    num3 = num1 ^ 0x68;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5e;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x99;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xad;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0x4c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x79;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0xd4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x93;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xeb;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x0;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xff;
    num3 = num1 ^ 0x74;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0x89;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4a;
    num3 = num1 ^ 0xf6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9a;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6b;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x47;
    num3 = num1 ^ 0x84;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x89;
    num3 = num1 ^ 0x8d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0xe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0xfb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0xb3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xed;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xba;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x56;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x32;
    num3 = num1 ^ 0xb7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x90;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x82;
    num3 = num1 ^ 0xc7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x38;
    num3 = num1 ^ 0xff;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9d;
    num3 = num1 ^ 0x51;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9e;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4e;
    num3 = num1 ^ 0x4e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xec;
    num3 = num1 ^ 0xec;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0x6d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0x5d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x81;
    num3 = num1 ^ 0xa;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1d;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbe;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0xc6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x1b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0xfe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe4;
    num3 = num1 ^ 0x6f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa1;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3c;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x9d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0x94;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0x35;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x28;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1e;
    num3 = num1 ^ 0xe1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x1a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4b;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfe;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0x96;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0xc5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0xe2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8d;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd4;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0xe9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcf;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x98;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xde;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x1d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa;
    num3 = num1 ^ 0x5e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x74;
    num3 = num1 ^ 0x50;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0x41;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb0;
    num3 = num1 ^ 0x39;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x88;
    num3 = num1 ^ 0xcc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x94;
    num3 = num1 ^ 0x90;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf5;
    num3 = num1 ^ 0xf9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x55;
    num3 = num1 ^ 0x55;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa2;
    num3 = num1 ^ 0xa2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xab;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x33;
    num3 = num1 ^ 0x7e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x85;
    num3 = num1 ^ 0x45;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe1;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3f;
    num3 = num1 ^ 0x6a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x51;
    num3 = num1 ^ 0xe5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa6;
    num3 = num1 ^ 0xa9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9f;
    num3 = num1 ^ 0x29;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x39;
    num3 = num1 ^ 0x32;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb7;
    num3 = num1 ^ 0x8b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0x81;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xda;
    num3 = num1 ^ 0xfc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2;
    num3 = num1 ^ 0x3e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0xa5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcc;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe9;
    num3 = num1 ^ 0x60;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb3;
    num3 = num1 ^ 0x7b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd9;
    num3 = num1 ^ 0x19;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0xb5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x22;
    num3 = num1 ^ 0xab;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2e;
    num3 = num1 ^ 0x6b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0x1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0x70;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0x2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd3;
    num3 = num1 ^ 0xdc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0xbe;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0xd6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x48;
    num3 = num1 ^ 0xeb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xae;
    num3 = num1 ^ 0xa8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd1;
    num3 = num1 ^ 0x38;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdf;
    num3 = num1 ^ 0x24;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0x6c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa0;
    num3 = num1 ^ 0x5f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x10;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc7;
    num3 = num1 ^ 0x82;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4c;
    num3 = num1 ^ 0x4f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x72;
    num3 = num1 ^ 0x72;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0xe0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x92;
    num3 = num1 ^ 0xd9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x9b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb5;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x45;
    num3 = num1 ^ 0xba;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x19;
    num3 = num1 ^ 0x92;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x12;
    num3 = num1 ^ 0x57;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x23;
    num3 = num1 ^ 0xe3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x40;
    num3 = num1 ^ 0xc9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0xd2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa8;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x5b;
    num3 = num1 ^ 0xb2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf9;
    num3 = num1 ^ 0xd0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x42;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0x2a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x79;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x14;
    num3 = num1 ^ 0x9f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x11;
    num3 = num1 ^ 0x44;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd5;
    num3 = num1 ^ 0xdd;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0x36;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe5;
    num3 = num1 ^ 0x15;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc8;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0x37;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x96;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x43;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa4;
    num3 = num1 ^ 0x5b;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2b;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x2f;
    num3 = num1 ^ 0x1e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xef;
    num3 = num1 ^ 0x10;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7f;
    num3 = num1 ^ 0x80;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8e;
    num3 = num1 ^ 0x49;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x21;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xfa;
    num3 = num1 ^ 0x3a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x64;
    num3 = num1 ^ 0x64;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb8;
    num3 = num1 ^ 0xb8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x95;
    num3 = num1 ^ 0x95;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x54;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc9;
    num3 = num1 ^ 0x20;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x18;
    num3 = num1 ^ 0x88;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xcb;
    num3 = num1 ^ 0x31;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x20;
    num3 = num1 ^ 0xdf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe0;
    num3 = num1 ^ 0x1f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x35;
    num3 = num1 ^ 0xbc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0xc2;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbf;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xca;
    num3 = num1 ^ 0x97;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xdd;
    num3 = num1 ^ 0x65;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x24;
    num3 = num1 ^ 0xa1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1a;
    num3 = num1 ^ 0xc1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x97;
    num3 = num1 ^ 0x98;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3e;
    num3 = num1 ^ 0xbb;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xb4;
    num3 = num1 ^ 0xac;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x49;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe8;
    num3 = num1 ^ 0x17;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc2;
    num3 = num1 ^ 0x3d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x41;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x34;
    num3 = num1 ^ 0x71;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9;
    num3 = num1 ^ 0xb1;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0xb9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x44;
    num3 = num1 ^ 0x54;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x27;
    num3 = num1 ^ 0xd8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x70;
    num3 = num1 ^ 0x8f;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc1;
    num3 = num1 ^ 0x4a;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe6;
    num3 = num1 ^ 0xa3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf1;
    num3 = num1 ^ 0x11;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x4d;
    num3 = num1 ^ 0xc4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x71;
    num3 = num1 ^ 0x34;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x6f;
    num3 = num1 ^ 0xd3;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x1c;
    num3 = num1 ^ 0xf5;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x50;
    num3 = num1 ^ 0x4;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf3;
    num3 = num1 ^ 0xc;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x7a;
    num3 = num1 ^ 0x85;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xbc;
    num3 = num1 ^ 0x43;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3d;
    num3 = num1 ^ 0xb6;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x93;
    num3 = num1 ^ 0xee;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xc;
    num3 = num1 ^ 0xc8;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0xf;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xe3;
    num3 = num1 ^ 0x1c;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x56;
    num3 = num1 ^ 0x59;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x53;
    num3 = num1 ^ 0xd7;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x9b;
    num3 = num1 ^ 0x27;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8b;
    num3 = num1 ^ 0x75;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x91;
    num3 = num1 ^ 0x6e;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xd2;
    num3 = num1 ^ 0x2d;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x36;
    num3 = num1 ^ 0xde;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x3b;
    num3 = num1 ^ 0x9;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0x8a;
    num3 = num1 ^ 0x86;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xf0;
    num3 = num1 ^ 0xf0;
    if (tmp != num3){
        return 0;
    }
    tmp = *(ptr++);
    num1 = 0xa7;
}
