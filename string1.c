#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char sd[]="SAI DIVYA";
    printf("I am %s\n",sd);

    strcpy(sd,"DIVYA SAI");
    printf("I am %s\n",sd);

    return 0;
}
