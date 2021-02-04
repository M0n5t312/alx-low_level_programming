#include <stdio.h>
int main(void)
{
  int first_digit, first_letter;
  int last_digit = 57;
  int  last_letter = 102;
  for (first_digit = 48; first_digit <= last_digit; first_digit++)
    putchar (first_digit);
  for (first_letter = 97; first_letter <= last_letter; first_letter++)
    putchar (first_letter);
  putchar ('\n');
  return (0);
}
