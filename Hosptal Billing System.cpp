/*
In this exercise, you will design various classes and write a program to computerize the
billing system of a hospital.
a. Design the class doctorType, inherited from the class personType given below, with an
additional data member to store a doctor’s speciality. Add appropriate constructors and member
functions to initialize, access, and manipulate the data members.
b. Design the class billType with data members to store a patient’s ID and a patient’s hospital
charges, such as pharmacy charges for medicine, doctor’s fee, and room charges. Add
appropriate constructors and member functions to initialize and access and manipulate the data
members.
c. Design the class patientType, inherited from the class personType, with additional data
members to store a patient’s ID, age, date of birth, attending physician’s name, the date when
the patient was admitted in the hospital, and the date when the patient was discharged from the
hospital. (Use the class dateType to store the date of birth, admit date, discharge date, and
the class doctorType to store the attending physician’s name). Add appropriate constructors and
member functions to initialize, access, and manipulate the data members.
d. Write a program to test your classes.*/


#include<iostream>
#include<string>
using namespace std;
class personType
{
public:
void print() const;

void setName(string first, string last);

string getFirstName() const;

string getLastName() const;

personType(string first = "", string last = "");
private:
string firstName; 
string lastName; 
};
personType::personType(string first , string last )
{
    firstName=first;
    lastName=last;
}
void personType::setName(string first, string last)
{
    firstName=first;
    lastName=last;
}
string personType::getLastName() const
{
    return lastName;
}
string personType::getFirstName() const
{
    return firstName;
}
void personType::print() const
{
    cout<<"Name: "<<firstName<<" "<<lastName<<endl;
}
class dateType
{
public:
void setDate(int month, int day, int year);
void set_Date();
int getDay() const;
int getMonth() const;
int getYear() const;
void printDate() const;
dateType(int month = 1, int day = 1, int year = 1900);
private:
int dMonth; 
int dDay; 
int dYear; 
};
void dateType::set_Date()
{
    cout<<"Enter Date in (dd/mm/yy) formate:"<<endl;
    int d,m,y;
    cin>>d>>m>>y;
    setDate(m,d,y);
}
dateType::dateType(int month , int day , int year)
{
    setDate(month,day,year);
}
void dateType::setDate(int month, int day, int year)
{
  if(month<=12)
    {
        dMonth=month;
    }
    else
    dMonth=1;
    if(day<31)
    {
        dDay=day;
    }
    else
    dDay=1;
   dYear=year;
}
void dateType::printDate() const
{
   cout<<dDay<<"\\"<<dMonth<<"\\"<<dYear<<endl;
}

