/*
 ============================================================================
 Name        : sumsq.c
 Author      : Hossain
 Version     :
 Copyright   : You can copy as long as you give the credit
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int sum(int N){
	int a=0;
	if(N==0) return 0;
	else{
		scanf("%d", &a);
		if(a<0) return sum(--N);
		else return a*a+sum(--N);

	}
}

void test(int N){
	int num=0;
	if(N==0) return;
	else{
		scanf("%d",&num);
		printf("%d\n", sum(num));
		test(--N);
	}

}
int main(){
	int N=0;
	scanf("%d",&N);
	test(N);
	printf("\n");
	return 0;
}
