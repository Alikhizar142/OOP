/* Suppose you are designing a program to model a grocery store's inventory. 
Each item has a unique ID, a name, a price, and a quantity. 
Design a class for representing an item in the grocery store's inventory. The 
class should getter and setter methods where needed. It should also have a 
method for displaying the item's details. Additionally, implement a 
constructor that takes arguments for the item's ID, name, price, and quantity 
and sets them in the object. Make a default constructor too. And also a 
destructor (which prints the message object destroyed).
The program should first ask the user to enter the total no of items to store, 
then create an array of Items of that size in main. The main should be a 
menu-driven program with the following choices:
1). Display Items
2). Update item details
3). Search for items by ID
The above methods should be declared outside the class.
There must be functions for all the operations. Display_items() takes the 
array of objects and should display all the items with their details(ID, Name, 
Price, Quantity). 
2). UpdateItem() should take the item as an argument and further ask 
whether to update the price or the quantity. And do accordingly in the 
function. Think whether it should be pass by value or reference.
3). Search for items by ID should take array of items, size, and the ID_NO. 
If the item is found, display its details, else display “item not found”.*/

#include<iostream>
#include"item.h"
using namespace std;
void Display_items(ItemType S[],int n);
void Update_items(ItemType &S);
void Search_ID(ItemType S[],int ID,int n);
void Enter_data(ItemType S[],int n);
int main()
{
    cout<<"Enter number of items"<<endl;
     int n;
    cin>>n;
    int size=n;
    ItemType S[n];
     cout<<" Enter Data"<<endl;
      Enter_data(S,n);
    while (1)
    {
       
        cout<<"1). Display Items"<<endl;
        cout<<"2). Update item details"<<endl;
        cout<<"3). Search for items by ID"<<endl;
        int input;
        cin>>input;
        
         if(input==1)
        {
            Display_items(S,n);
        }
        else if(input==3)
        {
            cout<<"Enter Id of the Product "<<endl;
            int input;
            cin>>input;
            for(int i=0;i<n;i++)
            {
               if(S[i].Return_id()  == input)
               {
                   Update_items(S[i]);
               }
            }

        }
        else if(input==4)
        {
             cout<<"Enter Id of the Product "<<endl;
            int input;
            cin>>input;
            Search_ID(S,input,n);
        }
        else
        break;
        

    }
    



}
void Display_items(ItemType S[],int n)
{
   for(int i=0;i<n;i++)
   {
       S[i].display_Data();
   }
}
void Update_items(ItemType &S)
{
     cout<<"1.Update Price"<<endl;
     cout<<"2.Update quantity"<<endl;
     int a;
     cin>>a;
     if(a==1)
     {
         S.get_price();
     }
     else if(a==2)
     {
         S.get_quantity();
     }
}
void Search_ID(ItemType S[],int ID,int n)
{
    for(int i=0;i<n;i++)
    {
       if(S[i].Return_id()==ID)
       {
       	
           S[i].display_Data();
           break;
       }
       else
       cout<<"Item Not Found"<<endl;

    }
}
void Enter_data(ItemType S[],int n)
{
    for(int i=0;i<n;i++)
    {
        S[i].get_Data();
    }
}