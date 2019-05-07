/*
 * c10-数字金字塔.c
 *
 *  Created on: May 11, 2019
 *      Author: young
 */
#include<stdio.h>

int main(void){

	void pyramid(int n);
	pyramid(5);

	return 0;
}

void pyramid(int n){
	int i;
	int j;
	for(i =1;i<=n;i++){//控制结构最好强制加上大括号
//		printf(" ");
		for (j=1;j<=n-i;j++){
			printf(" ");
		}
		for (j=1;j<=i;j++){
			printf("%d ",i);//右边记得加空格

		}
		putchar('\n');//这里要用单引号
	}
}
