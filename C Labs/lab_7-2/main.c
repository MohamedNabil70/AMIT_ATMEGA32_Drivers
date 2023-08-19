#include <stdio.h>
#include <stdlib.h>

struct results
{
 int sum,sub,multi;
float div,avg;
};
struct results* math(int,int);

int main()
{
    int x,y;
        printf("Enter first number:");
        scanf("%d",&x);
        printf("Enter second number:");
        scanf("%d",&y);
   struct results* ptr;
   ptr=math(x,y);
            printf("\nSum= %d\n",(*ptr).sum);
            printf("Sub= %d\n",(*ptr).sub);
            printf("Multiplication= %d\n",ptr->multi);
            printf("Division= %f\n",ptr->div);
            printf("Average= %f\n",ptr->avg);


    return 0;
}


 struct results* math(int a,int b){

static struct results s1;
s1.sum=a+b;
s1.sub=a-b;
s1.multi=a*b;
s1.div=(float)a/b;
s1.avg=(float)(a+b)/2;

return &s1;

 }
