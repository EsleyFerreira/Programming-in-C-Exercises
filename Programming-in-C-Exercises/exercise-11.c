#include <stdio.h>
#include <locale.h>

int main()
{

  int i;

  for (i = 1; i < 500; i++)
  {

    if (i % 7 == 0)
    {
      continue;
    }
    printf("\t%d", i);
  }
  return 0;
}