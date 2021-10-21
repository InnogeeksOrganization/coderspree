#include <stdio.h>

int
main ()
{
  int n;
  scanf ("%d", &n);
  int arr[n];

  for (int j = 0; j < n; j++)
    {
      scanf ("%d", &arr[j]);
    }


  for (int i = 0; i < 5; i++)
    {
      for (int j = i + 1; j < 5; j++)
{
 if (arr[i] == arr[j])
   printf ("%d\n", arr[j]);
}
    }
  return 0;
}
