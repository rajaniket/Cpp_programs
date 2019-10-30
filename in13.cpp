//decimal to hexa decimal.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	long int decnum, rem, quot;
	char hexdecnum[100];
	int i=1, j, temp;
	cout<<"Enter any decimal number : ";
	cin>>decnum;
	quot=decnum;
	while(quot!=0)
	{
		temp=quot%16;
		// to convert integer into character
		if(temp<10)
		{
			temp=temp+48;
		}
		else
		{
			temp=temp+55;
		}
		hexdecnum[i++]=temp;
		quot=quot/16;
	}
	cout<<"Equivalent hexadecimal value of "<<decnum<<" is : \n";
	for(j=i-1; j>0; j--)
	{
		cout<<hexdecnum[j];
	}
	getch();
}
