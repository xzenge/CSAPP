//
// Created by Administrator on 2020/10/2 0002.
//

#include <2_4.h>
#include <string.h>

int main(){
    const char *s = "abcdef";
    show_bytes((byte_pointer)s,strlen(s));
    return 0;
}

