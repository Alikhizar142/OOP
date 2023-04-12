/* Extend the employee class of Exercise 3 to include a date class (see Exercise 2) and an etype enum.
An object of the date class should be used to hold the date of first employment; that is, the date when the employee was hired.
The etype variable should hold the employee’s type: laborer, secretary, manager, and so on.
These two items will be private member data in the employee definition, just like the employee number and salary.
 You’ll need to extend the getemploy() and putemploy() functions to obtain this new information from the user and display it. 
These functions will probably need switch statements to handle the etype variable.
Write a main() program that allows the user to enter data for three employee variables and then displays this data.
*/
#include<iostream>
#include<iomanip>
using namespace std;
enum etype{
    laborer, secretary, manager, accountant, executive,researcher
};
class Date{
    int day,month,year;
    public:
    void getdate()
    {
        cout<<"ENter Hiring Date"<<endl;
        cout<<"Enter month"<<endl;
        cin>>month;
        cout<<"Enter Day"<<endl;
        cin>>day;
        cout<<"Enter year"<<endl;
        cin>>year;
    }
    void Showdate()
    {
        cout<<"Hiring Date is  "<<month<<"/"<<day<<"/"<<year<<endl;
    }
};
class employee{
    int number;
    float compen;
    Date D;
    etype type;
    void get_Type()
    {
     char input;
    cout<<"ENter the employ type ( first Charcter only ,  laborer, secretary, manager, accountant, executive,researcher"<<endl;
    cin>>input;
    switch (input)
    {
    case 'l':
       type = laborer;
        break;
    case 's':
    type = secretary;
    break;
    case 'm':
    type = manager;
    break;
    case 'a':
    type = accountant;
    break;
    case 'e':
    type = executive;break;
    case 'r':
    type = researcher;break;
    default:
        break;
    }
    }
    void Show_Type(etype type)
   {
      switch (type)
    {
    case laborer:
       cout<<"The employ is a laborer"<<endl;
        break;
    case secretary:
        cout<<"The employ is a secretary"<<endl;
    break;
    case manager:
    cout<<"The employ is a manager"<<endl;
    break;
    case accountant:
    cout<<"The employ is a accountant"<<endl;
    break;
    case executive:
    cout<<"The employ is a executive"<<endl;break;
    case researcher:
    cout<<"The employ is a researcher"<<endl;break;
    default:
        break;
    }

   }
    public:
    void getData()
    {
        
        cout<<"Enter Employ Number"<<endl;
        cin>>number;
        cout<<"Enter Employ Compensation"<<endl;
        cin>>compen;
        D.getdate();
        get_Type();
    
    }
    void ShowData()
    {  
       
        cout<<left<<"Employ Number is  "<<number<<"  Employ Compensation is "<<compen<<"$"<<endl;
        D.Showdate();
        Show_Type(type);
       
    }
};
int main()
{
    employee E[3];
    for(int i=0;i<3;i++)
    {
       cout<<"Enter Data for Employ  "<<i+1<<endl;
        E[i].getData();
    }
     for (int i=0;i<3;i++)
    { cout<<"Data of Employ "<<i+1<<"is:"<<endl;
        E[i].ShowData();
    }
}
