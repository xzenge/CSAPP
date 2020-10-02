#include <stdio.h>

void testA(int x){
    int b = x & 0x000000FF;
    printf("%x",b);
    printf("\n");
}

void testB(int x){
    int b = x ^ ~0xff;
    printf("%x",b);
    printf("\n");
}

void testC(int x){
    int b = x | 0x000000FF;
    printf("%x",b);
    printf("\n");
}

int main(){
    testA(0x87654321);
    testB(0x87654321);
    testC(0x87654321);

    return 0;   
}