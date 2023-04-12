/*Add a variable of type enum etype , and another variable of type struct dateType to the employee class.
Organize the resulting program so that the user enters four items of information for each of three employees:
 an employee number, the employee’s compensation, the employee type, and the date of first employment.
  The program should store this information in three variables of type employee , 
  and then display their contents.
*/
#include<iostream>
using namespace std;
#include<iomanip>
enum etype{
    laborer, secretary, manager, accountant, executive,researcher
};
struct dateType{
    int day;
    int month;
    int year;
};
class employ{
    int employnum;
    float employ_compen;
    dateType date;
    etype type;
    void set_date()
    {  cout<<"Enter Date"<<endl;
        int d,m,y;
        cout<<"Enter Day"<<endl;
        cin>>d;
        cout<<"Enter Month"<<endl;
        cin>>m;
        cout<<"Enter year"<<endl;
        cin>>y;
        date.day=d;
        date.month=m;
        date.year=y;
    }
    void set_employ_type(char a)

   {
      switch (a)
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
    void display_type(char a)
 {
    switch (a)
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
    
    void setData()
    {
        cout<<"Enter Employ Number"<<endl;
        cin>>employnum;
        cout<<"Enter Employ Compensation"<<endl;
        cin>>employ_compen;
        set_date();
         char input;
        cout<<"ENter the employ type ( first Charcter only ,  laborer, secretary, manager, accountant, executive,researcher"<<endl;
        cin>>input;
        set_employ_type(input);
    }
    void DisplayData()
    {   
        
        cout<<left<<"Employ Number is "<<employnum<<endl;
        cout<<left<<"Employ consmpection is "<<employ_compen<<"$"<<endl;
        cout<<left<<"Date joined  "<<date.day<<"/"<<date.month<<"/"<<date.year<<endl;
        display_type(type);
    }

};
int main()
{
    employ emp;

    cout<<"********************Enter Employ Deatiles**************************"<<endl;
    emp.setData();
    
    cout<<endl;
    cout<<endl;
    cout<<"**********************Employ Data****************************"<<endl;
    emp.DisplayData();
}

