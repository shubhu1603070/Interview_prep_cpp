#include <iostream>

using namespace std;

class abc{
    private:
    int age;
    string name;
    public:
    abc(int age,string name){
        this->age =age;
        this->name = name;
    }
    void print(){
        cout<<"Your age is: "<<this->age<<"\n";
        cout<<"Your name is: "<<this->name<<"\n";
    }
};
int main()
{
    string name;
    string agee;
    int age = 0;
    cout<<"Enter Name: ";
    getline(cin,name);
    cout<<"Age: ";
    cin>>age;
    abc *ab = new abc(age,name);
    ab->print();
    return 0;
}
