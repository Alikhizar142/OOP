#include<iostream>
#include<iomanip>
#include <string>
#include"book.h"
using namespace std;

   void  bookType :: set_title()
   {
      cout<<"Enter the title of the Book"<<endl;
     
     cin>>Title; 
   }

   void  bookType ::  set_author()
   { 
    cout<<"Enter the number of  the authors of book ( 1 to 4 )"<<endl;
    cin>>author_num;
     if(author_num<= 4 && author_num>=1 )
    {
     for(int i=0;i<author_num;i++)
     {
        cout<<"Enter author name  "<<i+1<<endl;
        cin>>author[i];

     }
    }
   }

   void  bookType ::  set_publisher()
   {
        cout<<"Enter the name of publisher"<<endl;
        cin>>publisher;
   }

   void  bookType ::  set_ISBN()
   {
     cout<<"Enter the ISBN of the book"<<endl;
      cin>>Isbn;
   }

   void  bookType :: set_price()
   {
      cout<<"ENter the price of book"<<endl;
      cin>>price;
   }

   void bookType ::  set_copies()
   {
      cout<<"Enter number of copies"<<endl;
      cin>>copies;
   }

   void  bookType ::  Display_title()
   {
    cout<<"The title of the book is "<<Title<<endl;
   }

    void  bookType ::  Display_author()
   {
     for(int i=0;i<author_num;i++)
     {
        cout<<"The  author name is "<<i+1<<" :   "<<author[i]<<endl;
      }
   }

    void  bookType :: Display_publisher()
    {
        cout<<"The Publisher name is   "<<publisher<<endl;
    }

    void  bookType ::  Display_ISBN()
    {
        cout<<"The ISBN of book is : "<<Isbn<<endl;
    }

    void  bookType ::  Display_price()
    {
        cout<<"The price of the book is "<<price<<" $  "<<endl;
    }

    void  bookType :: Display_copies()
    {
        cout<<"The Number of the copies of this book are "<<copies<<endl;
    }
    void  bookType :: set_Data()
    {
        set_title();
        cout<<endl;
        set_author();
        cout<<endl;
        set_publisher();
        cout<<endl;
        set_ISBN();
        set_price();
        set_copies();
    }

    void  bookType ::  Display_Data()
    {
        Display_title();
        Display_author();
        Display_publisher();
        Display_ISBN();
        Display_price();
        Display_copies();
    }
  
    void  bookType ::  update_copies()
    {
        cout<<"Enter the updated copies of book"<<endl;
        int n;
        cin>>n;
        copies=n;
    }
    
    string  bookType :: ret_title()
    {
        return Title;
    }
     string bookType ::  ret_ISBN()
    {
        return Isbn;
    }