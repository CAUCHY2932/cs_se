/*
 * c09-计算pi.c
 *
 *  Created on: May 11, 2019
 *      Author: young
 */

#include<stdio.h>
#include<math.h>

int main(void){
	double e;
	double pi;
	double funpi(double e);

	printf("输入e:\n");
	scanf("%lf", &e);
	pi = funpi(e);
	printf("pi=%f\n",pi);



	return 0;
}

double funpi(double e){

	int denominator;
	int flag;
	double item, sum;

	flag =1;
	denominator = 1;
	item = 1.0;
	sum =0;

	while(fabs(item)>=e){
		item = flag*1.0/denominator;
		sum = sum+item;
		flag= -flag;
		denominator=denominator+2;
	}
	return sum*4;
}
