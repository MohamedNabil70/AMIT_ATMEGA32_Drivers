#include <stdio.h>
#include <stdlib.h>



float average();


int main()
{
printf("enter five numbers to calculate average:\n");
float n=average();
printf("\naverage is: %f",n);

return 0;
}


float average()
{
float x,y,z,a,b;
scanf("%f%f%f%f%f",&x,&y,&z,&a,&b);
float avg=(x+y+z+a+b)/5;
return avg;
}
