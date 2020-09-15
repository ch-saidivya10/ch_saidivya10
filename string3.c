#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char *sd[]={"SAI","DIVYA"};
    printf("I am %s\n",sd[1]);

    sd[1]= "KRISHNA";
    printf("I am %s\n",sd[1]);
    return 0;
}
