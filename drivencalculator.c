//Create menu driven calculator using function.
#include<stdio.h>
int main(){
    int a,b,choice;

    printf("\n--------------------Menu----------------- \n");

    printf("\n1. Addition");
    printf("\n2. Substraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    printf("\n\nEnter your choice:- ");
    scanf("%d",&choice);
    
    if(choice>4){
        printf("Invalid choice!!!!");
    }

    printf("\nEnter first numbers: ");
    scanf("%d",&a);
    printf("Enter second numbers: ");
    scanf("%d",&b);

    switch (choice)
    {
    case 1:
        sum(a,b);
        break;
    case 2:
        sub(a,b);
        break;
    case 3:
        mul(a,b);
        break;
    case 4:
        div(a,b);
        break;
    
    default:
    printf("Invalid choice!!!!");
        break;
    }
}

int sum(int a,int b){
    int res=a+b;
    printf("\nAddition = %d",res);
}
int sub(int a,int b){
    int res=a-b;
    printf("\nSubstraction = %d",res);
}
int mul(int a,int b){
    int res=a*b;
    printf("\nMultiplication = %d",res);
}
int div(int a,int b){
    int res=a/b;
    printf("\nDivision = %d",res);
}