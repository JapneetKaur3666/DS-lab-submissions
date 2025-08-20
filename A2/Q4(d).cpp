#include <iostream>
#include<string>
using namespace std;
void swap(char &a,char &b){
    char temp;
    temp=a;
    a=b;
    b=temp;
    }
int main()
{
    string str;
    cout<<"enter string: ";
    getline(cin,str);
    int l=str.size();
    for(int i=0;i<l;i++){
        int swapCount=0;
        for(int j=i+1;j<l;j++){
            if((str[i]+0)>(str[j]+0)){
                swap(str[i],str[j]);
                swapCount++;
            }
        }
        if (swapCount==0){
            cout<<"num of passes= "<<i<<endl;
        break;
        }
    }
    cout<<str;
    
    return 0;
}