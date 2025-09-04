#include <iostream>
using namespace std;
# define MAX 10
class stack{
    int arr[MAX];
    int top=-1;
    public:
    void push(int val){
       if(!isfull()){
          top++;
          arr[top]=val;
    }
       else cout<<"Stack is full"<<endl;
    }
    void pop(void){
        if(!isempty()){
            top--;
        }
        else cout<<"Stack is empty"<<endl;
    }
    void peek(){
        cout<<arr[top]<<endl;
    }
    bool isempty(){
     if(top==-1) return true;
     else return false;
    }
     bool isfull(){
     if(top==MAX-1) return true;
     else return false;
    }
    
    void display(stack S){
            for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
            }
           cout<<"\n";
    }
    
};

int main()
{
   int choice=0,val;
   stack s;
   while(choice!=7){
   cout<<"Enter choice: 1=push\n2=pop\n3=empty\n4=display\n5=peek \n 6 to exit ";
   cin>>choice;
    switch (choice){
        case 1:
        cout<<"enter value to be pushed ";
        cin>>val;
        s.push(val);
        break;
        case 2:
        s.pop();
        break;
        case 3:
        cout<<s.isempty()<<endl;
        break;
        case 4:
        s.display(s);
        break;
        case 5:
        s.peek();
        break;
        case 6:
        cout<<s.isfull()<<endl;
        default:
        cout<<"invalid choice ";
        break;
    }
   }
    return 0;
}