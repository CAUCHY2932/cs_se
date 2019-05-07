#include<stdio.h>
//构建学生信息库
#define Maxsize 50
struct student{
    int num;
    char name[10];
    int computer, english, math;
    double average;
};
int Count = 0;
void new_student(struct student students[]);
void search_student(struct student students[], int num);
void output_student(struct student students[]);


int main(void){

    int choice, num;
    struct student students[Maxsize];

    do{
        printf("选择:\n 1:新增 2:查找 3:输出 0:退出\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            new_student(students);
            break;
        case 2:
            printf("请输入学生学号：");
            scanf("%d", &num);

            search_student(students, num);
            break;

        case 3:
            output_student(students);
            break;
        case 0:
            break;
        
        default:
            break;
        }

    }while (choice != 0);

    printf("结束了！\n");     

    return 0;
}

//新建学生信息
void new_student(struct student students[]){
    struct student s;
    if(Count == Maxsize){
        printf("已经满了！\n");
        return;
    }
    printf("输入学生学号:\t\t");
    scanf("%d", &s.num);

    printf("输入学生姓名：\t\t");
    scanf("%s", s.name);//这不用取地址符

    printf("输入学生的数学成绩:\t");
    scanf("%d", &s.math);

    printf("输入学生的英语成绩:\t");
    scanf("%d", &s.english);

    printf("输入学生的计算机成绩:\t");
    scanf("%d", &s.computer);

    s.average = (s.math+s.english+s.computer)/3.0;

    students[Count] = s;
    Count++;

}

//查询学生成绩
void search_student(struct student students[], int num){
    int i, flag=0;
    if(Count == 0){
        printf("学生数为零!\n");
        return;
    }
    for(i=0;i<Count;i++){
        if(students[i].num==num){
            flag=1;
            break;
        }
    }
    if(flag){
        printf("学号：\t\t%d", students[i].num);
        printf("名字：\t\t%s", students[i].name);
        printf("数学成绩：\t\t%d", students[i].math);
        printf("英语成绩：\t\t%d", students[i].english);
        printf("计算机成绩：\t\t%d", students[i].computer);
        printf("平均成绩：\t\t%lf\n", students[i].average);
    }
    else
    {
        printf("未找到！");
    }
    
}

//输出学生信息
void output_student(struct student students[]){
    int i;
    if(Count==0){
        printf("学生数为零！\n");
        return;
    }
    printf("学号\t姓名\t数学\t英语\t计算机\t平均成绩\n");

    for(i=0;i<Count;i++){
        printf("%d\t", students[i].num);
        printf("%s\t", students[i].name);
        printf("%d\t", students[i].math);
        printf("%d\t", students[i].english);
        printf("%d\t", students[i].computer);
        printf("%.2lf\n", students[i].average);
    }
}