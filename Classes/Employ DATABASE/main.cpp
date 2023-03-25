/*Suppose you are designing a program to manage a company's employee 
database. Each employee has a unique ID, a name, a job title, and no of 
hours worked per week. In main ask the user to enter the no of employees 
and then create an array of that no of employees and initialize their values. 
Your class must use getter and setter methods where required. The class 
must have a method named cacl_Salary()
Now calculate the salary of each employee based on the following details:
If the no of hours worked of that employee is less than or equal to 40, the 
salary would be hours worked multiplied by the hourly rate. If the no of 
hours worked is greater than 40, then he will get an overtime. The pay for 
the overtime hours is double than what he gets for the base hours. For that 
calculate the extra hours worked and calculate the pay only for the overtime 
and add it to the base pay. Do this for all the employees and display the 
name and salary of all the employees*/

#include<iostream>
#include"employ.h"
#include<string>
using namespace std;
int main()
{
    cout<<"Enter Number of Employs "<<endl;
    int n;
    cin>>n;
    Employee S[n];
    int salary;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Data for Employ "<<i+1<<endl;
        S[i].get_data();
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<"************** Data of Employee "<<"*****************"<<i+1<<endl;
        cout<<"Name of the Employee is "<<S[i].display_name()<<endl;
        salary=S[i].cacl_Salary();
        cout<<"The Salary is RS "<<salary<<endl;
    }
}

