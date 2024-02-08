#include <stdio.h>
#include<string.h>
typedef union item
{
  char ch;
  double price;
  int quantity;
} Item_detail;

int
main ()
{

  Item_detail Item1;
  printf ("the size of this union:%ld\n", sizeof (Item_detail));
  Item1.ch = 'A';
  printf ("%c\n", Item1.ch);
  Item1.price = 25;
  printf ("%f\n", Item1.price);
  Item1.quantity = 5;
  printf ("%d\n", Item1.quantity);
  printf ("Print all the value\n%c\n%f\n%d", Item1.ch, Item1.price, Item1.quantity);
}
