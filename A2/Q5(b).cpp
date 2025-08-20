#include <iostream>
using namespace std;
int main()
{   
    int n,s;
    cout<<"enter number of row/columns of square matrix ";
    cin>>n;
    s=3*n-2;
    cout<<"enter the tri diagonal elements only in row major form ";
    int arr[50];
    for(int i=0;i<s;i++){
        
            cin>>arr[i];
        }
    int k=0;
    cout<<"elements of diagonal matrix are "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j||i-j==1||j-i==1) cout<<arr[k++]<<" ";
            else cout<<"0 ";
            
        }
        cout<<"\n";
    }
    return 0;
}