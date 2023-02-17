/*Imagine an enumerated type with values that indicate an employee type within an organization:

enum etype { laborer, secretary, manager, accountant, executive,researcher };


Write a program that first allows the user to specify a type by entering its first letter ( ‘l’ , ‘s’ , ‘m’ , and so on), then stores the type chosen as a value of a variable of type enum etype , and finally displays the complete word for this type.

Enter employee type (first letter only) laborer, secretary, manager, accountant, executive, researcher: a
Employee type is accountant.

You’ll probably need two switch statements: one for input and one for output.
*/



#include<iostream>
#include<iomanip>
using namespace std;
enum etype{
    laborer, secretary, manager, accountant, executive,researcher
};
int main()
{
    etype type;
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
