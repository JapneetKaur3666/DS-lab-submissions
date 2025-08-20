#include<iostream>
using namespace std;  
void display(int arr[],int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int n,arr[100],start,end;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    start=0;
    end=n-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "Reversed array: ";
    display(arr,n);
    return 0;
}