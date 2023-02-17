/*Create a structure of type dateType that contains three members: 
the month, the day of the month, and the year, all of type int . 
(Or use day-month-year order if you prefer.) Have the user enter a date in the format 12/31/2001, 
store it in a variable of type struct dateType ,
then retrieve the values from the variable and print them out in the same format.*/

#include<iostream>
#include<iomanip>
using namespace std;
struct dateType{
    int day;
    int month;
    int year;
};
int main()
{
    dateType Date;
    cout<<"Enter Date"<<endl;
    cin>>Date.day;
    cout<<"Enter Month"<<endl;
    cin>>Date.month;
    cout<<"Enter year"<<endl;
    cin>>Date.year;
    cout<<Date.day<<"/"<<Date.month<<"/"<<Date.year<<endl;
}