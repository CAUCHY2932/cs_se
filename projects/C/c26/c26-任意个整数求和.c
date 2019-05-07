#include<stdio.h>
#include<stdlib.h>
//先输入一个正整数，再输入任意n个整数，
//计算并输出n哥整数的和，要求使用动态内存分配方法为这n个整数分配空间
//动态分配
//calloc动态分配并初始化，malloc只分配但什么也不做
//free动态存储释放函数
//realloc分配调整函数

int main(void){

    int n, sum, i, *p;

    printf("输入n:\n");
    scanf("%d", &n);
    //为数组p动态分配n个整数类型大小的空间
    if((p = (int *)calloc(n, sizeof(int)))==NULL){
        printf("不能分配空间");
        exit(1);
    }
    printf("输入%d个整数:\n", n);

    for(i=0;i<n;i++){
        scanf("%d", p+i);
    }

    sum=0;
    for(i=0;i<n;i++){
        sum =sum+*(p+i);
    }
    printf("和为：%d\n", sum);
    free(p);


    return 0;
}