
/*
Name: Rhys Carter
Student ID: 201974757
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer

    char buffer[50] = {};
    char dash[10] = {'-'};

    // process the command-line data using appropriate string functions
    // printf("%d\n",argc);

    for (int i=1; i<argc; i++) {
        strcat(buffer,argv[i]);
        // printf("pass\n");
        if (i < argc - 1) {
            strcat(buffer,dash);
        }
        
    }

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}