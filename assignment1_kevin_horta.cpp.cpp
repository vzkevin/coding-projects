/*
    Assigment 1
    
    An electronics company makes 64 gigabyte USB flash drives that cost them $8.00 apiece to produce.
    Write a program to determine how much the company should sell them for if it wants to make a 35 percent profit.
    Display the result on the screen.
    Create the pseudo code first (algorithm) for your program for each line of your code. Add the pseudocode (algorithm) as comment and add the code below each statement.
    Test your application, and make sure compiles and runs as expected.
    Take screenshots of your code and running application.
    Save your source code in your computer. Name it assignment1_yourfirstname_yourlastname.cpp.
    Upload your code and screenshots.
    
    Auther: Kevin Horta
    Date: 2/11/2022

*/

// include header files
#include <iostream>

// add using namespace std
using namespace std;

// start main function
int main()
{
    // declare double varibles USB price, profit percentage, final price, profit amount
  double USB_PRICE;
  double PROFIT_PERCENT;
  double USB_FINALPRICE;
  double PROFIT_AMOUNT;
  
  // initilize USB price and profit percentage
  USB_PRICE = 8;
  PROFIT_PERCENT = 35;
  
  // calculate profit and save PROFIT_AMOUNT
  PROFIT_AMOUNT = (USB_PRICE * PROFIT_PERCENT) / 100;
  
  // calculate final price
  USB_FINALPRICE = (PROFIT_AMOUNT + USB_PRICE);
  
  // dispaly the USB price for 35% profit
  cout << "USB production price: $" << USB_PRICE << endl;
  cout << "Amount added for 35% profit: $" << PROFIT_AMOUNT << endl;
  cout << "USB final price: $" << USB_FINALPRICE;
  
    // return 0 for success
    return 0;
    
// end main function
} 
