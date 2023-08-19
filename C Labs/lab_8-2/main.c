#include <stdio.h>
#include <stdlib.h>


void BinarySearch(int[],int,int);

int main()
{
int arr[]={1,21,4,3,45,-3,32,99,5,8};
int value,length;
length=(sizeof(arr))/(sizeof(arr[0]));

    printf("Enter a number to search for: ");
scanf("%d",&value);

BinarySearch(arr,length,value);

    return 0;
}


void BinarySearch(int sub[],int len,int val){
int left,right,mid;
left=0;
right=len-1;

while(left<=right)
{
mid=(left+right)/2;
if(sub[mid]==val){
printf("Value Found");
return;
}else if(sub[mid]<val){
left=mid+1;

}else if(sub[mid]>val){
   right=mid-1;
}


}
printf("Value Not Found!!!");



}
