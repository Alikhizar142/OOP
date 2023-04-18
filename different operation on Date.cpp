/*The class dateType was designed and implemented to keep track of a date, but it has very
limited operations. Redefine the class dateType so that it can perform the following operations
on a date, in addition to the operations already defined:
a. Set the month after validating the month.
b. Set the day after validating the day.
c. Set the year after validating the year.
d. Return the month.
e. Return the day.
f. Return the year.
g. Test whether the year is a leap year.
h. Return the number of days in the month. For example, if the date is 3-12-2013, the number of
days to be returned is 31 because there are 31 days in March.
i. Return the number of days passed in the year. For example, if the date is 3-18-2013, the
number of days passed in the year is 77. Note that the number of days returned also includes
the current day.
j. Return the number of days remaining in the year. For example, if the date is 3-18-2013, the
number of days remaining in the year is 288.
k. Calculate the new date by adding a fixed number of days to the date. For example, if the date
is 3-18-2013 and the days to be added are 25, the new date is 4-12-2013.*/
#include<iostream>
using namespace std;
class dateType
{
private:
int dMonth; 
int dDay; 
int dYear; 
void setDate(int month, int day, int year);
void set_Date();
void setNew_Date();
void add_days(int D);
int return_day(int M);
bool check_leap(int y);
int pass_days();
int remaining_days();
int getDay() const;
int getMonth() const;
int getYear() const;
void printDate() const;
void set_month(int m);
void set_day(int d);
void set_year(int y);
public:
dateType(int month = 1, int day = 1, int year = 1900);
void choice();
};
void dateType::set_Date()
{
    cout<<"Enter Date in (dd/mm/yy) formate:"<<endl;
    int d,m,y;
    cin>>d>>m>>y;
    setDate(m,d,y);
}
dateType::dateType(int month , int day , int year)
{
    setDate(month,day,year);
}
void dateType::setDate(int month, int day, int year)
{
    set_day(day);
    set_month(month);
    set_year(year);
   
}
void dateType::printDate() const
{
   cout<<dDay<<"\\"<<dMonth<<"\\"<<dYear<<endl;
}
int dateType::return_day(int M)
{
    for(int i=1;i<13;i++)
    {
        if(i==M && M==2)
        {
            return 28;
        }
        else if(i==M && (M==1||M==3||M==5||M==7||M==8||M==10||M==12))
        {
            return 31;
        }
        else
        return 30;
    }
}
bool dateType::check_leap(int y)
{
     if((y%400 == 0 || y % 100 !=0 )&& y%4==0)
	   {
        return true;
       }
	 else
      return false;
}
void dateType::setNew_Date()
{
    set_Date();
}
void dateType::add_days(int D)
{
       if(dMonth==2)
       {
          dDay=dDay+D;
          if(dDay>28)
            {
                dMonth++;
                dDay=dDay-28;
            }
       }
       else if(dMonth==1||dMonth==3||dMonth==5||dMonth==7||dMonth==8||dMonth==10||dMonth==12)
       {
          dDay=dDay+D;
          if(dDay>31)
          {
            dMonth++;
            dDay=dDay-31;
          }
          else if(dDay>31&&dMonth==12)
          {
            dYear++;
            dMonth=1;
            dDay=dDay-31;
          }
       }
       else
       {
        dDay=dDay+D;
        if(dDay>30)
        {
            dMonth++;
            dDay=dDay-30;
        }
       }
}
int dateType::pass_days()
{   
    int count=0;
      for (int  i = 1; i <dMonth; i++)
      {
           if(i==2)
          {
              for(int i=1;i<=28;i++)
              {
                count++;
                 if(check_leap(2))
                 {
                    count++;
                 }
              }
          }
       else if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
       {
         for(int i=1;i<=31;i++)
              {
                count++;
              }
        }
       
       else
       {
        for(int i=1;i<=30;i++)
              {
                count++;
              }
      
       }  
      }
      return count+dDay;
}
int dateType::remaining_days()
{

    if(dMonth!=2)
    return 365-pass_days();
    else
    return 366-pass_days();
}
void dateType:: set_day(int d)
{
   if(d<31)
    {
        dDay=d;
    }
    else
    dDay=1;
}
void dateType::set_month(int m)
{
    if(m<=12)
    {
        dMonth=m;
    }
    else
    dMonth=1;
}
void dateType::set_year(int y)
{
    dYear=y;
}
void dateType:: choice()
{
    set_Date();
    while(1)
    {
        cout<<"1.Update Date"<<endl;
        cout<<"2.Check leap year"<<endl;
        cout<<"3.Find number of days remaining:"<<endl;
        cout<<"4.Find number of days passed:"<<endl;
        cout<<"5.Find number of days of a month"<<endl;
        cout<<"6.Add Days to Date"<<endl;
        cout<<"7.Exit"<<endl;
        cout<<"Enter your choice: ";
        int choice;
        cin>>choice;
        if(choice==1)
        {
            cout<<"1.Update Month"<<endl;
            cout<<"2.Update Year"<<endl;
            cout<<"3.Update Day"<<endl;
            cout<<"4.Exit"<<endl;
            cout<<"Enter your choice: ";
            int choice1;
            cin>>choice1;
            if(choice1==1)
            {
                cout<<"Enter the month: ";
                int month;
                cin>>month;
                set_month(month);

            }
            else if(choice1==2)
            {
                cout<<"Enter the year: ";
                int year;
                cin>>year;
                set_year(year);
            }
            else if(choice1==3)
            {
                cout<<"Enter the day: ";
                int day;
                cin>>day;
                set_day(day);

            }
            else
            break;
           cout<<"Updated Dated:  ";
            printDate();
        }
        else if(choice==2)
        {
          if(check_leap(dYear))
          {
            cout<<"It is a leap year"<<endl;
          }
          else
          {
            cout<<"It is not a leap year"<<endl;
          }
        }
        else if(choice==3)
        {
            int rem=remaining_days();
            cout<<"Remaining days: "<<rem<<endl;
        }
        else if(choice==4)
        {
            int pass=pass_days();
            cout<<"Passed days: "<<pass<<endl;
        }
        else if(choice==5)
        {
            int days=return_day(dMonth);
            cout<<"Days in month  "<<dMonth<<" : "<<days<<endl;
        }
        else if(choice==6)
        {
            cout<<"Enter Number of Days you want to add  to the Date"<<endl;
            int days;
            cin>>days;
            add_days(days);
            cout<<"Updated Dated:  ";
            printDate();
        }
        else
        break;
    }
}

int main()
{
    dateType D;
     D.choice();
}