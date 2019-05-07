#include "student.h"
#include "input_output.c"
#include "modify.c"
#include "aver_sort.c"
int Count = 0;

int main(void){

    struct student students[MaxSize];
    new_student(struct student students);
    output_student(struct student students);
    average(struct student students);
    sort(struct student students);
    output_student(struct student students);
    modify(struct student students);
    output_student(struct student students);

    
}