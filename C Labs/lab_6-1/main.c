#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i=10;
 int arr[i];
   for(i=0;i<10;i++){
        printf("Enter value number %d:  ",1+i);
scanf("%d",&arr[i]);

}
        printf("\n-------------------------\n");

     for(i=9;i>-1;i--){
        printf("value #%d= %d\n",1+i,arr[i]);

   }
    return 0;
}
