#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c;
    printf("1-Arithmetic operators\n2-Increment and Decrement operator\n3-Assignment operator\n4-Relational operator\n5-Logical operator\n6-Conditional operators\n7-Bitwise operator\n");
    scanf("%d",&c);
    int a1,a2;
    a1=a;
    a2=b;
    int r=0;
    switch (c){
        case 1:
        printf("Addition:%d",a+b);
        printf("\nSubstraction:%d",a-b);
        printf("\nMultiplication:%d",a*b);
        printf("\nDivision:%d",a/b);
        printf("\nRemainder division:%d",a%b);
        break;
        case 2:
        printf("Increament operator:%d %d\n",++a,++b);
        printf("Decreament operator:%d %d",--a,--b);
        break;
        case 3:
        printf("=:%d %d\n",a1,a2);
        printf("+=:%d %d\n",a1+=a,a2+=b);
        printf("-=:%d %d\n",a1-=a,a2-=b);
        break;
        case 4:
        printf("%d==%d is %d\n",a,b,a==b);
        printf("%d>=%d is %d\n",a,b,a>=b);
        printf("%d<=%d is %d\n",a,b,a<=b);
        printf("%d!=%d is %d\n",a,b,a!=b);
        printf("%d>%d is %d\n",a,b,a>b);
        printf("%d<%d is %d\n",a,b,a<b);
        break;
        case 5:
        printf("a is equal to b and a greater than b is%d \n",(a==b) && (a>b));
        printf("a is equal to b or a less than b is %d \n", (a==b) || (a<b));
        printf("a not equal to b or a less than b is %d \n", (a!=b) || (a<b));
        break;
        case 6:
        a>b?printf("a is greater than b"):printf("b is greater than a");
        break;
        case 7:
            printf("%d^%d:%d\n",a,b,a^b);
            printf("%d&%d:%d\n",a,b,a&b);
            printf("%d<<%d:%d\n",a,b,a<<b);
            printf("%d>>%d:%d\n",a,b,a>>b);
            printf("%d|%d:%d\n",a,b,a|b);
            break;

        default:
        printf("Enter valid choice");
    }
    return 0;
}
