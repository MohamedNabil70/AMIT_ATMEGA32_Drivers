#include <stdio.h>
#include <stdlib.h>

void selection_Sort(int*,int);

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

selection_Sort(arr,length);

        printf("\n\nElements after sorting: \n");
for(i=0;i<length;i++){
        printf("%d\t",arr[i]);
}


    return 0;
}

void selection_Sort(int* ptr,int len){
int i,c,minimum_index,temp;

for(i=0;i<len-1;i++){
    minimum_index=i;
    for(c=(minimum_index+1);c<len;c++){
            if(ptr[c]<ptr[minimum_index]){
                minimum_index=c;
            }
    }
    //swap
    temp=ptr[minimum_index];
    ptr[minimum_index]=ptr[i];
    ptr[i]=temp;
}
}

