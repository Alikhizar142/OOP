/* You are developing a contact management software that allows users to 
keep track of their contacts. Each contact in the software consists of a person's name, 
phone number, email address, and date of birth. You want to implement this system 
using object-oriented programming principles, with a composition relationship. 
Here, the class Contact is composed of n numbers of contacts(array of contacts). 
And the total count of contacts(size of array), each contact is composed of the object 
of date of birth class plus some other data members like name, phone_no, and email.
Also design a method in the ContactBook class to print the names of all contacts in 
the book who have a birthday in a specific month.
Create a class diagram in Draw.io for the whole scenario. You must submit the cpp 
file and also the png file of the class diagram.*/

#include<iostream>
using namespace std;
class Date
{
    int day,month,year;

   void  set_day(int a);
   void  set_month(int b);
   void  set_year(int c);
   public:
   void set_data();
   int get_month();
   Date(int d,int m,int y);
   void Display();
};
Date::Date(int d=0,int m=0, int y=0)
{
  set_day(d);
  set_month(m);
  set_year(y);
}
void Date::set_day(int a)
{  if(a<=31)
    day=a;
    else
    day=0;
}
void Date::set_month(int b)
{  if(b<=12)
    month=b;
    else
    month=0;
}
void Date::set_year(int c)
{
    year=c;
}
void  Date::set_data()
{
    cout<<"Enter date of birth in formate (dd/mm/yy)"<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    set_day(a);
    set_month(b);
    set_year(c);
}
int Date::get_month(){
    return month;
}
void Date:: Display()
{
    cout<<"Date of Birth: "<<day<<"/"<<month<<"/"<<year<<endl;
}

class contact{
    string name;
    string mobile_no;
    string email;
Date DOB;

 void set_name(string n);
 void set_mobile(string m);
 void set_email(string e);
 void set_DOB();
 public:
 contact(string n,string m,string e,int d,int M,int y);
 void set_Data();
 void display();
 int  get_month();
};
contact::contact(string n="",string m="",string e="",int d=0,int M=0, int y=0):DOB(d,M,y)
{
   set_name(n);
   set_email(e);
   set_mobile(m);
}
void contact::set_name(string n)
{
   name=n;
}
void contact::set_mobile(string m)
{
   mobile_no=m;
}
void contact::set_email(string e)
{
   email=e;
}
void contact::set_Data()
{
    cout<<"Enter name:"<<endl;
    string n;
    cin>>n;
    set_name(n);
    cout<<"Enter mobile Number:"<<endl;
    string m;
    cin>>m;
    set_mobile(m);
    cout<<"Enter email:"<<endl;
    string e;
    cin>>e;
    set_email(e);
    DOB.set_data();
}
void contact::display()
{
   cout<<"Name  :"<<name<<endl;
   cout<<"Phone Number:  "<<mobile_no<<endl;
   cout<<"Email: "<<email<<endl;
   DOB.Display();
}
int contact::get_month()
{
   return DOB.get_month();
}

class contactBook
{
private:
    int n;
    contact C[10];
 
public:
    void set_n();
    contactBook(string n,string m,string e,int day,int month,int year);
    void display();
    void set_data();
    int get_date();
    void search(int n);
};
 void contactBook::set_n()
 {
     cout<<"Enter number of conatcts "<<endl;
     int a;
     cin>>a;
     n=a;
 }

contactBook::contactBook(string n="",string m="",string e="",int day=0,int month=0,int year=0)
{
     
}
 void contactBook::display()
{
		for(int i=0;i<n;i++)
	{
		 C[i].display();
	}
  
}
 void contactBook::set_data()
{
	for(int i=0;i<n;i++)
	{
		 C[i].set_Data();
	}
 
}
int contactBook::get_date()
{   for(int i=0;i<n;i++)

    return C[i].get_month();
}
void contactBook:: search(int n)
{
	 for(int i=0;i<2;i++)
    {
        if(n==C[i].get_month())
        {
            C[i].display();
        }
    }
}
int main()
{
    contactBook C ;
    while(1)
    {

    cout<<"1.Add contact"<<endl;
    cout<<"2.Display contact"<<endl;
    cout<<"3.Search contact by birthday month"<<endl;
    int opt;
    cin>>opt;
    if(opt==1)
    {   C.set_n();
    	C.set_data();
	}
    else if(opt==2)
    {
    	C.display();
	}
	else if(opt==3)
	{
		  cout<<"Enter the month"<<endl;
    int a;
    cin>>a;
    C.search(a);
	}
    else
     break;
   
   }
}