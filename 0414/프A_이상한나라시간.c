#include <stdio.h>

int main(void)
{
  int h, m;
  scanf("%d %d", &h, &m);
  printf("%d시 %d분",((60 * h + m) * 2000 / 1440)/ 100,
    ((60 * h + m) * 2000 / 1440)% 100);
  return 0;
}
