/*a. Some of the characteristics of a book are the title, author(s), publisher, ISBN, price, and year of publication. 
Design a class bookType that defines the book as an ADT.

i. Each object of the class bookType can hold the following information about a book: title, up to four authors, publisher, ISBN, price, and number of copies in stock. To keep track of the number of authors, add another member variable.

Include the member functions to perform the various operations on objects of type bookType. For example, the usual operations that can be performed on the title are to show the title, set the title, and check whether a title is the same as the actual title of the book. Similarly, the typical operations that can be performed on the number of copies in stock are to show the number of copies in stock, set the number of copies in stock, update the number of copies in stock, and return the number of copies in stock. Add similar operations for the publisher, ISBN, book price, and authors. Add the appropriate constructors and a destructor (if one is needed).

b. Write the definitions of the member functions of the class bookType.
c. Write a program that uses the class bookType and tests various operations on the objects of the class bookType. Declare an array of 100 components of type bookType. Some of the operations that you should perform are to search for a book by its title, search by ISBN, and
update the number of copies of a book.
*/
#include<iostream>
#include<iomanip>
#include <string>
using namespace std;
class bookType{
    string Title;
    int author_num;
    string author[4];
    string publisher;
    string Isbn;
    int price;
    int copies;
   void set_title()
   {
      cout<<"Enter the title of the Book"<<endl;
     
     cin>>Title; 
   }

   void set_author()
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

   void set_publisher()
   {
        cout<<"Enter the name of publisher"<<endl;
        cin>>publisher;
   }

   void set_ISBN()
   {
     cout<<"Enter the ISBN of the book"<<endl;
      cin>>Isbn;
   }

   void set_price()
   {
      cout<<"ENter the price of book"<<endl;
      cin>>price;
   }

   void set_copies()
   {
      cout<<"Enter number of copies"<<endl;
      cin>>copies;
   }

   void Display_title()
   {
    cout<<"The title of the book is "<<Title<<endl;
   }

    void Display_author()
   {
     for(int i=0;i<author_num;i++)
     {
        cout<<"The  author name is "<<i+1<<" :   "<<author[i]<<endl;
      }
   }

    void Display_publisher()
    {
        cout<<"The Publisher name is   "<<publisher<<endl;
    }

    void Display_ISBN()
    {
        cout<<"The ISBN of book is : "<<Isbn<<endl;
    }

    void Display_price()
    {
        cout<<"The price of the book is "<<price<<" $  "<<endl;
    }

    void Display_copies()
    {
        cout<<"The Number of the copies of this book are "<<copies<<endl;
    }
   
    public:

    void set_Data()
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

    void Display_Data()
    {
        Display_title();
        Display_author();
        Display_publisher();
        Display_ISBN();
        Display_price();
        Display_copies();
    }
  
    void update_copies()
    {
        cout<<"Enter the updated copies of book"<<endl;
        int n;
        cin>>n;
        copies=n;
    }
    
    string ret_title()
    {
        return Title;
    }
     string ret_ISBN()
    {
        return Isbn;
    }
};

void Search_title(  bookType s[],int n)
{
    cout<<"Enter the Book title"<<endl;
    string T;
    cin>>T;
    
    for(int i=0;i<n;i++)
    {    
        string P= s[i].ret_title();
        if (T == P)
         {
            s[i].Display_Data();
         }
    }
}
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

int main()
{
    cout<<"Enter the number of books you want to Add "<<endl;
    int n;
    cin>>n;
    bookType B[n];
    while (1)
    {   cout<<"***************************************MENU****************************************"<<endl;
        cout<<"1.Enter Data of the Book"<<endl;
        cout<<"2.Search a book by title"<<endl;
        cout<<"3.Search a book by ISBN"<<endl;
        cout<<"4.Update number of copies"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Select Option"<<endl;
        int input;cin>>input;
        if(input==1)
        {
            for(int i;i<n;i++)
            {
                cout<<"Enter the Data for book "<<i+1<<endl;
                B[i].set_Data();
            }
        }
        else if(input==2)
        {
             Search_title(B,n);
        }
         else if(input==3)
        {
             Search_ISBN(B,n);
        }
         else if(input==4)
        {
            for(int i;i<n;i++)
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

