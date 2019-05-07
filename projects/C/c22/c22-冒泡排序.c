#include<stdio.h>
//数组和指针有很多相似之处，例如指针名和数组名都代表内存地址
//但指针是一个变量，数组是一个常量
//指针可变，数组不可变
//这里数组名作为参数，起到了传地址的效果
// void swap2(int *, int *);
void bubble(int a[], int n);


int main(void){

    int n, a[8];
    int i;

    printf("输入n（n<=8）：");
    scanf("%d", &n);
    printf("输入a[%d]:\n", n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    bubble(a, n);
    printf("排序后a[%d]:\n", n);
    for(i=0;i<n;i++){
        printf("%3d", a[i]);
    }
    printf("\n");

    return 0;
}

// void swap2(int *px,int *py){



// }

void bubble(int a[], int n){
    int i, j, t;
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                t = a[j];
                a[j] = a[j+1];
                a[j+1]= t;
            }
        }
    }
}