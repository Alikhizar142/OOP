/*Define the class bankAccount to store a bank customer’s account number and balance.
Suppose that account number is of type int, and balance is of type double. Your class should, at
least, provide the following operations: set the account number, retrieve the account
number, retrieve the balance, deposit and withdraw money, and print account information. Add
appropriate constructors.
b. Every bank offers a checking account. Derive the class checkingAccount from the class
bankAccount (designed in part (a)). This class inherits members to store the account number
and the balance from the base class. A customer with a checking account typically receives
interest, maintains a minimum balance, and pays service charges if the balance falls below the
minimum balance. Add member variables to store this additional information. In addition to the
operations inherited from the base class, this class should provide the following operations: set
interest rate, retrieve interest rate, set minimum balance, retrieve minimum balance, set
service charges, retrieve service charges, post interest, verify if the balance is less than the
minimum balance, write a check, withdraw (override the method of the base class), and print
account information. Add appropriate constructors.
c. Every bank offers a savings account. Derive the class savingsAccount from the class
bankAccount (designed in part (a)). This class inherits members to store the account number
and the balance from the base class. A customer with a savings account typically receives
interest, makes deposits, and withdraws money. In addition to the operations inherited from the
base class, this class should provide the following operations: set interest rate, retrieve interest
rate, post interest, withdraw (override the method of the base class), and print account
information. Add appropriate constructors.
d. Write a program to test your classes designed in parts (b) and (c).*/
#include<iostream>
#include<string>
using namespace std;

class bankAccount{
 int A_number;
 double balance;
 void setA_nummber(int n);


 public:
  void set_Balance(double B);
 bankAccount(int N=0,double B=0);
 int get_number();
 double get_Balance();
 void set_Data();
 void print();
  void withdraw();
 void deposit();
};
bankAccount::bankAccount(int N,double B)
{
     setA_nummber(N);
     set_Balance(B);
}
double bankAccount ::get_Balance()
{
    return balance;
}
int bankAccount::get_number()
{
    return A_number;
}

void bankAccount::withdraw()
{ 
     cout<<"Enter the amount you want to Withdraw"<<endl;
        double W;
        cin>>W;

     double A=balance-W;
     set_Balance(A);
}
void bankAccount::deposit()
{
       cout<<"Enter the amount you want to deposit"<<endl;
        double d;
        cin>>d;
     double B=balance+d;
    set_Balance(B);
}
void bankAccount::setA_nummber(int a)
{
    A_number=a;
}
void bankAccount::set_Balance(double B)
{
    balance=B;
}
void bankAccount::set_Data()
{
   cout<<"Enter Account Number"<<endl;
   int a;
   cin>>a;
   setA_nummber(a);
 while (1)
 {
    cout<<"1.Deposit"<<endl;
    cout<<"2.Withdraw"<<endl;
    cout<<"3.Exit"<<endl;
    int  opt;
    cout<<"Select Option"<<endl;
    cin>>opt;
    if(opt==1)
    {
     
        deposit();
    }
    else  if(opt==2)
    {
       
        withdraw();
    }
    else 
    break;
  }
}
void bankAccount::print()
{ 
      cout<<"Account Number:  "<<A_number<<endl;
      cout<<"Balance: " <<balance<<endl;
}

