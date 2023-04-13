/*You are required to design a program for a zoo where there are different types and categories 
of animals. Use Inheritance and polymorphism to write a maintainable code. 
Animal is an abstract class with two protected data members name and color, destructor, and a 
pure virtual function display().
Deer is derived from Animal and has an additional boolean data member hasAntlers, indicating 
whether or not the deer has antlers. Deer overrides the display() function to print information 
about the deer's name, color, and whether or not it has antlers.
Zebra is derived from Animal and has an additional string data member stripe_pattern, 
indicating the pattern of stripes on the zebra's body. Zebra overrides the display() function to 
print information about the zebra's name, color, and stripe pattern.
In main, using polymorphism create child’s class objects and call their display() methods.*/



#include<iostream>
using namespace std;
class Animal
{   protected:
    string name;
    string color;
    public:
    Animal(string n="",string c="");
    virtual void display()=0;
    virtual ~Animal();
};
Animal::Animal(string n,string c)
{
    name=n;
    color=c;
}
void Animal::display()
{

}
Animal::~Animal()
{

}
class Deer:public Animal
{
    private:
    bool Antlers;
    public:
    Deer(string n="",string c="",bool a=0);
    void display();
};
Deer::Deer(string n,string c,bool a):Animal(n,c)
{
    Antlers=a;
}
void Deer::display()
{
    cout<<"Im a deer my name is "<<name<<endl;
    cout<<"Im a deer my color is "<<color<<endl;
    if(Antlers)
    {
        cout<<"Im a deer i have antlers."<<endl;
    }
    else
    {
        cout<<"Im a deer i don't have antlers."<<endl;
    }
}

class Zebra : public Animal
{
    string strip;
    public:
    Zebra(string n="",string c="",string s="");
    void display();
};
Zebra::Zebra(string n,string c,string s):Animal(n,c)
{
    strip=s;
}
void Zebra::display()
{
    cout<<"Im a zebra my name is "<<name<<endl;
    cout<<"Im a zebra my color is "<<color<<endl;
    cout<<"Im a zebra i have "<<strip<<" strip."<<endl;
}

int main()
{
    Animal *A;
    A=new Deer("Deer","White",true);
    A->display();
    delete A;
    A=new Zebra("Zebra","Black","striped");
    A->display();
    delete A;
    return 0;
}