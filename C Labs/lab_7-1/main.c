#include <stdio.h>
#include <stdlib.h>

struct data{
char name[15];
int age;

};

int main()
{

    struct data my_data={.age= 21,.name="lol"};
   printf("Enter your name to print it  : ");
    scanf("%s",&my_data.name);
    printf("%s\n",my_data.name);
    printf("%d\n",my_data.age);

    return 0;
}
