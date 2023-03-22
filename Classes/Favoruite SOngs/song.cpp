#include<iostream>
#include<string>
#include"song.h"
using namespace std;

void Favourite_songs :: set_size(int n)
{
    size=n;
}
void Favourite_songs :: addSong(string song)
{ string *temp=new string[size+1];
    for(int i=0;i<size;i++)
    {
    	temp[i]=arr[i];
	}
	temp[size]=song;
	delete [] arr;
	arr=temp;
	size++;
}
Favourite_songs :: Favourite_songs(const Favourite_songs &S)
{
     int size1=S.size;
      arr = new string [size1];
      for(int i=0;i<size1;i++)
      {
        arr[i]=S.arr[i];
      }
}
Favourite_songs :: ~Favourite_songs()
{
    delete [] arr;
    // cout<<"destroyed"<<endl;

}
Favourite_songs :: Favourite_songs()
{
   size=0;
   arr=new string[size];

}
void Favourite_songs :: print_song()
{

    for (int  i = 0; i < size ; i++)
    {
        cout<<i+1<<".   "<<arr[i]<<endl;
    }
    
}
void Favourite_songs ::Delete_song(int a)
{
    string *p= new string[size-1];
    int j=0;
      for (int  i = 0; i < size; i++)
       {
        if(a!=i && j<size)
        {
            p[j]=arr[i];
            j++;
        }
       }
    delete []arr;
    arr=p;
    size--;
}
void Favourite_songs :: update_song(int a)
{
    for(int i=0;i<size;i++)
    {
        if(i==a)
        {
            cout<<"Update Song"<<endl;
            string s;
            cin>>s;
            arr[i]=s;
        }
    }
}
