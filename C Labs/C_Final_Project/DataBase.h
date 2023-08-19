#ifndef DataBase_H_
#define DataBase_H_

typedef unsigned int uint8;

typedef struct D
{
    uint8 student_ID ;
    uint8 student_Year ;
    uint8 Course_1_ID ;
    uint8 Course_1_Grade ;
    uint8 Course_2_ID ;
    uint8 Course_2_Grade ;
    uint8 Course_3_ID ;
    uint8 Course_3_Grade ;

}student_Data;

bool SDB_AddEntry(uint8 id, uint8 year, uint8* subjects, uint8* grades) ;
bool SDB_IsIdExist(uint8 id);
bool SDB_ReadEntry(uint8 id, uint8* year, uint8* subjects, uint8* grades);
void SDB_GetIdList(uint8* count, uint8* list);
uint8 SDB_GetUsedSize(void);
bool SDB_IsFull(void);
void SDB_DeleteEntry(uint8 id);
#endif // DataBase_H_
