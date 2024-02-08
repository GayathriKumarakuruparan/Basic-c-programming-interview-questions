#include <stdio.h>
#include<stdlib.h>
typedef struct item
{
  char item_name[50];
  float price;
  int quantity;
  float amount;
} Item_detail;
Item_detail *
fun ()
{
  Item_detail *itr = malloc (sizeof (Item_detail));
  printf ("Enter the item name:");
  scanf ("%s", itr->item_name);
  printf ("Enter the price:");
  scanf ("%f", &itr->price);
  printf ("Enter the quantity:");
  scanf ("%d", &itr->quantity);
  itr->amount = (float) (itr->price) * (itr->quantity);
  return itr;
}

int
main ()
{

  Item_detail *itr;
  itr = fun ();
  printf("=========ITEM DETAILS========\n");
  printf ("ITEM:%s\n", itr->item_name);
  printf ("PRICE:%f\n", itr->price);
  printf ("QUANTITY:%d\n", itr->quantity);
  printf ("the amount is %f", itr->amount);
}

int main()
{
    
    Item_detail *itr;
    itr=fun();
    printf("ITEM:%s\n",itr->item_name);
    printf("PRICE:%f\n",itr->price);
    printf("QUANTITY:%d\n",itr->quantity);
    printf("the amount is %f",itr->amount);
}
