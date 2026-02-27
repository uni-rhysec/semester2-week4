#include <stdio.h>

int main( void ) {
/*
    int a[] = {1, 2, 27};
    printf("%d\n",a[0]);
*/

    int *kp = calloc( 10, sizeof(int) );
    printf("%d\n",*kp);

    return 0;
}