#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct item{
int id,qty;
float cost;
char name[100];
};
int p=0,i,j;
float totalcost=0;
struct item a[20];
char y;
struct item things[30]={1,0,100,"Dairy Milk",2,0,150,"Temptations",3,0,500,"Ferrero Rocher",4,0,200,"Bournville",5,0,250,"Almond Bar",6,0,75,"Hide and Seek",7,0,175,"Dark Fantasy",8,0,275,"Bourbon",9,0,375,"Golden Arch",10,0,475,"Dream Lite",
  11,0,40,"Pen pack",12,0,70,"Pencil box",13,0,100,"Books",14,0,50,"Chart paper",15,0,200,"Geometry box",16,0,350,"Lipstick",17,0,500,"Foundation",18,0,500,"Compact",19,0,250,"Mascara",20,0,1000,"Perfume",
  21,0,3000,"Saree",22,0,2000,"Gown",23,0,1400,"Lehanga",24,0,500,"Kurta",25,0,700,"Jeans"};
void internal(){
 int del=0,qty=0;
 printf("\t\tHow many do you require ");
 scanf("%d",&qty);
 totalcost=totalcost+(qty)*a[p].cost;
 a[p].qty=a[p].qty+qty;
 printf("Your cost in cart is %g\n",totalcost);
 if(a[p].qty!=0){
  printf("\tDo you want to delete any amount of quantity? (Y/N)? ");
  scanf(" %c",&y);
  if(y=='y'||y=='Y'){
   printf("\t\tEnter the quantity to be deleted ");
   scanf("%d",&del);
   if(del==a[p].qty){
    totalcost=totalcost-a[p].qty*a[p].cost;
    a[p].qty=0;
    a[p]=things[25];
    p--;
   }
   else if(del>a[p].qty){
    printf("Cannot delete\n");
    p++;
   }
   else{
    totalcost=totalcost-del*a[p].cost;
    a[p].qty=a[p].qty-del;
    p++;
   }
   printf("\nYour cost in cart is %g\n",totalcost);
  }
  else
   p++;
  }
  else{
   printf("\nYour cost in cart is %g\n",totalcost);
 }
}
void main(){
 float sgst,cgst;
 int i,j,x,del,choice;
 char y;
 char str[100];
 system("clear");
 printf("\t\t\tWelcome To Our Online Shopping\n");
 printf("Enter your name: ");
 scanf("%s",str);
 printf("\t\t\tHello!!!%s\n",str);
 do{
 menu:printf("\nMenu\n1-CHOCOLATES\n2-BISCUITS\n3-STATIONERY\n4-COSMETICS\n5-DRESSES\n6-EXIT\n");
 printf("\t\tEnter your Choice: ");
 scanf("%d",&choice);
 switch(choice){
 chocolates:
 case 1: for(i=0,j=0;i<5,j<5;i++,j++)
	 printf("%d %s \n",j+1,things[i].name);
	 printf("6 Main Menu\n7 Exit\n");
	 printf("\t\tEnter your Choice: ");
	 scanf("%d",&x);
         switch(x){
	  case 1: printf("You Choose DAIRY MILK With Rs.100.\n");
		  a[p]=things[0];
		  internal();
		  break;
          case 2: printf("You Choose TEMPTATIONS With Rs.150.\n");
		  a[p]=things[1];
		  internal();
		  break;
          case 3: printf("You Choose FERRERO ROCHER With Rs.500.\n");
		  a[p]=things[2];
		  internal();
		  break;
          case 4: printf("You Chooose BOURNVILLE With Rs.200.\n");
		  a[p]= things[3];
		  internal();
		  break;
          case 5: printf("You Choose ALMOND BAR With Rs.250.\n");
		  a[p]= things[4];
		  internal();
		  break;
          case 6: goto menu;
		  break;
          case 7: goto bill;
                  break;
         default: printf("Oops invalid number");
	}break;
  biscuits:
  case 2: for(i=5,j=0;i<10,j<5;i++,j++)
	  printf("%d %s \n",j+1, things [i].name);
	  printf("6 Main Menu\n7 Exit\n");
	  printf("\t\tEnter your Choice: ");
	  scanf("%d",&x);
	  switch(x){
	   case 1: printf("You Choose HIDE AND SEEK With Rs.75.\n");
		   a[p]= things[5];
		   internal();
		   break;
          case 2: printf("You Choose DARK FANTASY With Rs.175.\n");
		  a[p]= things[6];
		  internal();
		  break;
          case 3: printf("You Choose BOURBON With Rs.275.\n");
		  a[p]= things[7];
		  internal();
		  break;
          case 4: printf("You Choose GOLDEN ARCH With Rs.375.\n");
		  a[p]= things[8];
		  internal();
		  break;
          case 5: printf("You Choose DREAM LITE With Rs.475.\n");
		  a[p]= things[9];
		  internal();
		  break;
          case 6: goto menu;
		  break;
          case 7: goto bill;
		  break;
         default: printf("Oops invalid number\n");
	 }break;
  stationeries:
  case 3: for(i=10,j=0;i<15,j<5;i++,j++)
	  printf("%d %s \n",j+1, things [i].name);
	  printf("6 Main Menu\n7 Exit\n");
	  printf("\t\tEnter your Choice: ");
	  scanf("%d",&x);
	  switch(x){
	   case 1: printf("You Choose PEN PACK With Rs.40.\n");
		   a[p]= things[10];
		   internal();
		   break;
          case 2: printf("You Choose PENCIL BOX With Rs.70.\n");
		  a[p]= things[11];
		  internal();
		  break;
          case 3: printf("You Choose BOOKS With Rs.100.\n");
		  a[p]= things[12];
		  internal();
		  break;
          case 4: printf("You Choose CHARTS With Rs.50.\n");
		  a[p]= things[13];
		  internal();
		  break;
          case 5: printf("You Choose GEOMETRY BOX With Rs.200.\n");
		  a[p]= things[14];
		  internal();
		  break;
          case 6: goto menu;
		  break;
          case 7: goto bill;
		  break;
         default: printf("Oops invalid number");
	 }break;
   cosmetics:
   case 4:for(i=15,j=0;i<20,j<5;i++,j++)
	  printf("%d %s \n",j+1, things[i].name);
	  printf("6 Main Menu\n7 Exit\n");
	  printf("\t\tEnter your Choice: ");
	  scanf("%d",&x);
	  switch(x){
	   case 1: printf("You Choose LIPSTICK With Rs.350.\n");
		   a[p]= things[15];
		   internal();
		   break;
          case 2: printf("You Choose FOUNDATION With Rs.500.\n");
		  a[p]= things[16];
		  internal();
		  break;
          case 3: printf("You Choose COMPACT With Rs.500.\n");
		  a[p]= things[17];
		  internal();
		  break;
          case 4: printf("You Choose MASCARA With Rs.250.\n");
		  a[p]= things[18];
		  internal();
		  break;
          case 5: printf("You Choose PERFUME With Rs.1000.\n");
		  a[p]= things[19];
		  internal();
		  break;
         case 6: goto menu;
		 break;
         case 7: goto bill;
		 break;
        default: printf("Oops invalid number\n");
	}break;
  dresses:
  case 5: for(i=20,j=0;i<=25,j<5;i++,j++)
	  printf("%d %s \n",j+1, things[i].name);
	  printf("6 Main Menu\n7 Exit\n");
	  printf("\t\tEnter your Choice: ");
	  scanf("%d",&x);
	  switch(x){
	   case 1: printf("You Choose SAREE With Rs.3000.\n");
		   a[p]= things[20];
		   internal();
		   break;
          case 2: printf("You Choose GOWN With Rs.2000.\n");
		  a[p]= things[21];
		  internal();
		  break;
          case 3: printf("You Choose LEHENGA With Rs.1400.\n");
		  a[p]= things[22];
		  internal();
		  break;
          case 4: printf("You Choose KURTA With Rs.500.\n");
		 a[p]= things[23];
		 internal();
		 break;
          case 5: printf("You Choose JEANS With Rs.700.\n");
		 a[p]= things[24];
		 internal();
		 break;
          case 6: goto menu;
		  break;
          case 7: goto bill;
		  break;
         default: printf("Oops invalid number\n");
	 }break;
  case 6: goto bill;
	  break;
 default:printf("Oops Invalid number\n");
 }
 printf("\nDo you want to continue?(Y/N)? ");
 scanf(" %c",&y);
 if(y=='y'||y=='Y'){
 if(choice==1)
  goto chocolates;
 else if(choice==2)
  goto biscuits;
 else if(choice==3)
  goto stationeries;
 else if(choice==4)
  goto cosmetics;
 else if(choice==5)
  goto dresses;
}
}while(y=='y'||y=='Y');
bill:if(p==0){
      printf("Sorry!!!! Cannot generate bill\n");
    }
    else{
     cgst=(0.09*totalcost);
     sgst=(0.09*totalcost);
     printf("\nID   NAME\t QUANTITY  COST   TOTALCOST \n");
     for(i=0;i<p;i++)
     printf("%d  %s    %d\t %g   %g\n",a[i].id,a[i].name,a[i].qty,a[i].cost,a[i].qty*a[i].cost);
     printf("\nTotal cost = %g\n",totalcost);
     printf("Cgst is: %g\n",cgst);
     printf("Sgst is: %g\n",sgst);
     totalcost=totalcost+cgst+sgst;
     printf("\tYOUR FINAL COST IS:%g\n",totalcost);
     printf("\nTHANK YOU %s FOR CHOOSING US. DO VISIT US AGAIN\n",str);
    }
}
