#include<iostream>
#include<iomanip>
using namespace std;
class memberType{
    string Name;
    int ID;
    int NOB;
    int amount;
    void set_Name();
    void set_ID();
    void set_NOB();
    void set_Amount();
    
    void Display_Name();
    void Display_ID();
    void Display_NOB();
    void Display_amount();
    void Modify_name();
    void Modify_NOB();
    void Modify_amount();
 public:
  void Update_NOB( );
 int get_id();
   int  get_NOB();
 int get_amount();
 void Set_Data();
 void Display_Data();
 void Update_Data(memberType M[],int n);
// memberType(string n="0",int id=0,int nob=0,int amt=0);
};