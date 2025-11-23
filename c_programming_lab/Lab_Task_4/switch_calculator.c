#include <stdio.h>
int main() {

float num1, num2;
char op;
printf("enter first number: ");
scanf("%f", &num1);

printf("enter operator(+,-,*,/): ");
scanf(" %c", &op);

printf("enter second number: ");
scanf("%f", &num2);

switch(op){

    case '*':
        printf("%0.2f", num1 * num2);
    break;
    case'/':
    if ( num2 != 0){
       printf("%0.2f", num1 / num2 );
       break;
    }

     else{
        printf("not defiend");
        
   
     }
     break;
   
    case'+':
       printf("%0.2f", num1 + num2);
       break;

    case'-':
       printf("%0.2f", num1 - num2);

}

    return 0;
}