#include <stdio.h>
/**
  *main - this is the main function
  *Return: 0 (success)
  */

int main(void)

{
char b;

for (b = 'a'; b <= 'z'; b++)

{
if (b != 'e' && b != 'q')
putchar(b);
}

putchar('\n');

return (0);


}




