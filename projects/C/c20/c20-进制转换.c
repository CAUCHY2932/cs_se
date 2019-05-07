#include<stdio.h>
//进制转换。输入一个回车符结束的字符串，过滤掉所有的十六进制字符后，
//组成一个新的字符串（十六进制），输出该字符串并将其转换为十进制数后输出
//未完成p164
int main(void){

    int i, k;
    char str1[80], str2[80];

    printf("输入一个字符串");

    i =0;
    while((str1[i]= getchar())!= '\n'){
        i++;
    }
    str1[i]= '\0';

    k=0;
    for(i=0;str1[i]!='\0';i++){
        if((str1[i]>='0'&& str1[i]<='9') \
        ||(str1[i]>='a'&&str1[i]<='f') \
        ||(str1[i]>='A'&&str1[i]<='F')){
            str2[k]=str1[i];
            k++;
        }
    }
    str2[k]='\0';

    return 0;
}