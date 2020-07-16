// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/

#include <iostream>

using namespace std;

int main( ) {
    
    // Conserve constant integer values in cents
    const int cents_per_dollar {100};
    const int cents_per_quarter {25};
    const int cents_per_dime {10};
    const int cents_per_nickel {5};
    
    // Ask user to enter an amount in cents
    cout << "Enter an amount in cents : " << endl;
    
    // Initialize int values of number of dollars, quarters, dimes, nickels and pennies 
    unsigned int numDollars {}, numQuarters {}, numDimes {}, numNickels {}, numPennies {};
    // Initialize int value of an amount in cents
    unsigned int amountCents {}; 
    
    // Type user input an amount in cents
    cin >> amountCents;
    
    // Solution 2 - using the modulo operator
    numDollars = amountCents / cents_per_dollar; // calculate the quotient as number of dollars
    amountCents %= cents_per_dollar; // calculate the reminder as balance 
    
    numQuarters = amountCents / cents_per_quarter; // calculate the quotient as number of quarters
    amountCents %= cents_per_quarter; // calculate the reminder as balance 
    
    numDimes = amountCents / cents_per_dime; // calculate the quotient as number of dimes
    amountCents %= cents_per_dime; // calculate the reminder as balance 
    
    numNickels = amountCents / cents_per_nickel; // calculate the quotient as number of nickels
    amountCents %= cents_per_nickel; // calculate the reminder as balance 
     
    numPennies = amountCents; 
    
    // Display change of the amount in cents to the user
    cout << " You can provide this change as follows : " <<endl;
    cout << " Dollars : " << numDollars << endl;  
    cout << " Quarters : " << numQuarters << endl;
    cout << " Dimes : " << numDimes << endl;
    cout << " Nickels : " << numNickels << endl;
    cout << " Pennies : " << numPennies << endl;
    
    return 0;
}
    