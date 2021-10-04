
#include <stdlib.h>
#include <stdio.h>

int h(){
    printf("function h");
}

int  g(int i){
    int j =4;
    printf("%d\n", i+j);
    return (i+j);
}

void main(){
    printf("Output : %d", 12);
}