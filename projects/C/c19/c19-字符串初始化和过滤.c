#include<stdio.h>
//输入一个回车符结束的字符串（少于10），过滤掉所有非数字字符后，转换成十进制整数输出
int main(void){

    int i, number;

    char str[10];

    printf("输入一个字符串:\n");

    i = 0;
    while((str[i]=getchar())!='\n'){
        i++;
    }
    str[i] ='\0';

    number =0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='0' && str[i]<='9'){
            number = number *10+ str[i]-'0';
        }

    }
    printf("digit=%d\n", number);
    return 0;
}