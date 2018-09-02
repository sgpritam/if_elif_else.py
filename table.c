#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,i;
	printf("Enter the number");
	scanf("%d",&x);
	for(i=1;i<=10;i++)
	{
		y=x*i;
		printf("%d\n",y);
		
	}
	getch();
}
