#include<iostream>
using namespace std;
int main(){
    int n,num,arr[100];
    cout << "Enter the number of elements: ";
    cin >> n; 
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Enter the number to search: ";
    cin >> num;
    int s=0, e=n-1, mid;
    for(int i=0;i<n;i++){
        mid=(s+e)/2;
        if(arr[mid]==num){
            cout << "Element found at index: " << mid << endl;
            return 0;
        }
        else if(arr[mid]<num){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return 0;
}