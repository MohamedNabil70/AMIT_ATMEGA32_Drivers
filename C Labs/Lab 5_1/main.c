#include <stdio.h>
#include <stdlib.h>

void update(int*,int*,int*,int*);

int main()
{
 int x,y,sum,sub;

printf("enter two numbers to operate:\n");
scanf("%d%d",&x,&y);

update(&x,&y,&sum,&sub);
printf("the sum of two numbers is: %d\n",sum);
printf("\nthe difference between two numbers is: %d\n",sub);

    return 0;
}


void update(int* p1,int* p2,int* p_sum,int* p_sub)
{
 *p_sum=*p1+*p2;
 *p_sub=*p1-*p2;

}
