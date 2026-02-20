
#include <stdio.h>

int main( void ) {

    // define suitable data
    int i,k;
    char j = "+";
    char l = "=";
    int count = scanf("%d %c %d %c",&i,&j,&k,&l);

    // use scanf to read from the terminal
    // print the output from scanf and the data values 
    int sum = i + k;
    printf("%d %c %d %c %d\n",i,j,k,l,sum);

    return 0;
}