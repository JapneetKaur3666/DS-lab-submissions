//infix to postfix conversion
#include <iostream>
using namespace std;
#include<stack>
#include<string>
#include<algorithm>
int precedence(char ch){
    if(ch=='+' || ch=='-'){
        return 1;
    }
    else if(ch=='*' || ch=='/'){
        return 2;
    }
    else if(ch=='^'){
        return 3;
    }
}
bool isOperator(char ch){
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^'){
        return true;
    }
    return false;
}
int main(){
    string str;
    cout<<"Enter the infix expression: ";
    cin>>str;
    stack<char> s;
    str="("+str+")";
    for (char ch : str){
        if(ch=='('){
            s.push(ch);
        }
        else if(isalnum(ch)){
            cout<<ch;
        }
        else if(isOperator(ch)){
            while(!s.empty() && isOperator(s.top()) && precedence(s.top())>=precedence(ch)){
                cout<<s.top();
                s.pop();
            }
            s.push(ch);
        }
        else if(ch==')'){
            while(!s.empty() && s.top()!='('){
                cout<<s.top();
                s.pop();
            }
            s.pop();
        }
    }
    return 0;
}

