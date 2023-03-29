/*Design a program in C++ that simulates a Journal (diary). The program should allow 
the user to enter data from the console, which will be saved in a text file representing 
the journal. If the program is opened again, the user should be able to see the 
previously saved journal entries.
The program should be menu-driven, with the following options:
Add an entry to the journal: When the user selects this option, they should be 
prompted to enter the text for the journal entry. The program should append this new 
entry to the end of the journal file, without deleting any previously saved entries.
Display the journal: When the user selects this option, the program should read the 
entire contents of the journal file and display them on the console*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
  fstream Journal;
     Journal.open("Journal.txt",ios::app);
     if(!Journal.is_open())
     {
       Journal.open("Journal.txt",ios::out);
       Journal.close();
     }
     Journal.close();
    while(1)
    {
        cout<<"1.Add an entry to the journal:"<<endl;
        cout<<"2.Display the journal: "<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Select your option:"<<endl;
        int option;
        cin>>option;
        if(option==1)
        {   
          Journal.open("Journal.txt",ios::app);
             if(Journal.is_open())
             {
               cout<<"Enter line"<<endl;
                  string input;
               cin.ignore();
                  getline(cin,input);
                
           Journal.write(input.data(),input.size());
              Journal<<endl;
             }
          Journal.close();
         }
    
        else if(option==2)
        {
        Journal.open("journal.txt",ios::in); 
          if (Journal.is_open())
          { 
          string t;
           while(getline(Journal, t))
           { 
            cout << t<<endl;
            }
           }
                       Journal.close();
        }
        else
        break;
        
    }
}