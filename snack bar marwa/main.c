/*point of sale
created by David Marwa
on july 14 20222
c89 compiler*/

// POINT OF SALE SNACK BAR

#include <stdio.h>


void main(void)
{int Itemcode,qty;
float price,TotalAmount;

printf("===================");



printf("[1] hot dog overload\t\tphp 90.00\n");
printf("[2] hamburger overload\t\tphp 300.00\n");
printf("[3] french fries overload\t\tphp 150.00\n");
printf("[4] milk shake overload\t\tphp 150.00\n");
printf("[5] coffee overload\t\tphp 70.00\n");
printf("[6] beef smokie overload\t\tphp 40.00\n");

printf("\nEnter Itemcode\t:");
scanf("%d",&Itemcode);
printf("\nEnter quantity\t:");
scanf("%d",&qty);

switch(Itemcode){
 case1:price=90.00;
  break;
 case2:price=300.00;
  break;
   case3:price=150.00;
  break;
   case4:price=150.00;
  break;
   case5:price=70.00;
  break;
   case6:price=40.00;
  break;
}
{TotalAmount=price*qty;

printf("\nTotalAmount: %.2f\t\t", TotalAmount );
}





}

