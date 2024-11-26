// Write a program to demonstrate a Food Billing System.
#include <stdio.h>
int main(){

    //declare and initilization of menu price and items array;
    char menu[4][100] = {"1.Pizza      prce = 180rs/pcs",
                          "2.Burger     prce = 100rs/pcs",
                          "3.Dosa       prce = 120rs/pcs",
                          "4.Idli       prce = 50 rs/pcs"};
    char items[4][100]= {"Pizza","Burger","Dosa","Idli"};
    int price[4] = {180,100,120,50};

    //declareing necessory variables
    int i,total=0,amount=0,choice,qty;
    char more;

    //using do loop to iterate atleast one time;
    do{
       total =0;

       //printing menu
       printf("\n----------menu----------");
       for(i=0; i<4; i++){
        printf("\n%s",menu[i]);
       }
        
        printf("\nPlease enter your choice (1 to 4)... : ");
        scanf("%d",&choice);

        //check if user enter choice correct range using if statement
        //if not then reentering choice
        if(choice < 1 || choice > 4){
            printf("\nInvalid please choose betwen 1 and 4");
            printf("\nPlease re-enter your choice... :");
            scanf("%d",&choice);
        }
        
        //printing the item user selected via choice
        printf("\nYou choose : %s",items[choice -1]);
        
        //asking for quantity-->
        printf("\nEnter the quantity: ");
        scanf("%d",&qty);

        //calculating total amount of bill
        total += price[choice -1] * qty;
        amount += total;  //assigning value of total to ammount for every new order 

        //displaying total bill and new bill for every new order
        printf("\nAmount is = %d",total);
        printf("\nTotal Amount is = %d",amount);

        //asking user to if he want to order more or not
        printf("\nDo you want to place more order? ( y / n )");
        scanf(" %c",&more);  //if y then loop run again
                             //if n then loop terminate
        
    } while(more == 'y' || more == 'Y');

    //messege after loop termination
    printf("\n----Thank you using----");
    
    return 0;
}