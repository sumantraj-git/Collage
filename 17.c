#include <stdio.h>

int main() {
   int a,b , choice;
   printf("enter two numbers:");
   scanf("%d, %d", &a, &b);

   char ch;
   printf("enter an operator(+,-,*,/)");
   scanf(" %c", &ch);

   switch(ch)
   {
    case'+':
    printf("%d",a+b);
    break;

    case'-':
    printf("%d",a-b);
    break;

    case'*':
    printf("&d",a*b);
    break;

    case'/':
    printf("%d",a/b);
    break;

   
    return 0 ;
   }
