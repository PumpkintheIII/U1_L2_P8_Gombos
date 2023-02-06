/*
  UB C Programming Unit 1 Lesson 2 Program 8
  Sales Tax
  Max Gombos
*/
#include <stdio.h> //import input and output functions

int main(void) { //define main function
  float price1, price2, price3; //initialize variable as float
  float salesTax; //initialize variable as float
  salesTax = 0.0625; //sets sales tax variable to sales tax

  printf("Input a price: $"); //asks user to input a price
  scanf("%f", &price1); //accepts input and formats as float

  price1 = price1 + (price1 * salesTax); //adds sales tax

  printf("Price with sales tax: $%0.2f", price1); //prints output
  return 0;
}