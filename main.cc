
#include <stdlib.h>
#include <stdio.h>

int g(){
    printf("function g");
}

int  f(int i){
    int j =2;
    printf("%d\n", i+j);
    return (i+j);
}

void main(){
    printf("Output : %d", 12);
}