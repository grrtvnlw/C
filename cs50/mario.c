#include <stdio.h>
#include <cs50.h>

int main(void)
{
  // Get positive integer from user
  int n;
  int m;
  do
  {
    n = get_int("Width: ");
    m = get_int("Height: ");
  } while (n < 1);

  // Print out that many question marks
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("#");
    }
    printf("\n");
  }
}