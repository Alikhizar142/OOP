/*Write a program in C++ where there is a class named Favourite_Songs, it contains 
the size of the array (string array) and a pointer to dynamic array of strings 
containing the song names. The class should have a methods for adding a new song
addSong(string song). This method will create another array of size+1, copy the 
values from the previous array into that array along with the new song), deleteing a 
song (now think of the logic to delete a song and update the array), updating the 
song, printing the songs. Make use of the new and delete keyword where required. 
The program must have a copy constructor that creates a deep copy of the object 
passed. Copy constructor should be called when the user selects Create backup of 
the songs.The class should also have the destructor. Release all the memory where 
needed using the delete keyword.
Note: You must do the tasks in separate header, and cpp files*/


#include<iostream>
#include<string>
#include"song.h"
using namespace std;

int main()
{
    Favourite_songs f;
    int a;
    while (1)  
    {   cout<<"***************************Menu*******************************"<<endl;
        cout<<"1.Add song"<<endl;
        cout<<"2.Delete song"<<endl;
        cout<<"3.Update song"<<endl;
        cout<<"4.print all songs"<<endl;
        cout<<"5.Create backup"<<endl;
        cout<<"6.Exit"<<endl;
        
        cin>>a;
        if(a==1)
        {
            cout<<"Enter Song Name"<<endl;
            string p;
            cin>>p;
            f.addSong(p);
        }
        else if(a==2)
        {
            cout<<"Enter Index you want to delete"<<endl;
            int b;
            cin>>b;
            f.Delete_song(b);
        }
        else if(a==3)
        {
            cout<<"Enter Index you want to update"<<endl;
            int b;
            cin>>b;
            f.update_song(b);
        }
         else if(a==4)
        {
           f.print_song();
        }
         else if(a==5)
        {
           Favourite_songs a(f);
           f.print_song();
        }
         else
         {
         f.~Favourite_songs();
         }

    }
    
    return 0;
}