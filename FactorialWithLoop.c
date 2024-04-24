//YOU CAN USE ANY LOOP
#include<stdio.h>
int main()
{
	int num;
	int i;
	int f=1;
	printf("enter a number\n");
	scanf("%d",&num);
	//using for loop
	for(i=num;i>=1;i--)
	{
	f*=i;		
	}
	printf("factorial of %d is : %d\n",num,f);
	//using while loop
	f=1;
	i=num;
	while(i>=1)
	{
		f*=i;
		i--;
	}
	printf("factorial of %d is : %d\n",num,f);
	//using do-whileloop
	i=num;
	f=1;
	do{
		f*=i;
		i--;
	}while(i>=1);
	printf("factorial of %d is : %d\n",num,f);
	return 0;
}
