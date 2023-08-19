#include <stdio.h>
#include <stdlib.h>

int main()
{
   int A[2][3]={1,2,3,
                4,5,6};
   int B[2][3]={6,5,4,
                3,2,1};

    int C[2][3];
    int i,j;
   for(i=0;i<2;i++){
       for(j=0;j<3;j++){

C[i][j]=A[i][j]+B[i][j];
    }
   }
   for(i=0;i<2;i++ ){

       for(j=0;j<3;j++){
       printf("[%d] ",C[i][j]);
       }

       printf("\n");
       }
    return 0;
}
