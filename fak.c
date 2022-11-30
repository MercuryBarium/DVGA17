#include <stdio.h>
#include <stdlib.h>

/* recursive function for 
   factorial calculation  */
int fak(int n) {
 if (n == 0)
  return 1;
 else
  return n * fak(n - 1);
}

/* main program */
int main(int argc, char *argv[]) {
 int n;
 if (argc != 2) {
  fprintf(stderr, "usage %s  <n> \n\n", argv[0]);
  exit(1);
 }
 n = atoi(argv[1]);
 printf("\tn = %3d n! = %3d\n", n, fak(n));
 return 0;
}
