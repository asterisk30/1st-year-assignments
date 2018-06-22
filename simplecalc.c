//first program... just playing around with github push ,commit etc through this program


#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
//FINDING ROOTS OF A QUADRATIC EQUATION                                                              
	int ch;
//stores the choice of operaTIon
// input section
	do
	{
	printf ("\nEnter two numbers\n" );
	scanf("%d%d",&a,&b);
	printf ("\n\n");
	printf ("\n 1-ADD\n");
	printf ("\n 2-SUB\n");
	printf ("\n 3-MULTI\n");
	printf ("\n 4-DIVIDE\n");
	printf ("\nEnter your choice of operation\n");
	scanf("%d",&ch);
	switch(ch)
		{
			case 1: c=a+b;
					break;
			case 2: c=a-b;
					break;
			case 3: c=a*b;
					break;
			case 4: if(b==0)
			{
				printf ("\n Divide by zero error!(indeterminate form) \n");
				break;
				//FINDING ROOTS OF A QUADRATIC EQUATION                                                              
			}
			else
			{
				c=a/b;
				//perform division opera on
				break;
			}
				default: //erroneous input
				printf ("\nInvalid choice! \n");
				break;
		}
		printf ("\nThe result is %d\n",c);
	}while(1);

}