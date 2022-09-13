#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 /**
  *print alhphabet in lower case followed 
  *by a new line
  *
  *Return: Always 0 (Success)
  */

void print_alphabet(void)
{
  char alpha;

  for (alpha = 'a'; alpha <= 'z'; alpha++)
    {

      _putchar(alpha);

    }

  _putchar('\n');

}
