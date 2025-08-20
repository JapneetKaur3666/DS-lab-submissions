#include <iostream>
using namespace std;
int main()
{   int Max=8;
    int n;
    cout<<"enter number of row/columns of square matrix ";
    cin>>n;
    cout<<"enter only diagonal elements of matrix in row major form ";
    int arr[Max];
    for(int i=0;i<n;i++){
        
            cin>>arr[i];
        }
    
    cout<<"elements of diagonal matrix are "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) cout<<arr[i]<<" ";
            else cout<<"0 ";
            
        }
        cout<<"\n";
    }
    return 0;
}