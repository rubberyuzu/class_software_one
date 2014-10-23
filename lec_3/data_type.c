#include <stdio.h>

int main()
{
  char ichar = 1;
  short ishort = 1;
  int iint = 1;
  long ilong = 1;
  
  int i;
  for(i=1; i<65; i++){
    printf ("2^%2d = %5d %10d %11d %20ld\n", i, ichar*=2, ishort*=2, iint*=2, ilong*=2);
  }
  // "2" of "%2d" means the space it takes to print that part.

  ichar = ishort = iint = ilong = -1;

  for(i=1; i<65; i++){
    printf ("-2^%2d = %5d %10d %11d %20ld\n", i, ichar*=2, ishort*=2, iint*=2, ilong*=2);
  }

  return 0;
}