#include <stdio.h>

int main(){
    int myBudget;
    int count = 1;
    int menu;
    int myItems;
    int quantity;
    int total;

    printf("\nHow much money do you have?(KRW): ");
 scanf("%d",&myBudget);

do{

 printf("================================\n");
 printf("Hello! This is Market Minguinho!\n");
 myMenu();
 scanf("%d",&menu);

 if(menu == 1){
    printf("========================\n");
    printf("You have %d KRW \n",myBudget);
    onSale();
    printf("Select item you want! (1~5): \n");
    scanf("%d",&myItems);
    printf("How many do you want?: \n");
    scanf("%d",&quantity);

    switch(myItems)
    {
    case 1:
        printf("Price of selected items: 800 KRW\n");
        total = quantity * 800;
        myBudget = myBudget - total;
        printf("Total money you need to pay: %d KRW\n",total);
        if(myBudget <= 0){
            printf("You don't have enough budget..\n");break;
            }
        else{
        printf("Your Budget is now %d \n",myBudget);break;
        }
    case 2:
        printf("Price of selected items: 1500 KRW\n");
        total = quantity * 1500;
        myBudget = myBudget - total;
        printf("Total money you need to pay: %d KRW\n",total);
        if(myBudget <= 0){
            printf("You don't have enough budget..\n");break;
            }
        else{
        printf("Your Budget is now %d \n",myBudget);break;
        }
    case 3:
        printf("Price of selected items: 2000 KRW\n");
        total = quantity * 2000;
        myBudget = myBudget - total;
        printf("Total money you need to pay: %d KRW\n",total);
        if(myBudget <= 0){
            printf("You don't have enough budget..\n");
            break;
            }
        else{
        printf("Your Budget is now %d \n",myBudget);
        break;
        }
    case 4:
        printf("Price of selected items: 1300 KRW\n");
        total = quantity * 1300;
        myBudget = myBudget - total;
        printf("Total money you need to pay: %d KRW\n",total);
        if(myBudget <= 0){
            printf("You don't have enough budget..\n");
            break;
            }
        else{
        printf("Your Budget is now %d \n",myBudget);
        break;
        }
    case 5:
        printf("Price of selected items: 300 KRW\n");
        total = quantity * 300;
        myBudget = myBudget - total;
        printf("Total money you need to pay: %d KRW\n",total);
        if(myBudget <= 0){
            printf("You don't have enough budget..\n");
            break;
            }
        else{
        printf("Your Budget is now %d \n",myBudget);
        break;
        }
    default:
        break;
    }
 }
 else{
    count = 0;
 }
 }while(count != 1||2);

 return 0;
}

void onSale(){
    printf("Choose anything you want!~\n");
    printf("1. pen       - 800  KRW\n");
    printf("2. notebook  - 1500 KRW\n");
    printf("3. sandwitch - 2000 KRW\n");
    printf("4. juice     - 1300 KRW\n");
    printf("5. candy     - 300  KRW -> 2+1 event!!\n");
    printf("If you buy 3 candies, 1 candy is free!\n");
    printf("================================\n");

}

void myMenu(){
 printf("===============MENU=============\n");
 printf("1. Buy items \n2. Finish and Pay\n");
 printf("================================\n");
 printf("Select the menu which you want (1 or 2): \n");
}
