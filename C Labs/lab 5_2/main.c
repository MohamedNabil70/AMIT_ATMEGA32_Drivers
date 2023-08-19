#include <stdio.h>
#include <stdlib.h>

float* math(int,int);

int main()
{
    int x,y;
    printf("Enter 2 values to opearate on:\n");
    scanf("%d%d",&x,&y);
    float* p_avg= math(x,y);
        printf("average is:  %f\n",*p_avg);
    float* p_sum= math(x,y);
            printf("\nsum is:  %f\n",*p_sum);

    float* p_sub= math(x,y);
        printf("\nsubtraction is:  %f\n",*p_sub);

    return 0;
}


float* math(int a,int b)
{
 static int i=0;
 i++;
 static float sum,sub,avg;
sum=a+b;
sub=a-b;
avg=(float)(a+b)/2;
if (i==1)
return &avg;
else if(i==2)
return &sum;
else if(i==3)
return &sub;
else
printf
}
