/*Write a class named Dice that contains a data member “value”. In the default 
constructor initialize the value with 0. The class should contain a method 
named roll(). This method generates a random no between 1 and 6 (for the 
dice), updates the value of dice and displays it. If the value generated is equal 
to 6 then a message “Chakkaaaa” should display. Also implement the getter 
and setter method for dice.
*/

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class Dice {

int value;

public:
void roll()
{
    value=rand()%6+1;
    cout<<"Side:"<<value<<endl;
    if (value==6)
    {
      cout<<"Chakaaaaaa"<<endl;
    }
    else
    cout<<"Better luck next time"<<endl;
}
};

int main()
{
   Dice a;
    while(1)
    {
        cout<<"Do you want to roll the dice? Y/N"<<endl;
        char input;
        cin>>input;
        if(input=='y'||input=='Y')
        {
           a.roll();
        }
        else 
        break;
    }
}