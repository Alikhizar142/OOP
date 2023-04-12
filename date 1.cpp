/*Start with the date structure in Exercise 3 in the previous practice questions and transform it into a date class.
 Its member data should consist of three ints: month, day, and year. It should also
have two member functions: getdate(), which allows the user to enter a date in 12/31/02 format, and showdate(), which displays the date.
*/
#include<iostream>
#include<iomanip>
using namespace std;
class Date{
    int day,month,year;
    public:
    void getdate()
    {
        cout<<"Enter month"<<endl;
        cin>>month;
        cout<<"Enter Day"<<endl;
        cin>>day;
        cout<<"Enter year"<<endl;
        cin>>year;
    }
    void Showdate()
    {
        cout<<month<<"/"<<day<<"/"<<year<<endl;
    }
};
int main()
{
    Date D;
    cout<<"Enter date in(MM/DD/YY) formate"<<endl;
    D.getdate();
    D.Showdate();
}