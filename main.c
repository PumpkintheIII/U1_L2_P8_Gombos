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

  printf("This program allows you to enter three prices and the program will output their price caclulated to include sales tax. You will get three different prompts to enter each price.\n");
  //instructions
  
  printf("Input a price: $"); //asks user to input a price
  scanf("%f", &price1); //accepts input and formats as float
  printf("Input a price: $"); //asks user to input a price
  scanf("%f", &price2); //accepts input and formats as float
  printf("Input a price: $"); //asks user to input a price
  scanf("%f", &price3); //accepts input and formats as float

  price1 = price1 + (price1 * salesTax); //adds sales tax
  price2 = price2 + (price2 * salesTax); //adds sales tax
  price3 = price3 + (price3 * salesTax); //adds sales tax

  printf("Price with sales tax: $%0.2f", price1); //prints output
  printf("\nPrice with sales tax: $%0.2f", price2); //prints output
  printf("\nPrice with sales tax: $%0.2f", price3); //prints output
  
  return 0;
}