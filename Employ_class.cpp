/*Create an employee class, basing it on Exercise 4 of previous practice questions.
 The member data should comprise an int for storing the employee number and a float for storing the employee’s compensation. 
 Member functions should allow the user to enter this data and display it. 
 Write a main() that allows the user to enter data for three employees and display it.
*/
#include<iostream>
#include<iomanip>
using namespace std;
class employee{
    int number;
    float compen;
    public:
    void getData(int n,float f)
    {
        number=n;
        compen=f;
    }
    void ShowData()
    {
        cout<<left<<"Employ Number is  "<<number<<"  Employ Compensation is "<<compen<<"$"<<endl;
    }
};
int main()
{
    employee E[3];
    for(int i=0;i<3;i++)
    {
        cout<<"Enter Data for Employ  "<<i+1<<endl;
        cout<<"Enter Employ Number"<<endl;
        int n;
        cin>>n;
        float f;
        cout<<"Enter Employ Compensation"<<endl;
        cin>>f;
        E[i].getData(n,f);
    }

for(int i=0;i<3;i++)
{
    cout<<"Data of Employee  "<<i+1<<endl;
    E[i].ShowData();
}
}