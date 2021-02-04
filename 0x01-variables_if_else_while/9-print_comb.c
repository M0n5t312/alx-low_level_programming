#include <stdio.h>
int main(void)
{
  int first_digit;
   
    for (first_digit = 48; first_digit <= 57; first_digit++)
      {
	putchar(first_digit);
        putchar (32);
	putchar (44);
      }
  putchar ('\n');
  return (0);
}
