#include <iostream>

using namespace std;
void removeX(char arr[]){
    if(arr[0]=='x'){
        return;
    }
    if(arr[0]!='x'){
        removeX(arr+1);
    }else{
        for(int i=1;i<arr[i]!='\0';++i){

        }
    }
}
int length(char arr[]){
    if(arr[0]=='\0')
        return 0;
    int small = length(arr+1);
    return small+1;
}
int main()
{
    char arr[] = {'a','b','c','d'};
    cout<<length(arr);
    cout<<endl<<"hello worldPP";
}
