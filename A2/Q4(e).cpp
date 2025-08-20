#include<iostream>
using namespace std;
int main(){
    charf ch;
    cout<<"Enter character in uppercase: ";
    cin>>ch;
    ch=ch+32;
    //OR ch=ch+'a'-'A';
    cout<<"Character in lowercase: "<<ch<<endl;
    return 0;
}