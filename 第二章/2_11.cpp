#include <stdio.h>

void inplace_swap(int *x,int *y){
    if(*x != *y){
        *y = *x ^ *y;
        *x = *x ^ *y;
        *y = *x ^ *y;
    }
}


void reverse_arry(int a[] ,int cnt){
    int first,last;
    for(first =0,last = cnt -1 ;first<=last;first++,last--){
        inplace_swap(&a[first],&a[last]);
    }
}

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9};
    reverse_arry(a,9);
    
    int n = sizeof(a)/sizeof(a[0]);
    for(int i = 0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}