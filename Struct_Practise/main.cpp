#include <iostream>
#include<string>
#include<sstream>
using namespace std;
// simple struct
struct movies{
    int year;
    string name;
    };
movies mine,yours;

void printMovies(movies);

// Struct with the array
struct moviess{
    int year;
    string name;
}film[3];

void print(moviess);

// Struct with the pointers
struct mmovie{
    int year;
    string name;
};

int main()
{
    //Structure first (Simple)
  /*  string movie_year;
    mine.name = "Go goa Gone";
    mine.year = 2008;
    cout<<"Enter the name: ";
    getline(cin,yours.name);
    cout<<"Enter the year: ";
    getline(cin,movie_year);
    stringstream(movie_year) >> yours.year;
    cout<<"Yours is:\n";
    printMovies(yours);
    cout<<"mine is:\n";
    printMovies(mine); */


    //Structure with the Array

  /*  string movie;
    for(int i=0;i<3;++i){
        cout<<"Enter the title: ";
        getline(cin,film[i].name);
        cout<<"Enter the year: ";
        getline(cin,movie);
        stringstream(movie)>>film[i].year;
    }
    cout<<"You have enterd the movies:\n ";
    for(int n=0;n<3;++n){
        print(film[n]);
    } */


    //Structure with the Pointers
    string movie;
    mmovie mm;
    mmovie *m;
    m = &mm;
    cout<<"Enter the name: ";
    getline(cin,m->name);
    cout<<"Enter thr year: ";
    getline(cin,movie);
    stringstream(movie)>>m->year;
    cout<<"Enterd movie is: "<<m->name<<"\n";
    cout<<"Enter year is: "<<*m.year<<"\n";
    return 0;
}

void printMovies(movies movie){
    cout<<"Movie name is: ";
    cout<<movie.name<<endl;
    cout<<"Movie year is: ";
    cout<<movie.year<<endl;
}

void print(moviess movie){
    cout<<"The name is: "<<movie.name<<"\n";
    cout<<"The year is: "<<movie.year<<"\n";
}
