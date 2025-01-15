#include<stdio.h>
void multiply(int multiplyParameter) {
	int i=0;
	for(i=1; i<=10; i++) {
		printf("% d*%d=%d\n",multiplyParameter,i,multiplyParameter*i);
	}
}
int main() {
	printf("Enter a number\n");
	int parameterTaker;
	scanf("%d",&parameterTaker);
	multiply(parameterTaker);
}
