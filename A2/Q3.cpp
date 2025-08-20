#include<iostream>
using namespace std;
int main(){
    int n,arr[100];
    cout << "Enter the number of elements: ";
    cin >> n;   
    cout << "Enter the elements in sorted form: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int s=0,e=n-1;
    int mid;
    while(s<e){
        mid=(s+e)/2;
        if(arr[mid]-mid==1){
            s=mid+1;
        }
        else e=mid-1;
    }
    cout<<"missing number is "<<mid+1;
    // for(int i=0;i<n-1;i++){
    //     if(arr[i+1]!=arr[i]+1){
    //         cout << "The missing element is: " << arr[i]+1 << endl;
           
            
    //     }
    // }
    return 0;
}