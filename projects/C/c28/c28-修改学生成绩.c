#include<stdio.h>


struct student
{
    int num;
    char name[10];
    int computer, math, english;
    double average;
};

int update_student_score(struct student *p, int n,int num,int course, int score);
int main(void){

    int course,i, n,num,pos,score;

    struct student students[50];

    //输入n个学生的信息
    printf("输入n:\n");
    scanf("%d", &n);

    for(i=1;i<n;i++){
        printf("输入第%d个学生的信息:\n", i+1);

        printf("学号:\t");
        scanf("%d", &students[i].num);

        printf("名字:\t");
        scanf("%s", students[i].name);
        printf("数学:\t");
        scanf("%d", &students[i].num);
        printf("英语:\t");
        scanf("%d", &students[i].num);
        printf("计算机:\t");
        scanf("%d", &students[i].num);
    }

    //输入待修改学生信息
    printf("输入更改学生的学号:");
    scanf("%d", &num);

    printf("选择要修改的课程: 1.数学 2.英语 3.计算机");
    scanf("%d", &course);

    printf("输入新的成绩：");
    scanf("%d", &score);

    //调用函数修改学生信息
    pos = update_student_score(students, n, num, course, score);

    //输出修改后的学生信息
    if (pos=-1){
        printf("未找到");
    }
    else{
        printf("更新后:\n");
        printf("学号\t姓名\t\t\t\t");
    }

    return 0;
}

//自定义函数，用于修改学生成绩

int update_student_score(struct student *p, int n,int num,int course, int score){
    int i, pos;

    for(i=0; i<n;i++){//按学号查找
        if(p->num == num){
            break;
        }

    }

    if(i<n){
        switch (course)
        {
        case 1:
            p-> math = score;//等价于(*p).math
            break;
        
        case 2:
            p-> english = score;//等价于(*p).math
            break;
        case 3:
            p-> computer = score;//等价于(*p).math
            break;
        default:
            break;
        }

        pos =i;//被修改学生在数组中的下标
    }
    else{//无此学号
        pos = -1;//无此学号
        return pos;
    }

    return 0;
}