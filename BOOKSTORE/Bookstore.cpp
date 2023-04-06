/*Using the classes designed in Programming Exercises 6 and 7, write a program to simulate a bookstore.
 The bookstore has two types of customers: those who are members of the bookstore and those who buy books from the bookstore only occasionally. 
Each member has to pay a $10 yearly membership fee and receives a 5% discount on each book purchased. 
For each member, the bookstore keeps track of the number of books purchased and the total amount spent.
 For every eleventh book that a member buys, the bookstore takes the average of the total amount of the last 10 books purchased, applies this amount as a discount, and then resets the total amount spent to 0.
Write a program that can process up to 1000 book titles and 500 members. Your program should contain a menu that gives the user different choices to effectively run the program; in other words, your program should be user-driven.
*/
#include<iostream>
#include"member.h"
#include"book.h"
void Search_ISBN (  bookType s[],int n)
{
    cout<<"Enter the Book ISBN"<<endl;
    string M;
    cin>>M;
    for(int i=0;i<n;i++)
    {
        if(M == s[i].ret_ISBN())
        {
            s[i].Display_Data();
        }  
    }
}
void Enter_book_Data( bookType B[],int n)
{
    while (1)
    {   cout<<"***************************************MENU****************************************"<<endl;
        cout<<"1.Enter Data of the Book"<<endl;
        cout<<"2.Search a book by ISBN"<<endl;
        cout<<"3.Update number of copies"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Select Option"<<endl;
        int input;
        cin>>input;
        if(input==1)
        {
            for(int i;i<1;i++)
            {
                cout<<"Enter the Data for book "<<i+1<<endl;
                B[i].set_Data();
            }
        }
         else if(input==2)
        {
             Search_ISBN(B,n);
        }
         else if(input==3)
        {
            for(int i;i<1;i++)
            {
                cout<<"Enter the Number of copies  for book "<<i+1<<endl;
                B[i].update_copies();
            } 
        }
        else
        {
            break;
        }
    }
}
      
void Enter_Member_Data( memberType M[] , int n)
{
      
   while (1)
    {   cout<<"***************************************MENU****************************************"<<endl;
        cout<<"1.Enter Data of Member"<<endl;
        cout<<"2.Update Data of Member"<<endl;
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
        else
        {
            break;
        }
    }
    
}

void assign_book(bookType B[], memberType M[])
{
    
    
   cout<<"Enter Y if you are the member of the bookstore"<<endl;
    char input;
    cin>>input;
    if (input=='Y'||input=='y')
    {
         cout<<"Enter Your ID"<<endl;
         int ID;
         cin>>ID;
         for(int i=0;i<1;i++)
         {
            if(ID==M[i].get_id())
            {
                cout<<"Enter the Book ISBN"<<endl;
                string ISBN;
                cin>>ISBN;
                for(int j=0;j<1;j++)
                {
                    if(B[j].ret_ISBN()==ISBN)
                    {
                        M[i].Update_NOB();
                    }
                }
            }
         }
         
    }
    
}
int main()
{
      bookType B[1000];
      memberType M[500];
    while(1)
    {
        cout<<"1.Enter Data for book"<<endl;
        cout<<"2.Register a New Member"<<endl;
        cout<<"3.Assign a book"<<endl;
        int input;
        cin>>input;
        if (input==1)
        {
            /* code */
          cout<<"Enter the number of books you want to Add "<<endl;
          int n;
          cin>>n;
          B[n];
            Enter_book_Data(B,n);
        }
        else if(input==2)
        {
             int n;
             cout<<"Enter the number of Members"<<endl;
            cin>>n;
            M[n];
            Enter_Member_Data(M,n);
        }
        else if(input==3)
        {
            assign_book(B,M);
        }
        
    }
}
