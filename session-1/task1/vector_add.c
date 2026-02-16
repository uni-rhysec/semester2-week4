
/*
 * Sum of 2 vectors
 */

 #include <stdio.h>

 int main( void ) {
    float a[]={ 1.0,1.0,1.0,1.0,1.0 };
    float b[]={ 2.0,3.0,4.0,5.0,6.0 };
    float c[5];

    /*
    Code to compute the sum
    Store your answer in array c
    Print your final answer
    */

   for (int k=0; k<5; k++) {
      float sum = a[k] + b[k];
      c[k] = sum;
      printf("%.1f\n",sum);
   } 
   //printf("%f",c);

    return 0;
 }
