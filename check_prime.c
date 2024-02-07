#include <stdio.h>
#include <math.h>
int main()
{
  int n, cout = 0;

  while (n != -1)
  {
    scanf("%d", &n);
    int i = 1;
    int c = 0;
    while (i <= n)
    {
      if (n % i == 0)
      {
        c++;
      }
      i++;
    }
    if (c == 2)
    {
      cout++;
    }
  }
  printf("%d", cout);
  return 0;
}
