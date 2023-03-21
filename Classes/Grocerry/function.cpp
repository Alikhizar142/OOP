#include<iostream>
#include "item.h"
using namespace std;


ItemType ::   ItemType(int id,int p,int q,string n)

    {
        ID=id;
        price=p;
        quantity=q;
        name=n;
    }
    void ItemType:: get_ID()
     {
         cout<<"ENter product ID"<<endl;
         cin>>ID;
     }
      void ItemType:: get_Name()
     {
         cout<<"ENter product Name"<<endl;
         cin>>name;
     }
      void ItemType:: get_price()
     {
         cout<<"ENter product price"<<endl;
         cin>>price;
     }
        void ItemType:: get_quantity()
     {
         cout<<"Enter product quantity"<<endl;
         cin>>quantity;
     }
      void ItemType:: display_ID()
     {
         cout<<" "<<ID<<":";
     }
     void ItemType:: display_name()
     {
         cout<<" "<<name;
     }
      void ItemType:: display_price()
     {
         cout<<"  "<<price<<"RS";
     }
       void ItemType:: display_quantity()
     {
         cout<<" "<<quantity<<endl;
     }
     int ItemType:: Return_id()
     {
         return ID;
     }
    ItemType::  ~ ItemType(){
        
        cout<<"Destructor Destoyed"<<endl;
    }
    ItemType:: ItemType(){
        ID=0;
        price=0;
        name="";
        quantity=0;
    }

void ItemType::  get_Data()
{
    get_ID();
    get_Name();
    get_price();
    get_quantity();
}
void ItemType::  display_Data()
{
    display_ID();
    display_name();
    display_price();
    display_quantity();
}