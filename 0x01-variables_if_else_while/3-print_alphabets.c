#include <stdio.h>
int main(void)
{
  int x, y;
  for (x = 'a'; x <= 'z'; x++)
    {
      putchar(x);
    }
  for (y = 'A'; y <= 'Z'; y++)
    {
      putchar(y);
    }
  putchar('\n');
}
