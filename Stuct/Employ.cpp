/*Create a structure called employeeType that contains two members: an employee number (type int ) 
and the employee’s compensation (in dollars; type float ). 
Ask the user to fill in this data for three employees, store it in three variables of type struct employeeType 
and then display the information for each employee.
*/
/*Create a structure called employeeType that contains two members: an employee number (type int ) 
and the employee’s compensation (in dollars; type float ). 
Ask the user to fill in this data for three employees, store it in three variables of type struct employeeType 
and then display the information for each employee.
*/
#include<iostream>
#include<iomanip>
using namespace std;
struct employeeType
{
    int employnum;
    float employ_compen;
};
int main()
{

employeeType Employ[3];
int n=3;
for(int i=0;i<n;i++)
{
    cout<<"Enter the Epmloy number of employ  "<<i+1<<endl;
    cin>>Employ[i].employnum;
    cout<<"Enter compensation of Employ  "<<i+1<<endl;
    cin>>Employ[i].employ_compen;
}
cout<<left<<setw(50)<<setfill('.')<<"Employ num"<<"Employ compensation"<<endl;
for (int  i = 0; i < n; i++)
{
    cout<<left<<i+1<<". "<<setw(50)<<setfill('.')<<Employ[i].employnum<<Employ[i].employ_compen<<"$"<<endl;
}

}
