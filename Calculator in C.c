#include<stdio.h>
#include<conio.h>
main()
{
	float num1;
	float num2;
	char op;
	float result;
	
	printf("Entre the first number : ");
	scanf("%f",&num1);
	
	printf("Entre the operation : ");
	scanf(" %c",&op);
	
	printf("Entre the second number :");
	scanf("%f",&num2);
	
	switch(op)
	{
		case '-':
		result = num1-num2;
		printf("%f",result);
		break;
		
				case '+':
		result = num1+num2;
		printf("%f",result);
		break;
		
				case '*':
		result = num1*num2;
		printf("%f",result);
		break;
		
				case '/':
		result = num1/num2;
		printf("%f",result);
		break;
		
			
		default :
			printf("The operator is not valid");
	}
	getch();
}
