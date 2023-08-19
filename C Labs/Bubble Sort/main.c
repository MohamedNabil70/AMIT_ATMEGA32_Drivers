#include <stdio.h>
#include <stdlib.h>

void Bubble_Sort(int*,int);

int main()
{
  int length;
    printf("Enter the number of elements you want to sort: ");
    scanf("%d",&length);

        int arr[length],i;
        printf("Enter elements to be sorted in an ascending order: \n");
for(i=0;i<length;i++){
        scanf("%d",&arr[i]);
}
        printf("\n\nElements before sorting: \n");
for(i=0;i<length;i++){
        printf("%d\t",arr[i]);
}

Bubble_Sort(arr,length);

        printf("\n\nElements after sorting: \n");
for(i=0;i<length;i++){
        printf("%d\t",arr[i]);
}


    return 0;
}

void Bubble_Sort(int* ptr,int len){
int i,c,temp;
for(i=0;i<len-1;i++){
    for(c=0;c<len-1-i;c++){
            if(ptr[c]>ptr[c+1]){
                temp=ptr[c]; //swap
                ptr[c]=ptr[c+1];
                ptr[c+1]=temp;
            }
        }
    }
}

