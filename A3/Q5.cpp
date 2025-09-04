#include<bits/stdc++.h>
using namespace std;
bool isoperand(char ch){
    if(isalnum(ch)) return true;
    else return false;
}
bool isoperator(char ch){
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^') return true;
    else return false;
}
int operation(int b,int a,char ch){
    switch(ch){
        case '+':return b+a;
        case '-':return b-a;
        case '*':return b*a;
        case '/':return b/a;
        default:return 0;
        
    }
}
int main()
{   string str;
    int result;
    cout<<"enter postfix expression: ";
    cin>>str;
    stack <int> s;
   for(char ch:str){
      if(isoperand(ch)){
         int num=ch-'0';
          s.push(num);}
   
      else if(isoperator(ch)&&s.size()>=2){
       int a=s.top();
       s.pop();
       int b=s.top();
       s.pop();
       result=operation(b,a,ch);
       s.push(result);
   }
   }
    if(!s.empty()){
   cout<<"result is: "<<s.top();
    }
    else cout<<"invalid expression";
    return 0;
}