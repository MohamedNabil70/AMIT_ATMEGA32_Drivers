#include <stdio.h>
#include <stdlib.h>

int main()
{


unsigned short int angleByDegree,pattern,iterations;

while(1)
{
 printf("angleByDegree : ");

scanf(("%u"),&angleByDegree);

iterations=((angleByDegree*512)/360);
printf("%d\n",iterations);
}

return 0;
}
