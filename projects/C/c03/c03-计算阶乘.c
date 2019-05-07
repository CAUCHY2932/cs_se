#include<stdio.h>

int main(void){

    int i;
    int n;

    double product;

    printf("请输入要计算的阶乘：\n");
    scanf("%d", &n);

    product = 1;
    for(i=1;i<=n;i++){
        product = product * i;
    }

    printf("您计算的结果是：%.0f\n", product);

    return 0;
}

