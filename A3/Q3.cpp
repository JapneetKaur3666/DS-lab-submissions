#include <iostream>
#include<stack>
using namespace std;
#include<string>
bool balanced(string& str){
    stack <char> s;
    for(char ch :str){
        if(ch=='('||ch=='{'||ch=='['){
            s.push(ch);
        }
        else if(ch==')'||ch=='}'||ch==']'){
            if(s.empty()) return false;
               else {
               char topChar=s.top();
                if ((ch==')'&&topChar!='(')||(ch=='}'&&topChar != '{')||(ch ==']'&&topChar!='['))
                return false;
                else s.pop();
    }
    }
}
 return s.empty();
}
int main(){
    string str;
    cout<<"enter string of paranthesis ";
    cin>>str;
   if(balanced(str))cout<<"YES";
   else cout<<"no";

    return 0;
}