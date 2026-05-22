#include <stdio.h>
int main(){
	//initialize the variables a b and rst
     char opt; // hii ina symbolise option chozen by user
     int a, b, rst;
     printf("simple calc\n\n");
     printf("choose the sign u wanna use\n\n(+ × ÷  -) \n ");
     scanf("%c",&opt);//input ya sign
     
     //asks user for values 
     printf("enter first number: ");
     scanf("%d", &a);
     
     printf("enter second number: ");
     scanf("%d", &b);
     // options and hizo calculations
     switch(opt){
     	case '+':
     		rst=a+b;
     		printf("\nThe answer is : %d",rst);
     		break;
     	case '-':
     		rst=a-b;
     		printf("\n The answer is : %d",rst);	
    	case '/':
     		rst=a/b;
     		printf("\nThe answer is : %d",rst);
     		break;
     	case '*':
     		rst=a*b;
     		printf("\n The answer is : %d",rst);
     	      	
     	}
     return 0;
 }