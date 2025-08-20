#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void sort_array(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void distinct_elements(int arr[],int n){
    int k=arr[0];
      int  count=1;
        for(int i=1;i<n;i++){
            if(k!=arr[i]){
                count++;
                k=arr[i];
            
        }
}
cout<<"number of distinct elements in array are "<<count;
}
int main(){
    int arr[100],n,count;
    cout<<"enter no of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort_array(arr,n);
    cout<<"sorted array is "<<endl;
    display(arr,n);
    cout<<"\n";
    if(n==1)cout<<"number of distinct elements in array are 1";
    else distinct_elements(arr,n);

return 0;
}