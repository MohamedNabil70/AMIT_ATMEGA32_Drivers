#include <stdio.h>
#include <stdlib.h>


void linear_search(int arr[],int L,int val);
int main()
{
int len,value;
int A[]={1,5,3,-4,3,4,9,8};
len=8;
printf("enter value to search for\n");
scanf("%d",&value);
linear_search(A,len,value);
    return 0;
}


void linear_search(int arr[],int L,int val){


printf("Searching.\n");
 int i;
for(i=0;i<L;i++){
   if(arr[i]==val){
    printf("value found=%d in element #%d\n",val,(i+1));
    break;
   }else if(arr[i]==arr[(L-1)]) printf("value Not found");
   else printf(".\n");
}


}
