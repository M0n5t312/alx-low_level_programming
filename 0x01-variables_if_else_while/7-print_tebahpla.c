#include <stdio.h>
int main(void)
{
  int first = 'a';
  int last;
  for (last = 'z'; last >= first; last--)
    putchar(last);
  putchar ('\n');
  return (0);
}
