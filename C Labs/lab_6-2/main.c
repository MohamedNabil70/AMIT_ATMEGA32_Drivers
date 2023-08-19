#include <stdio.h>
#include <stdlib.h>

int* math(int arr[2]);

int main()
{
    int num[2];
    printf("Enter two values to operate on: ");
    scanf("%d%d",&num[0],&num[1]);

    int* p=math(num);

        printf("sum=%d\n",p[0]);
        printf("subtraction=%d\n",p[1]);
        printf("multiplication=%d\n",p[2]);
        printf("average=%d\n",p[3]);

    return 0;
}


 int* math(int arr[2]){
int sum,sub,avg,multi;
 sum=arr[0]+arr[1];
 sub=arr[0]-arr[1];
 multi=arr[0]*arr[1];
 avg=(arr[0]+arr[1])/2;
static int math_arr[4];
math_arr[0]=sum;
math_arr[1]=sub;
math_arr[2]=multi;
math_arr[3]=avg;

        return &math_arr[0];
          }
