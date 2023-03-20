/*Create a SavingsAccount class. Use a static data member annualInterestRate to store the annual interest rate for each of the savers. 
Each member of the class contains a private data member savingsBalance indicating the amount the saver currently has
on deposit. Provide a member function calculateMonthlyInterest that calculates the monthly
interest by multiplying the balance by annualInterestRate divided by 12; this interest should be
added to savingsBalance. Provide a static member function modifyInterestRate that sets the
static annualInterestRate to a new value. Write a driver program to test class SavingsAccount.
Instantiate two different objects of class SavingsAccount, saver1 and saver2, with balances of
$2000.00 and $3000.00, respectively. Set the annualInterestRate to 3 percent. Then calculate
the monthly interest and print the new balances for each of the savers. Then set the
annualInterestRate to 4 percent, calculate the next month’s interest and print the new balances
for each of the savers*/
#include<iostream>
using namespace std;
class SavingAccount{

static  float annual_interest_rate;
float savingBalance;
public:
void calculateMonthlyInterest();
SavingAccount(float n);
static void set_interest(float n);
void set_Balance(float n);
void print() const;
};
SavingAccount :: SavingAccount(float n=0)
{
    set_Balance(n);
}
void SavingAccount :: calculateMonthlyInterest(){
   int n=(savingBalance*annual_interest_rate)/12;
   savingBalance=savingBalance+n;
}
void SavingAccount::set_Balance(float n)
{
    savingBalance=n;
} 
void SavingAccount::set_interest(float n)
{
    annual_interest_rate=n;
}
float SavingAccount :: annual_interest_rate=0;
void SavingAccount ::print() const
{
    cout<<"The total balance after  "<<annual_interest_rate<<" % interest is RS: "<<savingBalance<<endl;
}

int main()
{
    SavingAccount saver1(3000.00),saver2(2000.00);
    saver1.set_interest(3);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    saver1.print();
    saver2.print();
    saver1.set_interest(4);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    saver1.print();
    saver2.print();
    


}
