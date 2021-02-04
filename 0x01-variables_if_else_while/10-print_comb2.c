#include <stdio.h>
int main(void)
{
  int first_num = 47;
  int first_digit;

  for (first_num = 48;first_num <= 57; first_num++)
    {

    for	(first_digit = 48; first_digit <= 57; first_digit++)
      {
        putchar (first_num);
        putchar(first_digit);
	putchar	(32);
        putchar	(44);
      }	
    }
  putchar ('\n');
  return (0);
}
