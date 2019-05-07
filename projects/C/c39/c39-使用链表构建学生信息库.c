#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//建立一个学生成绩信息（包括学号，姓名，成绩）单向链表
//学生记录按学号从小到大顺序排列，要求实现对成绩信息的插入
//修改、删除和遍历操作
struct stud_node
{
    int num;
    char name[20];
    int score;
    struct stud_node *next;
};

struct stud_node *create_stu_doc();                                           //新建链表
struct stud_node *insert_doc(struct stud_node *head, struct stud_node *stud); //插入操作
struct stud_node *delete_doc(struct stud_node *head, int num);                //删除
void print_stu_doc(struct stud_node *head);                                   //遍历操作

int main(void)
{
    struct stud_node *head, *p;
    int choice, num, score;
    char name[20];
    int size = sizeof(struct stud_node);

    do
    {
        printf("1:create 2:insert 3:delete 4:print 0:exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            head = create_stu_doc();
            break;
        case 2:
            printf("input num, name and score:\n");
            scanf("%d%s%d", &num, name, &score);

            p = (struct stud_node *)malloc(size);
            p->num = num;
            strcpy(p->name, name);
            p->score = score;
            head = insert_doc(head, p);
            break;
        case 3:
            printf("input num:\n");
            scanf("%d", &num);
            head = delete_doc(head, num);

            break;
        case 4:
            print_stu_doc(head);
            break;
        case 0:
            break;
        default:
            break;
        }

    } while (choice != 0);

    return 0;
}

//新建链表
struct stud_node *create_stu_doc()
{

    struct stud_node *head, *p;
    int num, score;
    char name[20];
    int size = sizeof(struct stud_node);

    head = NULL;
    printf("input num, name, and score:\n");
    scanf("%d%s%d", &num, name, &score);

    while (num != 0)
    {
        p = (struct stud_node *)malloc(size);
        p->num = num;
        strcpy(p->name, name);
        p->score = score;
        head = insert_doc(head, p);
        scanf("%d%s%d", &num, name, &score);
    }

    return head;
}

//插入操作
struct stud_node *insert_doc(struct stud_node *head, struct stud_node *stud)
{
    struct stud_node *ptr, *ptr1, *ptr2;

    //ptr为待插入结点
    ptr2 = head;
    ptr = stud;
    //原链表为空时的插入
    if (head == NULL)
    {
        head = ptr;
        head->next = NULL;
    }
    else
    {
        while ((ptr->num > ptr2->num) && (ptr2->next != NULL))
        {
            //ptr1为遍历结点的前驱结点，作为缓存存在
            //ptr2为当前遍历结点
            ptr1 = ptr2;
            ptr2 = ptr2->next;
        }
        if (ptr->num <= ptr2->num)
        {
            //在ptr1和ptr2之间插入新结点
            if (head == ptr2)
            {
                //链表只有一个结点，即无前驱时的插入
                head = ptr;
            }
            else
            {
                ptr1->next = ptr;
                ptr->next = ptr2;
            }
        }
        else
        {
            //新插入结点为尾结点时
            ptr2->next = ptr;
            ptr->next = NULL;
        }
    }
    return head;
};

//删除操作

struct stud_node *delete_doc(struct stud_node *head, int num)
{

    struct stud_node *ptr1, *ptr2;

    //要被删除结点为表头结点

    while (head != NULL && head->num == num)
    {
        ptr2 = head;
        head = head->next;
        free(ptr2);
    }
    if (head == NULL)
    {
        return NULL;
        //要被删除结点为非表头结点
    }
    ptr1 = head;
    ptr2 = head->next;
    while (ptr2 != NULL)
    {
        if (ptr2->num == num)
        { //ptr2为待删除结点
            ptr1->next = ptr2->next;
            free(ptr2);
        }
        else
        {
            ptr1 = ptr2;       //ptr1后移一个结点
            ptr2 = ptr1->next; //ptr2指向ptr1的后一个结点
        }
    }
    return head;
}

//遍历操作
void print_stu_doc(struct stud_node *head)
{
    struct stud_node *ptr;
    if (head == NULL)
    {
        printf("\nNO Records\n");
        return;
    }

    printf("\nThe students' Records Are:\n");
    printf("Num\t name\t Score\n");
    for (ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%d\t%s\t%d\n", ptr->num, ptr->name, ptr->score);
    }
}
