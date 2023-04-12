/*Imagine you are working on a project for a company that wants to manage their 
Employees data. Your task is to create a program that can handle different types of 
employees such as hourly employees and salaried employees. Each employee has a 
name, and a salary.
To achieve this task, you need to create a class hierarchy that uses inheritance to 
represent the different types of employees. You should start by creating a base class 
called "Employee" that contains common attributes(“Employee name”) and 
methods(constructor, getters, setters, and calcSalary()) for all types of employees.
Next, create derived classes for each type of employee (HourlyEmployee and 
SalariedEmployee), which inherit from the base class. These derived classes should 
include additional attributes and methods that are specific to each type of employee.
For example, the HourlyEmployee class might have attributes for its hourly rate and 
hours worked, while the SalariedEmployee class might have an attribute for its 
annual salary. Each derived class should also have a constructor that initializes its 
specific attributes and calls the base class constructor*/





#include<iostream>
#include<string>
using namespace std;
class Employee{
    string name;
    public:
    Employee(string n="");
    void set_name(string n);
    int calSalary();
string get_name();

};
string Employee::get_name()
{
    return name;
}

int Employee::calSalary( )
{
     
}
Employee::Employee(string n)
{
    name=n;
}
void Employee::set_name(string n)
{
    name=n;
}
class HourlyEmployee : public Employee
{
    int hours;
    int rate;
    void set_hours(int h);
    void set_rate(int r);
    public:
    void Display();
    void set_data();
    HourlyEmployee(string s="",int h=0,int r=0);
    int calSalary();
};
void HourlyEmployee :: set_hours(int h)
{
 hours=h;
}
void HourlyEmployee :: set_rate(int r)
{
 rate=r;
}
HourlyEmployee::HourlyEmployee(string s,int h,int r):Employee(s)
{
    set_hours(h);
    set_rate(r);
}
int HourlyEmployee :: calSalary()
{
	return hours*rate;
}
void HourlyEmployee::set_data()
{
  cout<<"Enter name of the HourlyEmployee"<<endl;
  string s;
  cin>>s;
   set_name(s);
   cout<<"Enter hours employeee work"<<endl;
   int h;
   cin>>h;
   set_hours(h);
   cout<<"Enter hourly rate"<<endl;
   int r;
   cin>>r;
   set_rate(r);
}
void HourlyEmployee::Display()
{
    cout<<"Hourly Employee Details:"<<endl;
    cout<<"Name:"<<get_name()<<endl;
    cout<<"Hourly Rate:"<<rate<<"$"<<endl;
    cout<<"Hours worked:"<<hours<<endl;
    cout<<"Hourly Employee Salary:"<<calSalary()<<"$"<<endl;
}

class SalariedEmployee :public  Employee
{
  int Salary;
  void set_salary(int s);  
  public:
  void set_data();
  SalariedEmployee(string n="",int s=0);
  void Display();
  int calSalary();
};
int SalariedEmployee:: calSalary()
{
	return Salary/12;
}
SalariedEmployee::SalariedEmployee(string n,int s):Employee(n)
{
    set_salary(s);
}
void SalariedEmployee:: set_salary(int s)
{
    Salary=s;
}
void SalariedEmployee::set_data()
{
      cout<<"Enter name of the SalariedEmployee"<<endl;
    string n;
     cin>>n;
    set_name(n);
   cout<<"Enter annual salary:"<<endl;
   int s;
   cin>>s;
   set_salary(s);
}
void SalariedEmployee::Display()
{
    cout<<"Salaried Employee Details:"<<endl;
    cout<<"Name:"<<get_name()<<endl;
    cout<<"Annual Salary:"<<Salary<<"$"<<endl;
    cout<<"Employee Salary per month :"<<calSalary()<<"$"<<endl;
}


int main()
{
    HourlyEmployee Employe;
    Employe.set_data();
    SalariedEmployee Employ;
    Employ.set_data();
    Employe.Display();
    Employ.Display();

}