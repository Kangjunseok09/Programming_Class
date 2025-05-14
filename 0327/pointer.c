#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 10;
    int *p = (int*)malloc(sizeof(int));
    printf("%d", *p);
    
    return 0;
}