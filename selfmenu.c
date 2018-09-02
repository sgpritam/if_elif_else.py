#include<stdio.h>
#include<conio.h>
int a[10],n;
void ins();
void del();
void trans();
void main()
{
	int x=0,i,choice;
	printf("Enter any 5 values of arrays:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		
	}
	n=5;
	while(x==0)
	{
		printf("what you wants:\n1.insertion\n2.deletion\n3.transversal\n4.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: ins();
			break;
			case 2: del();
			break;
			case 3: trans();
			break;
			case 4: exit(0);
		}
		
	}
	

	
}
void ins()
{
	int j,pos,val;
	printf("Enter the position where do you want to insert:\n");
	scanf("%d",&pos);
	printf("Enter the news values:\n");
	scanf("%d",&val);
	if(pos<=n)
	{
	
	   for(j=n;j<=pos;j--)
    	{
	    	a[j+1]=a[j];
     	}
		    a[pos]=val;
	}
	else
	    a[n+1]=val;
       	n++;

}
void del()
{
	int j,pos,val;
	printf("Enter the postion where do you want to delete:\n");
	scanf("%d",&pos);
	for(j=n;j<n;j++)
	{
		a[j]=a[j+1];
	}
	n=n-1;
}
void trans()
{
	int j;
	for(j=1;j<=n;j++)
	{
		printf("%d",a[j]);
	}
	getch();
}


