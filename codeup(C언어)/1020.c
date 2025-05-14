#include <stdio.h>

int main() {
    int bymd, jumin;
    scanf("%d-%d", &bymd, &jumin);
    printf("%06d%d", bymd, jumin);

    return 0;
}