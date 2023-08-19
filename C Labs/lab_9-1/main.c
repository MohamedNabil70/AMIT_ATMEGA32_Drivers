#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length,i;
    printf("Enter array length: ");
    scanf("%d",&length);

    char* ptr=(char*) malloc(length* sizeof(char));

if(ptr!= NULL){
     printf("Enter array elements:\n");
     for(i=0;i<length;i++){
            scanf("%d",&ptr[i]);

     }
          printf("\narray elements:\n");

     for(i=0;i<length;i++){
            printf("%d ",ptr[i]);

     }
}
    return 0;
}
