#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class ItemType{
    int ID;
    int price;
    int quantity;
    string name;
    ItemType(int id,int p,int q,string n);

     void get_ID();
     void get_Name();
     
   
     void display_ID();
   
     void display_name();
  
     void display_price();
    
     void display_quantity();
  
  
   
   
public:
     void get_Data();
     void display_Data();
     void get_price();
     void get_quantity();
     int Return_id();
       ItemType();
         ~ ItemType();
};