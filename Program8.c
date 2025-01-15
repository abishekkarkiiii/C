//Develop a program that prints all even numbers between 1 and 100 using a for loop.
#include<stdio.h>
int main(){
	int i=1;
	 for(i=1;i<101;i++){
	 	(i%2==0)?printf("%d is even\n",i):printf("%d is odd\n",i);
	 }
}
