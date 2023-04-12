/*In this exercise, you will design a class memberType. 

a. Each object of memberType can hold the name of a person, member ID, number of books bought, and amount spent.

b. Include the member functions to perform the various operations on the objects of memberType—for example, modify, set, and show a person’s name. Similarly, update, modify, and show the number of books bought and the amount spent.

c. Add the appropriate constructors.
d. Write the definitions of the member functions of memberType.
e. Write a program to test various operations of your class memberType.
*/
#include<iostream>
#include<iomanip>
using namespace std;
class memberType{
    string Name;
    int ID;
    int NOB;
    int amount;
    void set_Name()
    {
        cout<<"Enter Person Name:"<<endl;
        cin>>Name;
    }
    void set_ID()
    {
        cout<<"Enter Person ID:"<<endl;
        cin>>ID;
    }
    void set_NOB()
    {
        cout<<"Enter the number of books bought:"<<endl;
        cin>>NOB;
    }
    void set_Amount()
    {
        cout<<"Enter the amount of Person:"<<endl;
        cin>>amount;
    }
    
    void Display_Name()
    {
        cout<<"The Name of Person is "<<Name<<endl ; 
    }
    void Display_ID()
    {
        cout<<"The ID of Person is "<<ID<<endl ; 
    }
    void Display_NOB()
    {
        cout<<"The number of books bought by Person are "<<NOB<<endl  ;
    }
    void Display_amount()
    {
        cout<<"The remaining  amount of the  Person is RS: "<<amount<<endl  ;
    }

    void Modify_name()
    {
            cout<<"Modify the name for this ID "<<endl;
            cin>>Name;
    }

    void Modify_NOB()
    {
            cout<<"Update  the No of Books for "<<endl;
             cin>>NOB;
    }

    void Modify_amount()
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

    public:
 void Set_Data()
 {
    set_Name();
    set_ID();
    set_NOB();
    set_Amount();
 }
 void Display_Data()
 {
    Display_Name();
    Display_ID();
    Display_NOB();
    Display_amount();
 }
 void Update_Data(memberType M[],int n)
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
   memberType(string n="",int id=0,int nob=0,int amt=0)
   {
      Name=n;
      ID=id;
      NOB=nob;
      amount=amt;
   }
};
int main()
{
    int n;
    cout<<"Enter the number of Members"<<endl;
    cin>>n;
    memberType M[n];
   while (1)
    {   cout<<"***************************************MENU****************************************"<<endl;
        cout<<"1.Enter Data of Member"<<endl;
        cout<<"2.Update Data of Member"<<endl;
        cout<<"3.Display Data"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Select Option"<<endl;
        int input;
        cin>>input;
        if(input==1)
        {
            for(int i=0;i<n;i++)
            {
                cout<<"Enter the Data of member "<<i+1<<endl;
                M[i].Set_Data();
            }
        }
        else if(input==2)
        {
             M->Update_Data(M,n);
        }
         else if(input==3)
        {
            for(int i=0;i<n;i++)
            {
                cout<<"  Data of member "<<i+1<<endl;
                M[i].Display_Data();
            }
            
        }
        else
        {
            break;
        }
    }
    
}