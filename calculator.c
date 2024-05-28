#include<stdio.h>
int main()
{
    char ch;
    int a,b;
    printf("enter an operator=");
    scanf("%c",&ch);
    printf("enter two numbers=");
    scanf("%d %d",&a,&b);
    switch (ch){
    case'+':
    printf("%d + %d = %d\n",a,b,a+b);
    break;
    case'-':
    printf("%d - %d = %d\n",a,b,a-b);
    break;
    fflush(stdin);
    case'*':
    printf("%d * %d = %d\n",a,b,a*b);
    break;
    case'/':
    printf("%d / %d = %d\n",a,b,a/b);
    break;
    default:
    printf("error! invalid opertor\n");
    }

}
