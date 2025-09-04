#include <iostream>
using namespace std;
#include<string>
#include<stack>
void reverse(string& str){
    stack <char> s;
    for(char ch:str){
        s.push(ch);
    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
}
int main(){
    string str;
    cout<<"Enter string to be reversed: ";
    cin>>str;
    reverse(str);
    return 0;
}