class  DoctorType : public personType {
  string specialty;
  public:
  void set_data();
  void print();
  void set_specialty(string n);
  DoctorType(string f="",string l="",string s="");
};
void DoctorType::set_data()
{
    cout<<"Enter Doctor  first name"<<endl;
     string f,l,s;
    cin>>f;
    cout<<"Enter Doctor Last name"<<endl;
    cin>>l;
    setName(f,l);
    cout<<"Enter Specialty"<<endl;
    cin>>s;
    set_specialty(s);
}
void DoctorType::set_specialty(string n)
{
    specialty=n;
}
DoctorType::DoctorType(string f,string l,string s):personType(f,l)
{
    specialty=s;
}
void DoctorType::print()
{
   personType::print();
   cout<<"Specialty: "<<specialty<<endl;
}
class BillType{
    int id;
    int PC,DC,RC;
    int HC;
    void set_PC(int p);
    void set_DC(int d);
    void set_RC(int r);
    void set_HC(int a);
    void callbill(int a ,int b,int c);
    public:
    void set_ID(int ID);
    void set_bill();
    BillType(int ID=0,int pc=0,int dc=0,int rc=0,int hc=0);
    int get_id();
    void printBill();
    
};
BillType::BillType(int ID,int pc,int dc,int rc,int hc)
{
    id=ID;
    PC=pc;
    DC=dc;
    RC=rc;
    HC=hc;
}
void BillType::set_ID(int ID)
{
    id=ID;
}
void BillType::set_DC(int d)
{
    DC=d;
}
void BillType::set_RC(int r)
{
    RC=r;
}
void BillType::set_PC(int p)
{
    PC=p;
}
void BillType::set_bill()
{
    cout<<"Enter Doctor Fees"<<endl;
    int b;
    cin>>b;
    set_DC(b);
    cout<<"Enter Pharmacy Charges "<<endl;
    int p;
    cin>>p;
    set_PC(p);
    cout<<"Enter Room charges"<<endl;
    int r;
    cin>>r;
    set_RC(r);
    callbill(b,r,p);
 
}
int BillType::get_id()
{
    return id;
}
void BillType::printBill()
{
    cout<<"..............................Hospital Charges ....................."<<endl;
    cout<<"Doctor Fees:"<<DC<<"RS"<<endl;
    cout<<"Pharmacy charges:"<<PC<<"RS"<<endl;
    cout<<"Room charges:"<<RC<<"RS"<<endl;
    cout<<"Total:"<<HC<<"RS"<<endl;

}
void BillType::set_HC(int a)
{
    HC=a;
}
void BillType::callbill(int a,int b,int c)
{
   int total=a+b+c;
   set_HC(total);
}
class PatientType : public personType {
int age;
dateType DOB;
DoctorType Phy;
dateType DOA,DOD;
BillType Bill;
void set_age(int Age);
public:
void set_data();

PatientType(string PF="",string PL="",int age=0,string DF="",string DL="",string DS="",int BD=0,int BM=0,int BY=0,int AD=0,int AM=0,int AY=0,int DD=0,int DM=0,int DY=0);
void print() ;

};
PatientType::PatientType(string PF,string PL,int Age,string DF,string DL,string DS,int BD,int BM,int BY,int AD,int AM,int AY,int DD,int DM,int DY)
:personType(PF,PL),Phy(DF,DL,DS),DOB(BM,BD,BY),DOA(AM,AD,AY),DOD(DM,DD,DY)
{
    set_age(Age);
}
void PatientType::set_age(int Age)
{
    age=Age;
}
void PatientType::set_data()
{   Phy.set_data();
     string f,l;
     cout<<"Enter Patient First name:"<<endl;
     cin>>f;
     cout <<"Enter Patient Last name:"<<endl;
     cin>>l;
     setName(f,l);
     cout<<"Enter Patient age"<<endl;
     int a;
     cin>>a;
     set_age(a);
     cout<<"Enter Patient ID"<<endl;
     int i;
     cin>>i;
     Bill.set_ID(i);
     cout<<"Enter Patient Date of Birth:"<<endl;
     
     DOB.set_Date();
     cout<<"Enter Patient Admit Date"<<endl;
     cout<<endl;
     DOA.set_Date();
     cout<<"Enter Patient Discharge Date:"<<endl;
     cout<<endl;
     DOD.set_Date();
     Bill.set_bill();
}
void PatientType::print() 
{
     cout<<"..................Patient Details:.........................."<<endl;
     cout<<"Patient ID:"<<Bill.get_id()<<endl;
     personType::print();
     cout<<"Age:"<<age<<endl;
     cout<<"Date of Birth:  ";
     DOB.printDate();
     cout<<"Date of Admit:  ";
     DOA.printDate();
     cout<<"Date of Discharge:  ";
     DOD.printDate();
     cout<<"...........................Physician detail\'s...................."<<endl;
     Phy.print();
     Bill.printBill();
     
}
int main()
{
    PatientType p1;
    int opt;
    while (1)
    {
        cout<<"1.Enter Data"<<endl;
        cout<<"2.Print Bill"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Select Your Option"<<endl;
        cin>>opt;
        if(opt==1)
        {
            p1.set_data();
        }
        else if(opt==2)
        {
            p1.print();
        }
        else 
        break;
    }
    
}