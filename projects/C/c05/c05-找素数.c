#include<stdio.h>
//判断正整数m是否为素数
int main(void)
{
    int i;
    int m;

    printf("请输入一个数字进行判断：\n");
    scanf("%d", &m);

    for(i=1; i<m/2;i++){
        if (m/i==0){
            break;
        }
    }

    if (i>m/2 && m!=1){
        printf("%d 是素数\n", m);
    }
    else{
        printf("%d 不是素数\n", m);
    }
    return 0;
}
