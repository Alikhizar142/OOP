/* In the heyday of the British Empire, Great Britain used a monetary system based on pounds, shillings, and pence.
 There were 20 shillings to a pound, and 12 pence to a shilling.
 The notation for this old system used the pound sign, £, and two decimal points, so that, for example, £5.2.8 meant 5 pounds, 2 shillings, and 8 pence. (Pence is the plural of a penny.) 
 The new monetary system, introduced in the 1950s, consists of only pounds and pence, with 100 pence to a pound (like U.S. dollars and cents). We’ll call this new system decimal pounds. 
Thus £5.2.8 in the old notation is £5.13 in decimal pounds (actually £5.1333333).
Create a structure called sterling that stores money amounts in the old-style British system. 
The members could be called pounds , shillings , and pence , all of type int .
 The program should ask the user to enter a money amount in new-style decimal pounds (type double ), convert it to the old-style system, store it in a variable of type struct sterling , and then display this amount in pounds-shillings-pence format.
*/
#include<iostream>
#include<iomanip>
using namespace std;
struct sterling{
    int pounds,shillings,pence;
};
void convert(double a)
{
    sterling amount;
    amount.pounds=a;
    double b=(a-amount.pounds)*20;
    amount.shillings=b;
    cout<<amount.shillings<<endl;
    double c=(b-amount.shillings)*20;
    amount.pence=c;

    cout<<"£"<<amount.pounds<<"."<<amount.shillings<<"."<<amount.pence<<endl;
}
int main()
{
    double input;
    cout<<"Enter a money amount in new-style decimal pounds "<<endl;
    cin>>input;
    convert(input);
}