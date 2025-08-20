#include<iostream>
using namespace std;
int  main(){
    string s1,s2;
    cout << "Enter first string: ";
    getline(cin,s1);
    cout << "Enter second string: ";
    getline(cin,s2);
    s1=s1+s2;
    // //OR IF WE HAVE MULTIPLE INPUT LINES
    // string s1,s2,line1,line2;
    // cout << "Enter first string: ";
    // getline(cin,line1);
    // s1=line1;
    // while(line1.length()!=0){
    //     getline(cin,line1);
    //     s1=s1+line1+"\n";
    // }
    // cout << "Enter second string: ";
    // getline(cin,line2);
    // while(line2.length()!=0){
    //      s2=s2+line2+"\n";
    //     getline(cin,line2);
    // }
    // s1=s1+s2;
    cout << "Concatenated string: " << s1 << endl;
    cout<<"length of concenated string: "<<s1.length()<<endl;
    return 0;
}