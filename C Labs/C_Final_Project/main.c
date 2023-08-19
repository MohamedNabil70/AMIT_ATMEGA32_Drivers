#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include "DataBase.h"
#define MAX 10

student_Data entry[MAX];


int main()
{


uint8 i,x,check,command,entry_num=0,id,year;
uint8 subjects[3],grades[3],list[MAX];

    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^^##  WELCOME TO STUDENT DATA BASE  ##^^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^^##  You Can Add Up To %d Students ##^^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n",MAX);

cmd :
    printf("\n\n\t#########--COMMAND MENU--#########\n");
    printf("\n\tChoose Any Operation To Perform :\n");
    printf("\n\t[1] Add new student to the database.");
    printf("\n\t[2] Check if a student ID you enter exists in database.");
    printf("\n\t[3] Display student Data using his ID.");
    printf("\n\t[4] Get the list of IDs of the students.");
    printf("\n\t[5] Get the number of students in the database.");
    printf("\n\t[6] Check if the database is full.");
    printf("\n\t[7] Delete the student data with the given ID.");
    printf("\n\n\t[8] End Program.\n   #");

cmd_0 :
 scanf("%u",&command);

 switch (command)
 {


    case 1: //Add new student to the database
cmd_1 :

check=SDB_IsFull();
if(check==1){
     printf("\n\t\t### Database Is Full!! ###\nDo You want to delete an existing Student?");
 printf("\nYes [1]\nNo  [0] : ");

scanf("%u",&x);
if(x==1)
{
  goto cmd_7;
}else{
goto cmd;
}
}

printf("\nStudent ID      : ");
scan_id:
scanf("%u",&id);
//Safety blocks:

if(id>1294967295){
   printf("\nStudent ID Can't Be negative.....Please Try Again: ");
 goto scan_id;
}
if(id==0){
   printf("\nStudent ID Can't Be Zero.....Please Try Again: ");
 goto scan_id;
}

check=SDB_IsIdExist(id);
if(check==1){
    printf("\nStudent ID Already Exists....Try Again: ");
goto cmd_1;
}
//end of safety blocks
printf("Student year    : ");
 scanf("%u",&year);
for(i=0;i<3;i++)
{
    printf("Subject %u ID    : ",i+1);
    scanf("%u",&subjects[i]);
    printf("Subject %u Grade : ",i+1);
    scanf("%u",&grades[i]);
while(grades[i]>100){
printf("\nThe allowed range of grades is from [0] to [100]....Try Again: ");
scanf("%u",&grades[i]);
}
}
check=SDB_AddEntry(id,year,subjects,grades) ;
if(check==1){
  printf("\n\t###  Student Data Added Successfully  ###\n");
}else if(check==0){
  printf("\nStudent Data Add Failed!!\nTry Again.......\n");
goto cmd_1;
}

printf("\nTo Add Another Student Data Enter  [1]\nTo Return To Command Menu Enter    [0] : ");
scanf("%u",&x);
if(x==1)
{
  goto cmd_1;
}else{
goto cmd;
}
goto cmd;

    case 2: //Check if student ID exists
cmd_2 :

printf("\nEnter a Student ID to check : ");
scanf("%u",&id);

while(id==0){
   printf("\nStudent ID Can't Be Zero.....Please Try Again: ");
 scanf("%u",&id);
}
check=SDB_IsIdExist(id);
if(check==1){
  printf("\n\t###  Student ID: { %u } Is Existing  ###\n",id);
}else if(check==0){
  printf("\n\t###  Student ID Is Not Existing  ###\n");
  printf("\n\tTry Again? [1]\n\tReturn To Command Menu [0] : ");

scanf("%u",&x);
if(x==1)
{
  goto cmd_2;
}else{
goto cmd;
}
}
goto cmd;
    case 3: //Read an entry matching the provided ID
cmd_3 :
printf("\nEnter a Student ID to display his/her Data : ");
scanf("%u",&id);

while(id==0){
   printf("\nStudent ID Can't Be Zero.....Please Try Again: ");
 scanf("%u",&id);
}
for(i=0;i<MAX;i++)
{
if(id==entry[i].student_ID){
    year = entry[i].student_Year;
    subjects[0] = entry[i].Course_1_ID ;
    grades[0] = entry[i].Course_1_Grade ;
    subjects[1] = entry[i].Course_2_ID   ;
    grades[1] = entry[i].Course_2_Grade  ;
    subjects[2] = entry[i].Course_3_ID   ;
    grades[2]  = entry[i].Course_3_Grade ;
}
}
check=SDB_ReadEntry(id,&year,subjects,grades);
if(check==0)
{
  printf("\n\t###  Student ID Is Not Existing  in database  ###\n");
  printf("\n\t*Display Existing IDs   [2]\n\t*Try Again?            [1]\n\t*Return To Command Menu [0] : ");

scanf("%u",&x);
if(x==2)
{
  goto cmd_4;
}else if(1){
goto cmd_3;
}else{
goto cmd;
}
}
goto cmd;
    case 4://Get the list of IDs of the students
cmd_4 :
for(i=0;i<MAX;i++)
{
list[i]=0;

}
SDB_GetIdList(&entry_num,list);
printf("\nNumber of IDs in data base is : %u",entry_num);
printf("\n\nID List :  ");
for(i=0;i<MAX;i++){
 if(list[i]!=0)
 {
  printf("\n## { %u } ##",list[i]);
 }
}
goto cmd;

    case 5:  //get number of entries

entry_num=SDB_GetUsedSize();
printf("\nNumber of students in the data base is : %u",entry_num);
goto cmd;

    case 6: //check if the database is full

check=SDB_IsFull();
if(check==1){
    printf("\n\t\t### Database Is Full!! ###\nDo You want to delete an existing Student?");
 printf("\nYes [1]\nNo  [0] : ");

scanf("%u",&x);
if(x==1)
{
  goto cmd_7;
}else{
goto cmd;
}
}else{
    printf("\n\t\t### Database Is Not Full ###\nDo You want to add a New Student?");
 printf("\nYes [1]\nNo  [0] : ");

scanf("%u",&x);
if(x==1)
{
  goto cmd_1;
}else{
goto cmd;
}
}


    case 7: //Delete the student data with the given ID
cmd_7 :

printf("\nEnter a Student ID to delete: ");
scanf("%u",&id);
//Safety blocks:
while(id==0){
   printf("Student ID Can't Be Zero.....Please Try Again:  ");
 scanf("%u",&id);
}

check=SDB_IsIdExist(id);
if(check==0){
    printf("\nStudent ID is not existing....\nDo you want to try again?");
printf("\n\tYes [1]\n\tNo  [0] : ");
scanf("%u",&x);
if(x==1)
{
  goto cmd_7;
}else{
goto cmd;
}
}
//end of safety blocks
SDB_DeleteEntry(id);
printf("\n\t\t#### Student data of ID { %u }  have been deleted ####\n",id);
  printf("\nDo you want to delete another ID?");
printf("\n\tYes [1]\n\tNo  [0] : ");
scanf("%u",&x);
if(x==1)
{
  goto cmd_7;
}else{
goto cmd;
}
goto cmd;

    case 8: // End Program
break;

 default:
     printf("\nINVALID VALUE!!\nPlease Enter a number of an existing operation:  #");
goto cmd_0;
 }

printf("\n\n\t########################################\n");
printf("\t####         END OF PROGRAM         ####\n");
printf("\t########################################\n");

    return 0;
}


