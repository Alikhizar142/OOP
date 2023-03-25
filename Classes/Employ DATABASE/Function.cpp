#include<iostream>
#include"employ.h"
using namespace std;


Employee::Employee()
 {
    ID=0;
    name='0';
    title='0';
    hours=0;
 }
 void Employee::get_ID()
 {
    cout<<"Enter ID of the employ"<<endl;
    cin>>ID;
 }
 void Employee::get_name()
 {
    cout<<"Enter Name of the Employ"<<endl;
    cin>>name;
 }
  void Employee::get_title()
  {
    cout<<"Enter Job Title "<<endl;
    cin>>title;
  }
   void Employee::get_hours()
   {
    cout<<"Enter the number of hours employ work"<<endl;
    cin>>hours;
   }
   void Employee:: get_data()
   {
     get_ID();
     get_name();
     get_title();
     get_hours();
   }
   int Employee:: cacl_Salary()
   {
       int salary;
       if(hours<=40)
       {
          salary=hours*200;
       }
       else
       {
           salary=40*200;
           hours=hours-40;
           int a=hours*400;
           salary=salary+a;
       }
       return salary;
   }
   string Employee:: display_name()
   {
    return name;
   }

   