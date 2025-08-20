#include<iostream>
using namespace std;
int main(){
    int n,s,arr[50];
    cout<<"enter row/column of symmetric matrix: ";
    cin>>n;
    s=n*(n+1)/2;
    cout<<"enter elements of matrix in row major form: ";
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    cout<<"symmetric matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(i==j){cout<<}
        cout<<endl;
    }
}