#include <stdio.h>
#include <string.h>
#include <mcheck.h>
#include <stdlib.h>

extern void asmb_callchecking(char x[], long n);

void asmb_orig(char x[], long n)
{
  long i,j;
  for (i=0,j=n-1; i<j; i++, j--) {
    char t=x[i];
    x[i]=x[j];
    x[j]=t;
  }
}

int test(char x[], long n)
{
  char x_input[512],x_ref[512],x_test[512];
  memset(x_input,'>',2);
  memset(x_input+n+2,'<',2);
  memcpy(x_input+2,x,n);
  memcpy(x_ref,x_input,n+4);
  memcpy(x_test,x_input,n+4);
  printf(" input: %.*s",n+4,x_ref);
  asmb_callchecking(x_test+2,n);
  asmb_orig(x_ref+2,n);
  if (memcmp(x_test,x_ref,n+4)) {
    printf("\n  Error: wrong output\n\
  expected: %.*s\n\
  actual:   %.*s\n",n+4,x_ref,n+4,x_test);
    return 0;
  }
  printf("; output ok\n");
  return 1;
}



int main()
{
  char *s = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@";
  int f;

  fprintf(stdout,"The actual inputs are between >> and <<\n");
  f =  test(s,32);
  f &= test(s,64);
  f &= test(s,0);
  if (!f)
    fprintf(stdout,"\nTest failed.\n");
  else
    fprintf(stdout,"\nTest succeeded.\n");
  return !f;
}
