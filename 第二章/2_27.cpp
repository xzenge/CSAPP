#include <stdio.h>

int uadd_ok(unsigned x,unsigned y){
    unsigned z = x + y;
    return z>=x;
    
}

int main(int argc, char const *argv[])
{
    printf("%d" , (unsigned)uadd_ok(9,12));
    return 0;
}
