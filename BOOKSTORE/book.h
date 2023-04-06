#include<iostream>
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
   void set_title();
   void set_author();
   void set_publisher();
   void set_ISBN();
   void set_price();
   void set_copies();
   void Display_title();
    void Display_author();
    void Display_publisher();
    void Display_ISBN();
    void Display_price();
    void Display_copies();
    public:
    void set_Data();
    void Display_Data();
    void update_copies();
    string ret_title();
    string ret_ISBN();
   
};