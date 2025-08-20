#include<iostream>
using namespace std;
#include<string>
int main(){
    string s;
    getline(cin, s);
    int l=s.length();
    cout<<"reverse of the string is: ";
    for(int i=0; i<l/2; i++){
      swap(s[i],s[l-1-i]);
    }
    cout<<s;
    return 0;
}