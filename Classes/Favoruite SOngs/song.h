#include<iostream>
#include<string>
using namespace std;

class Favourite_songs{
int size;
string* arr;
public:
void set_size(int n);
void addSong(string song);
Favourite_songs(const Favourite_songs &S);
~Favourite_songs();
Favourite_songs();
void Delete_song(int);
void print_song();
void update_song(int);
};