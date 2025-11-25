#include <iostream>
using namespace std;
int* input(int n){
    int* arr=new int[n]; //arr is pointer to 1st element of dynamic array 
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return arr;
}
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void bubbleSort(int* arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Sorted array through bubble sort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void selectionSort(int* arr,int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
    cout<<"\nSorted array through selection sort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void insertionSort(int* arr,int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    cout<<"\nSorted array through insertion sort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int partition(int* arr,int st,int end){
    int pivot=arr[end];
    int i=st-1;
    for(int j=st;j<end;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[end]);
    return i+1;
}
void QUICKSORT(int* arr,int st,int end){
    if(st<end){
    int pivInd=partition(arr,st,end);
    QUICKSORT(arr,st,pivInd-1);
    QUICKSORT(arr,pivInd+1,end);
    }
}
void quicksort(int* arr,int n){
   int st=0,end=n-1;
   QUICKSORT(arr,st,end);
    cout<<"\nSorted array through quick sort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void MERGESORT(int* arr,int st,int end){
    if(st<end){
        int mid=st+(end-st)/2;
        MERGESORT(arr,st,mid);
        MERGESORT(arr,mid+1,end);
        //merge
        int n1=mid-st+1;
        int n2=end-mid;
        int* left=new int[n1];
        int* right=new int[n2];
        for(int i=0;i<n1;i++){
            left[i]=arr[st+i];
        }
        for(int j=0;j<n2;j++){
            right[j]=arr[mid+1+j];
        }
        int i=0,j=0,k=st;
        while(i<n1 && j<n2){
            if(left[i]<=right[j]){
                arr[k]=left[i];
                i++;
            }else{
                arr[k]=right[j];
                j++;
            }
            k++;
        }
        while(i<n1){
            arr[k]=left[i];
            i++;
            k++;
        }
        while(j<n2){
            arr[k]=right[j];
            j++;
            k++;
        }
        delete[] left;
        delete[] right;
    }
}
void mergesort(int*arr,int n){
    int st=0,end=n-1;
   MERGESORT(arr,st,end);
    cout<<"\nSorted array through merge sort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int* array=input(n);
    bubbleSort(array,n);
    delete[] array;
    int* array=input(n);
    selectionSort(array,n);
    delete[] array;
    int* array=input(n);
    insertionSort(array,n);
    delete[] array;
    int* array=input(n);
    quicksort(array,n); 
    delete[] array; // Free the allocated memory
    int* array=input(n);
    mergesort(array,n); 
    delete[] array; 
    return 0;
}