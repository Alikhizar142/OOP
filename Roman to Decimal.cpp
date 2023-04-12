/* Write a program that converts a number entered in Roman numerals to decimal. Your program should consist of a class, say, romanType. 
An object of type romanType should do the following:
a. Store the number as a Roman numeral.
b. Convert and store the number into decimal form.
c. Print the number as a Roman numeral or decimal number as requested
by the user.
The decimal values of the Roman numerals are:
M 	1000
D 	500
C 	100
L 	50
X 	10
V 	5
I 	1
d. Test your program using the following Roman numerals: MCXIV,
CCCLIX, MDCLXVI.
*/
#include<iostream>
#include<iomanip>
using namespace std;
class RomanType{
    string Roman;
    int decimal;
    int convert_to_Decimal(string Roman)
    {   
        int total=0;
        int n=Roman.size();
        for (int i=0;i<n;i++)
        {
            if(Roman[i]=='I')
            total=total+1;
            else if(Roman[i]=='V')
            total=total+5;
            else if(Roman[i]=='X')
            total=total+10;
            else if(Roman[i]=='L')
            total=total+50;
            else if(Roman[i]=='C')
            total=total+100;
            else if(Roman[i]=='D')
            total=total+500;
            else if(Roman[i]=='M')
            total=total+1000;
        }
        return total;
    }
    public:
    void get_Roman()
    {
        cout<<"Enter The Roman Number "<<endl;
        cin>>Roman;
    }
    void Display()
    {
        decimal=convert_to_Decimal(Roman);
        cout<<"Decimal Form of "<<Roman<<"=  "<<decimal<<endl;
    }

};
int main()
{
    RomanType R;
    while(1)
    {
    cout<<"Menu"<<endl;
    cout<<"1.Enter Data :"<<endl;
    cout<<"2.Display Decimal"<<endl;
    int input;
    cout<<"Enter Your Choice"<<endl;
    cin>>input;
    if(input==1)
    {
        R.get_Roman();
    }
    else if(input==2)
    {
        R.Display();
    }
    else if(input==3)
    {
        cout<<"Thank you"<<endl;
    break;
    }
    }


}