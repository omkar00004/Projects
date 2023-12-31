 /*
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

    Currency i USD
    */
#include<iostream>
using namespace std;

class Factor{
private:
    int dollar_val{100},
    quarter_val{25},
    dime_val{10},
    nickel_val{5},
    pennie_val{1};

    int dollar,quarter,dime,nickel,pennie,balance{0},num;
public:

    void set_value(int num);
    void get_value();
    

};
    void Factor::set_value(int num){
    this->num=num;

    dollar=num/dollar_val;
    balance= num%dollar_val;

    quarter=balance/quarter_val;
    balance %= quarter_val;

    dime=balance/dime_val;
    balance %= dime_val;

    nickel=balance/nickel_val;
    balance %= nickel_val;

    pennie=balance;
    }

    void Factor::get_value(){
    cout<<"Dollar : "<<dollar<<endl;
    cout<<"Quarter : "<<quarter<<endl;
    cout<<"Dime : "<<dime<<endl;
    cout<<"Nickel : "<<nickel<<endl;
    cout<<"Pennie : "<<pennie<<endl;
    }

    int ask_user(){
    int num;
    cout<<"What Number you want to make into fractions : ";
    cin>>num;
    return num;
    }
    

    int main(){
        Factor p;
        p.set_value(ask_user());
        p.get_value();

    }
