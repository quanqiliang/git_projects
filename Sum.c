#include<stdio.h>
int Sum(int x, int y);
int main(int argc,char * argv[])
{
	int x = 0;
	int y = 0;
	printf("please input two numbers:\n");
	scanf("%d%d",&x,&y);
	int sum = Sum(x,y);
	printf("the sum of %d and %d is %d\n",x,y,sum);
	return 0;
}
int Sum(int x, int y)
{
	return x + y;
}
