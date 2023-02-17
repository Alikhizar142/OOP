/* Write a program that uses a structure to store the student data (student name,
and an array containing the marks of 3 courses). Your program must have 3
functions.
Display_data(): Take the array of struct as an argument and displays the data
of all students.
Change_Marks(): Takes one student as an argument. Asks the course no and
updated marks from the user. And update the information accordingly.
Calc_Average_Marks(): Take one student variable as an argument and
calculates the average marks of that student.
*/
#include <iostream>
#include <iomanip>
using namespace std;
// Declaring structure
struct student {
  string name;
  int marks[3];
};

// Function to display data
void display_data( student s[3]) 
 {
   for(int i=0;i<3;i++)
   {
   cout<<"Name:"<<s[i].name<<endl;
   for(int j=0;j<3;j++)
   {
   cout<<"Marks: of subject "<<j+1 <<"=" <<s[i].marks[j]<<endl;
  }
  cout<<endl;
}
}

// Function to change marks
void change_marks( student s[3])
{
  int course_no;
  int marks;
  int student;
  cout<<"Enter Student NUmber"<<endl;
  cin>>student;
  cout<<"Enter course no: "<<endl;
  cin>>course_no;
 

  cout<<"Enter new marks: "<<endl;
  cin>>marks;

  
 s[student-1].marks[course_no-1] = marks;

  cout<<"Marks updated!"<<endl;
}

// Function to calculate average marks
float calc_average_marks(student s[3],int n)
{
  int sum = 0;
  for (int i = 0; i < 3; i++) 
  {
    sum += s[n].marks[i];
  }
  return (float)sum / 3;
}

int main()
{
  // Creating student array
  student s[3];
  int n=3;
  for(int i=0;i<n;i++)
  {
      cout<<"Enter student"<<"  "<<i+1<<"  name"<<endl;
      cin>>s[i].name;
      for(int j=0;j<n;j++)
      {
          cout<<"Enter marks of subject"<<"  "<<j+1<<endl;
      cin>>s[i].marks[j];
      }
  }
     
     while(1)
     {
     cout<<"Menu"<<endl;
     cout<<"1.Display Student data"<<endl;
     cout<<"2.Calculate Average Marks"<<endl;
     cout<<"3.Update MArks"<<endl;
     cout<<"4.Exit"<<endl;
     
     cout<<"Select Option"<<endl;
     int input;
     cin>>input;
     if(input==1)
     {
         display_data( s);
     }
     else if(input==2)
     {
      cout<<"Enter The student number you wat average"<<endl;
      int b;
      cin>>b;
     float a=calc_average_marks(s,b-1);
     cout<<"The marks off  "<<b+1<<"="<<a<<endl;
     }
      else if(input==3)
      {
        change_marks( s);
      }
      else 
      break;
  }
  }

 
