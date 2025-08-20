#include<iostream>
using namespace std;  
const int MAX=10;

void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void display(int arr[][MAX],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int row, col;
    cout << "Enter number of rows: ";   
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;
    int arr[MAX][MAX];
   
    cout << "Enter elements of the array:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }
    cout<<"entered array is "<<endl;
    display(arr,row,col);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(j>i){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
    cout<<"transpose is "<<endl;
    display(arr,col,row);
    return 0;
}