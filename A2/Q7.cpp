#include <iostream>
using namespace std;
int main()
{
    int n,arr[10],count=0;
    cout<<"Enter number of elements in array ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           if(arr[i]>arr[j]) count++;
        }
    }
cout<<"inverse elements pair = "<<count;

    return 0;
}