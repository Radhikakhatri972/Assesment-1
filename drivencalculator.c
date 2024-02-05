//Create menu driven calculator using function.
#include<stdio.h>
int sum();
int sub();
int mul();
int div();
int display();
int main(){
    int a,b,choice;
    do{
    printf("\n--------------------Menu----------------- \n");

    printf("\n1. Addition(+)");
    printf("\n2. Substraction(-)");
    printf("\n3. Multiplication(*)");
    printf("\n4. Division(/)");
    printf("\n5. Exit");

    printf("\n\nEnter your choice:- ");
    scanf("%d",&choice);

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
    case 5:
        printf("\nExit from calculator...\n");
        break;
    
    default:
        printf("\nInvalid choice, select from Menu.\n");
        break;
    }
    }
    while(choice!=5);
    
}

int sum(int a,int b){
    printf("\nEnter first numbers: ");
    scanf("%d",&a);
    printf("Enter second numbers: ");
    scanf("%d",&b);
    int res=a+b;
    printf("\nAddition = %d\n",res);
    
}
int sub(int a,int b){
    printf("\nEnter first numbers: ");
    scanf("%d",&a);
    printf("Enter second numbers: ");
    scanf("%d",&b);
    int res=a-b;
    printf("\nSubstraction = %d\n",res);
}
int mul(int a,int b){
    printf("\nEnter first numbers: ");
    scanf("%d",&a);
    printf("Enter second numbers: ");
    scanf("%d",&b);
    int res=a*b;
    printf("\nMultiplication = %d\n",res);
}
int div(int a,int b){
    printf("\nEnter first numbers: ");
    scanf("%d",&a);
    printf("Enter second numbers: ");
    scanf("%d",&b);
    int res;
    if(b && a!=0){
    res=a/b;
    printf("\nDivision = %d\n",res);
    }
    else{
        printf("\nError!!! 0 is not divisable.");
    }   
}