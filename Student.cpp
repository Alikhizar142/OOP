/*Write a program that reads students’ names followed by their
test scores. The program should output each student’s name
followed by the test scores and the relevant grade. It should
also find and print the highest test score and the name of the
students having the highest test score.

Student data should be stored in a struct variable of type
studentType, which has four components: studentFName
and studentLName of type string, testScore of type int
(testScore is between 0 and 100), and grade of type char.
Suppose that the class has 20 students. Use an array of 20
components of type studentType.

Your program must contain at least the following functions:
a. A function to read the students’ data into the array.
b. A function to assign the relevant grade to each student.
c. A function to find the highest test score.
d. A function to print the names of the students having the
highest test score.

Your program must output each student’s name in this form:
last name followed by a comma, followed by a space,
followed by the first name; the name must be left justified.
Moreover, other than declaring the variables and opening the
input and output files, the function main should only be a
collection of function calls.*/


#include <iostream>
#include <string>
using namespace std;
struct studentType
{
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};
void read_data(studentType S[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the First name,Last name,Testscore of Student "<<i+1<<endl;
        cin>>S[i].studentFName>>S[i].studentLName>>S[i].testScore;
    }
}
void assign_grade(studentType S[],int n)
{
    for (int i=0;i<n;i++)
    {
        if(S[i].testScore>=80)
        {
            S[i].grade='A';
        }
        else if(S[i].testScore>=70)
        {
            S[i].grade='B';
        }
        else if(S[i].testScore>=60)
        {
            S[i].grade='C';
        }
        else if(S[i].testScore>=50)
        {
           S[i].grade='D';
        }
        else
          S[i].grade='F';
    }
}
void Print_highest(studentType S[],int n,int max)
{   cout<<"Name of Student Have highest Marks"<<endl;
    for (int i=0;i<n;i++)
    {
      if(S[i].testScore==max)
      {
          cout<<left<<S[i].studentLName<<" ,"<<S[i].studentFName<<endl;
      }
    }
}
int Find_highest(studentType S[],int n)
{
    int max=S[0].testScore;
    for(int i=1;i<n;i++)
    {
        if(S[i].testScore>max)
        {
            max=S[i].testScore;
        }
    }
    return max;
}

int main() {
    // Write C++ code here
    int n=20;
studentType S[n];
read_data(S,n);
assign_grade(S,n);
int max= Find_highest(S,n);
Print_highest(S,n,max);


    return 0;
}
