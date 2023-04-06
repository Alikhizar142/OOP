#include<iostream>
#include<iomanip>
#include"member.h"
using namespace std;

    void memberType :: set_Name()
    {
        cout<<"Enter Person Name:"<<endl;
        cin>>Name;
    }
    void memberType :: set_ID()
    {
        cout<<"Enter Person ID:"<<endl;
        cin>>ID;
    }
    void memberType :: set_NOB()
    {
        cout<<"Enter the number of books bought:"<<endl;
        cin>>NOB;
    }
    void memberType :: set_Amount()
    {
        cout<<"Enter the amount of Person:"<<endl;
        cin>>amount;
    }
    
    void memberType :: Display_Name()
    {
        cout<<"The Name of Person is "<<Name<<endl ; 
    }
    void memberType :: Display_ID()
    {
        cout<<"The ID of Person is "<<ID<<endl ; 
    }
    void memberType :: Display_NOB()
    {
        cout<<"The number of books bought by Person are "<<NOB<<endl  ;
    }
    void memberType :: Display_amount()
    {
        cout<<"The remaining  amount of the  Person is RS: "<<amount<<endl  ;
    }

    void memberType :: Modify_name()
    {
            cout<<"Modify the name for this ID "<<endl;
            cin>>Name;
    }

    void memberType :: Modify_NOB()
    {
            cout<<"Update  the No of Books for "<<endl;
             cin>>NOB;
    }

    void memberType :: Modify_amount()
    {  
        cout<<"What you want to do "<<endl;
        cout<<"1.Add amount"<<endl;
        cout<<"2.Deduct amount"<<endl;
        int input;
        cin>>input;
        if(input==1)
        {
            cout<<"Enter the amount"<<endl;
             int a;
             cin>>a;
             amount=a+amount;
        }
        else if (input==2) 
        {
            cout<<"Enter the amount"<<endl;
             int a;
             cin>>a;
             amount=amount-a;
        }
        else
        cout<< "ID not found"<<endl;
    }

 void memberType :: Set_Data()
 {
    set_Name();
    set_ID();
    set_NOB();
    set_Amount();
 }
 void memberType :: Display_Data()
 {
    Display_Name();
    Display_ID();
    Display_NOB();
    Display_amount();
 }
 void memberType :: Update_Data(memberType M[],int n)
 {
    cout<<"Enter user ID"<<endl;
    int id;
    cin>>id;
    for(int i=0;i<n;i++)
    {
      if(id==M[i].ID)
    {
        cout<<"1.Modify Name"<<endl;
        cout<<"2.Modify No of books bought:"<<endl;
        cout<<"3.Modify amount"<<endl;
        int input;
        cin>>input;
        if (input==1)
        {
           M[i].Modify_name();
        } 
        else if (input==2)
        {
            M[i].Modify_NOB();
        }  
        else if (input==3)
        {
           M[i].Modify_amount();
        }  
        else 
        cout<<"Invalid input"<<endl;
        
        break;
    }
    else 
    cout<<"Id not found"<<endl;
    }
 }
//   memberType :: memberType(string n="0",int id=0,int nob=0,int amt=0)
//    {
//       Name=n;
//       ID=id;
//       NOB=nob;
//       amount=amt;
//    }
   int memberType :: get_id()
   {
    return ID;
   }
int  memberType :: get_NOB()
 {
    return NOB;
 }
 int  memberType :: get_amount()
 {
    return amount;
 }
 void  memberType :: Update_NOB()
 {
    NOB=NOB+1;
 }
