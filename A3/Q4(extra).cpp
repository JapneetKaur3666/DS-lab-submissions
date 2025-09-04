//infix to prefix conversion
#include <iostream>
using namespace std;
#include<stack>
#include<string>
#include<algorithm>
int presedence(char ch){
    if(ch=='+'||ch=='-') return 1;
    else if(ch=='/'||ch=='*') return 2;
    else if(ch=='^') return 3;
    else return 0;
}
bool isoperator(char ch){
    if(ch=='+'||ch=='-'||ch=='^'||ch=='*'||ch=='/')return true;
    else return false;
}
void reverse(string &str,int l){
    for(int i = 0; i < l/2; i++){
        swap(str[i], str[l-1-i]);
    }
    for(int i = 0; i < l; i++) {
        if(str[i] == '(') str[i] = ')';
        else if(str[i] == ')') str[i] = '(';
    }
}
int main(){
    string str,postfix;
    stack <char> s;
    cout<<"enter infix expression: ";
    cin>>str;
    cout<<"\n";
    int l=str.length();
    reverse(str,l);
    str="("+str+")";
    for(char ch:str){
        if (ch=='('){
            s.push(ch);
        }
        else if(isalnum(ch))postfix+=ch;
        else if(isoperator(ch)){
            while(!s.empty()&&isoperator(s.top())&&presedence(ch)<=presedence(s.top())){
                postfix+=s.top();
                s.pop();
            }
            s.push(ch);
        }
        else if(ch==')'){
            while(!s.empty()&&s.top()!='('){
                postfix+=s.top();
                s.pop();
        }
        s.pop();
        }
    }
    l=postfix.length();
    reverse(postfix,l);
    cout<<"prefix is: ";
    cout<<postfix;
    return 0;
}