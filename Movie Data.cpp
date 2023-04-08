/*Write a program that uses a structure named MovieData to store the following
information about a movie: Title, Director, Year Released. In main, create two
variables of the structure. The program should contain a function named
createMovieData() that will store values in the struct members from the user
and then returns the structure back to main. The program should contain
another function named displayMovieData() that takes the structure as an
argument and displays the information about the movie in a clearly formatted
manner.*/
// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct MovieData
{
    string Title;
    string Director;
    int year;
};
MovieData creatMovieData()
{   MovieData S;
    cout<<"Enter Movie Name:"<<endl;
    cin>>S.Title;
    cout<<"Enter Director  Name:"<<endl;
    cin>>S.Director;
    cout<<"Enter Released Year:"<<endl;
    cin>>S.year;
    return S;
    
}
void DisplayMovieData(MovieData A)
{
    cout<<left<<setw(50)<<setfill('.')<<"Movie name is"<<A.Title<<endl;
    cout<<left<<setw(50)<<setfill('.')<<"Director  name is"<<A.Director<<endl;
    cout<<left<<setw(50)<<setfill('.')<<"Released Date is"<<A.year<<endl;
}

int main() {
    // Write C++ code here
MovieData A;
A=creatMovieData();
DisplayMovieData(A);

    return 0;
}
