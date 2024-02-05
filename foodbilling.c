#include<stdio.h>
int menu(){
int choice,qnt;
float price,amt,grandtotal=0;
int sum=0;
char yn;

do{
    printf("\n-------------Menu------------\n");
    printf("\n1.Pizza       price = 180rs/pcs");
    printf("\n2.Burger      price = 100rs/pcs");
    printf("\n3.Dosa        price = 120rs/pcs");
    printf("\n4.Idli        price = 50rs/pcs");

    printf("\nPlease Enter your choice... : ");
    scanf("%d",&choice);
    printf("\nEnter the Quantity: ");
    scanf("%d",&qnt);

    switch (choice)
    {
    case 1:
    
        printf("\nYou have selected Pizza.");
        price = 180;
        break;
    case 2:
        printf("\nYou have selected Burger.");
        price = 100;
    
        break;
    case 3:
        printf("\nYou have selected Dosa.");
        price = 120;
        break;
    case 4:
        printf("\nYou have selected Idli.");
        price = 50;
        break;
    
    default:
    printf("\nPlease select from menu.");
        break;
    }

    amt = price * qnt;
    printf("\nAmount : %.2f",amt);

    grandtotal = grandtotal + amt;
    printf("\nTotal bill : %.2f",grandtotal);
    printf("\nDo you want place more orders ? y for yes & n for no : ");
    scanf(" %s",&yn);

    if(yn!='y'){
        printf("\nSub total  : %.2f/-",grandtotal);
        printf("\nGst 18%%   : %.2f/-",(grandtotal*18/100));
        printf("\nFinal bill : %.2f/-",grandtotal+(grandtotal*18/100));
        printf("\n\nThank you. Visit again...");
        }
}
while(yn!='n');

    return 0;
}
int main(){
    menu();
}