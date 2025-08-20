#include <iostream>
using namespace std;
int main()
{   
    int n,s;
    cout<<"enter number of row/columns of square matrix ";
    cin>>n;
    s=(n*(n+1))/2;
    cout<<"enter lower triangular elements only in row major form ";
    int arr[50];
    for(int i=0;i<s;i++){
        
            cin>>arr[i];
        }
    int k=0;
    cout<<"elements of matrix are "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j) cout<<arr[k++]<<" ";
            else cout<<"0 ";
            
        }
        cout<<"\n";
    }
    return 0;
}