bool SDB_AddEntry(uint8 id, uint8 year, uint8* subjects, uint8* grades)
{
uint8 n;
    for(n=0;n<MAX;n++)
    {
    if(entry[n].student_ID==0){
    entry[n].student_ID = id ;
   entry[n].student_Year = year ;
   entry[n].Course_1_ID = subjects[0] ;
   entry[n].Course_1_Grade = grades[0] ;
   entry[n].Course_2_ID = subjects[1] ;
   entry[n].Course_2_Grade = grades[1] ;
   entry[n].Course_3_ID = subjects[2] ;
   entry[n].Course_3_Grade = grades[2] ;
        return true;
        }
    }
return false;
}

bool SDB_IsIdExist(uint8 id)
{
uint8 i;
for(i=0;i<MAX;i++)
{
if(id==entry[i].student_ID)
{
 return true;
}
}
return false;
}

bool SDB_ReadEntry(uint8 id, uint8* year, uint8* subjects, uint8* grades)
{
    uint8 n,c;
for(n=0;n<MAX;n++)
{
 if(id==entry[n].student_ID)
 {
    printf("\nStudent ID      : %u",id) ;
    printf("\nStudent year    : %u",*year) ;
    for(c=0;c<3;c++)
    {
    printf("\nSubject %u ID    : %u",c+1,subjects[c]);
    printf("\nSubject %u Grade : %u",c+1,grades[c]);
    }
 return true;
 }
}
return false;
}



void SDB_GetIdList(uint8* count,uint8* list)
{
uint8 i;
*count=SDB_GetUsedSize();
for(i=0;i<MAX;i++){
if(entry[i].student_ID!=0){
list[i] = entry[i].student_ID ;
  }
 }
}

uint8 SDB_GetUsedSize(void)
{
uint8 i,counter=0;
for(i=0;i<MAX;i++)
{
if(entry[i].student_ID!=0)
{
counter++;
}
}
return counter;
}

bool SDB_IsFull(void)
{
uint8 i;
for(i=0;i<MAX;i++)
{
if(entry[i].student_ID==0)
{
 return false;
}
}
return true;
}

void SDB_DeleteEntry(uint8 id)
{
    uint8 n;
for(n=0;n<MAX;n++)
{
 if(id==entry[n].student_ID)
 {
    entry[n].student_ID     = 0 ;
    entry[n].student_Year   = 0 ;
    entry[n].Course_1_ID    = 0 ;
    entry[n].Course_1_Grade = 0 ;
    entry[n].Course_2_ID    = 0 ;
    entry[n].Course_2_Grade = 0 ;
    entry[n].Course_3_ID    = 0 ;
    entry[n].Course_3_Grade = 0 ;
 return;
 }
}
}
