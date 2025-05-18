#include <stdio.h>
int main(void){
    int n, m;
    scanf("%d %d", &n,&m);
    for (int i = n; i < m+1; i++){
        printf("%d ", i);
    }
    return 0;
}

