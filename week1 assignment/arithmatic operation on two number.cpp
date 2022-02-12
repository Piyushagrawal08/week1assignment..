#include<stdio.h>
int main()
{
	int p,q,choice;
	
	printf("Enter any two positive integer number : ");
	scanf("%d%d",&p,&q);
	
    printf("\n input your choice to make an operation : ");
    printf("\n ---------------------------------------");
	printf("\n1 : for addition ");
	printf("\n2 : for substraction ");
	printf("\n3 : for multiplication ");
	printf("\n4 : for division ");
	printf("\n5 : for modulus ");
	
	printf("\n\nEnter your choice : ");
	scanf("%d",&choice);
	
	printf("\n");
	switch(choice)
	{
		case 1:
			printf("addition of %d + %d = %d\n ",p,q,p+q);
			break;
			
		case 2:
		    printf("substraction of &d - %d = %d\n",p,q,p-q);
			break;
			
		case 3:
		    printf("multiplication of %d * %d = %d\n",p,q,p*q);
			break;
			
		case 4:
		    printf("division of %d / %d = %d\n",p,q,p/q);
			break;
			
		case 5:
		    printf("modulus of %d %% %d = %d\n",p,q,p%q);
			break;
						
	}
	return 0;
	
	
}