class  checkingAccount : public bankAccount 
{
float interest;
double minimum_Balance;
double S_charges;
void set_interest(float s);
void set_Mbalance(double m);
void set_SC(double  S);

void post_interest();
public:
void set_Data();
void print();
void withdraw();
checkingAccount(float i=0,double m_B=0,double S_c=0,int AN=0,double Balance=0);
};
void checkingAccount::set_Data()
{
    bankAccount::set_Data();
    cout<<"Enter the interest rate"<<endl;
    float n;
    cin>>n;
    set_interest(n);
    cout<<"Enter the minimum balance"<<endl;
    double m;
    cin>>m;
    set_Mbalance(m);
    cout<<"Enter the Services   charges"<<endl;
    double S;
    cin>>S;
    set_SC(S);
}
void checkingAccount::set_interest(float s)
{
    interest=s;
}
void checkingAccount::withdraw()
{
    cout<<"Enter the amount you want to Withdraw"<<endl;
        double W;
        cin>>W;
    if(get_Balance()>W)
    {
        double A=get_Balance()-W;
        set_Balance(A);
    }
    else
    {
        cout<<"Not enough fund"<<endl;
    }
}
checkingAccount::checkingAccount(float i,double m_B,double S_c,int AN,double Balance):bankAccount(AN,Balance)
{
    set_Mbalance(m_B);
    set_interest(i);
    set_SC(S_c);
}
void checkingAccount:: set_Mbalance(double a)
{
    minimum_Balance=a;
}
void checkingAccount::set_SC(double S)
{
    S_charges=S;
}
void checkingAccount::print()
{   post_interest();
    bankAccount::print();
    cout<<"Interest Rate: "<<interest<<endl;
    cout<<"Minimum Balance:"<<minimum_Balance<<endl;
    cout<<"Service Charges:"<<S_charges<<endl;
}
void checkingAccount::post_interest()
{
    double A=get_Balance()*interest/100;
    set_Balance(A);
}

class savingsAccount :public bankAccount
{
    float interest;
    void set_interest(float s);
    void post_interest();
   
    public:
     void withdraw();
    void set_Data();
    void print();
    savingsAccount(float i=0,int N=0,double B=0);
};
savingsAccount::savingsAccount(float i,int N,double B):bankAccount(N,B)
{
    set_interest(i);
}
void savingsAccount::set_interest(float s)
{
    interest=s;
}
void savingsAccount::post_interest()
{
    double A=get_Balance()*interest/100;
    set_Balance(A);
}
void savingsAccount::withdraw()
{
    cout<<"Enter the amount you want to Withdraw"<<endl;
        double W;
        cin>>W;
    if(W>get_Balance())
    {
        cout<<"Insufficient Funds"<<endl;
    }
    else
    {
        double a;
        a=get_Balance()-W;
        set_Balance(a);
    }

}
void savingsAccount::set_Data()
{
    bankAccount::set_Data();
    cout<<"Enter Interest Rate"<<endl;
    float i;
    cin>>i;
    set_interest(i);  
}
void savingsAccount::print()
{   
    cout<<"Interest Rate:"<<interest<<endl;
    post_interest();
    bankAccount::print();
}

int main()
{
    savingsAccount A;
    checkingAccount B;
    while (1)
    {
        cout<<"1. Savings Account"<<endl;
        cout<<"2. Checking Account"<<endl;
        cout<<"3. Exit"<<endl;
        int choice;
        cin>>choice;
        if(choice==1)
          {   
            while (1)
        
          {
             cout<<"1.Enter Data"<<endl;
             cout<<"2.Print Data"<<endl;
             cout<<"3.Deposit amount"<<endl;
             cout<<"4.Withdraw amount"<<endl;
             cout<<"5.Exit"<<endl;
             int opt;
             cin>>opt;
             if(opt==1)
             {
                A.set_Data();
             }
             else if(opt==2)
             {
                A.print();
             }
             else if(opt==3)
             {
                A.deposit();
             }
             else if(opt==4)
             {
                A.withdraw();
             }
             else
             break;
           }
          }
         else if (choice==2)
         {
            while (1)
            {
             cout<<"1.Enter Data"<<endl;
             cout<<"2.Print Data"<<endl;
             cout<<"Exit"<<endl;
             int opt;
             cin>>opt;
             if(opt==1)
             {
                B.set_Data();
             }
             else if(opt==2)
             {
                B.print();
             }
               else if(opt==3)
             {
                B.deposit();
             }
             else if(opt==4)
             {
                B.withdraw();
             }
             else
             break;
            }
         }

        else
        break;
    }
    
}