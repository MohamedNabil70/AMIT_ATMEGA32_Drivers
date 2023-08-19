#include <stdio.h>
#include <stdlib.h>
#include "prototypes.h"
#include "suii.h"


int main()
{
   int x,y;
    printf("enter 2 numbers to calculate:\n");
    scanf("%d%d",&x,&y);
    math(x,y);
    mult(x,y);
    division(x,y);
    return 0;
}
