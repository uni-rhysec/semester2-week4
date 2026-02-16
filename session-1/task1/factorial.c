
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    int f[20] = {1};

    /*
    Code to compute the factorial of each array index
    Print your final answer
    */

   for (int k=1; k<21; k++) {
      f[k] = f[k-1] * k;
      printf("%d! is %d\n",k,f[k]);

   }

    return 0;
 }
