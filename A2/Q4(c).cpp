#include<iostream>
using namespace std;
#include<string>
int main(){
    string s;
    cout<<"enter the string: ";
    getline(cin, s);
    int l=s.length();
    for(int i=0; i<l; i++){
      if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
          for(int j=i;j<l;j++){
              s[j]=s[j+1];
              }
              l--;
              i=i-1;
    }
    }
    cout<<s;
    return 0;
}