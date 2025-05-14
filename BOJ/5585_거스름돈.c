#include <stdio.h>

int main(){
    int n;
    int sum = 0;
    scanf("%d", &n);
    n = 1000 - n;
    while (__GCC_ATOMIC_TEST_AND_SET_TRUEVAL){
            
        if (n - 500 >= 0) {
            n -= 500;
            sum += 1;
        } else if (n - 100 >= 0){
            n -= 100;
            sum += 1;
        } else if (n - 50 >= 0){
            n -= 50;
            sum += 1;
        } else if (n - 10 >= 0){
            n -= 10;
            sum += 1;
        } else if (n - 5 >= 0){
            n -= 5;
            sum += 1;
        } else if (n - 1 >= 0){
            n -= 1;
            sum += 1;
        } else if (n == 0) {
            break;
        }
    
    }
    printf("%d", sum);

}