#include<iostream>
using namespace std;
class Employee{
    int ID;
    string name;
    string title;
    int hours;

 
 void get_ID();
 void get_name();
 void get_title();
 void get_hours();
public:
Employee();
string display_name();
int cacl_Salary();
void get_data();
};

