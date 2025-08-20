#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;
    int arr[row][col];
    cout << "Enter the elements of the array:\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"sum of rows of array is: ";
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        cout<<"row "<<i+1<<": "<<sum<<endl;
    }
    cout<<"sum of columns of array is: ";
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
        }
        cout<<"column "<<i+1<<": "<<sum<<endl;
    }
    return 0;
}