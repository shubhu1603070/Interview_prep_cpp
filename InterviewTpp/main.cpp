#include <iostream>
#include<string>
#include<sstream>
#include<bits/stdc++.h>
using namespace std;
/*
    //Map as well as the stringstream...
    void print(string str){
    stringstream s(str);
    string word;
    map<string,int> ma;
    while(s>>word)
        ma[word]++;
    map<string,int>::iterator m;
        for(m=ma.begin();m!=ma.end();++m){
        cout<<m->first<<" ->"<<m->second<<"\n";
    }

} */



//Pass by value the change in the value will not affect the orignal value...
/* int pass_by_value(int value){
    return value*value;
} */

//Pass by refrence the change in the value will also affect the orignal value...
/*void pass_by_refrence( int &a, int &b){
    a*=3;
    b*=3;
}*/

// Inline function...
/* inline int value(int a,int b){
    return a+b;
} */

// 1. Template
/*template <class abc>
abc sum(abc a,abc b){
    return a+b;
}*/
// 2. Template
/*template <class abc,class cba>
bool is_Equal(abc a,cba b){
    if(a==b)
        return true;
    return false;
}
*/
// 3. Template
/*template <class bb,int abc>
float sum(bb a){
    return a+abc;
}*/

// Using namespace as an template
/* namespace foo{
void fun(){
    cout<<"Shubham";
}
}
namespace bar{
    int PI = 3.1416;
    void fun(){
    cout<<"Nupur";
    }
} */

//Pointers
    //Void pointer...
    void increase(void *point,int psize){
        if(psize==sizeof(char)){
            char *po = (char*)point;
            ++(*po);
        }
        else if(psize==sizeof(int)){
            int *po = (int*)point;
            ++(*po);
        }
    }

    //Null Pointer...
    int addition(int a,int b){
        return a+b;
    }
    int subtraction(int a,int b){
        return a-b;
    }
    int operation(int a,int b,int (*functionToCall)(int,int)){
        return (*functionToCall)(a,b);
    }
int main()
{

    //For the stream <sstream>
    /*int price = 0;
    float quantity=0.0f;
    string str;
    cout<<"Enter P :";
    getline(cin,str);
    stringstream(str)>>price;
    cout<<"Enter qu :";
    getline(cin,str);
    stringstream(str)>>quantity;
    cout<<"result is: "<<price*quantity;*/

 /*   string str = "Geeks For Geeks Ide";
    print(str);
    //Pass by value
    cout<<pass_by_value(8)<<endl;
    int a=2,b=3;
    //pass by refrence
    pass_by_refrence(a,b);
    cout<<a<<" "<<b;
    */
//    cout<<value(2,3);
//  1.Template function...
  /*  int value = sum<int>(3,4);
    cout<<value;
    */
// 2.Template function...
   // cout<<is_Equal<int,3.0>(10);

// 3. Template function...
    //cout<<sum<int,3>(10);

// Namespace Program
  /*  foo::fun();
    cout<<"\n";
    bar::fun();
    cout<<"\n"<<bar::PI;
    */
  /*  int a ;
    int b ;
    int *pointer = &a;
    int *pointer1 = &b; // copying the address of the a to the pointer variable
    *pointer =  90; // changing the value of the a bcuz the address is now pointing to the 90...: )
    cout<<a<<endl;    //Now the value is change bcuz the address is now pointing to the otherone
    *pointer1 = *pointer;
    pointer = pointer1;
    cout<<&pointer1<<" e "<<endl;
    cout<<&pointer; */

    //Null pointer
    /*int value = 4;
    char c = 'x';
    cout<<c<<endl;
    cout<<value<<endl;
    increase(&c,sizeof(c));
    cout<<c<<endl;
    increase(&value,sizeof(value));
    cout<<value<<endl;
    int arr[] = {1,2};
    int *po = arr;
    cout<<arr[1]<<" is: "<<po[2]<<endl;*/


    //Pointer to the function...

    int m,n;

    int (*minus)(int,int) = addition;
    m = operation(2,2,minus);
    n = operation(9,m,subtraction);
    cout<<n<<endl;
    cout<<m;



    return 0;
}
