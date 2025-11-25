#include<iostream>
#include<queue>
using namespace std;
#define MAX 6
class stack{
    public:
    int size=0;
    queue<int>q;
    void push(int val){
        if(size==MAX)cout<<"stack overflow"<<endl;
        else {
            q.push(val);
            size++;int i=1;
            while(i<=size-1){
                q.push(q.front());
                q.pop();
                i++;
            }
            cout<<val<<" pushed successfully"<<endl;
        }
     }
    void pop(){
        if(size==0)cout<<"stack underflow"<<endl;
        else {
            cout<<q.front()<<" popped successfully"<<endl;
            q.pop();
            size--;
        }
    }
    int peek(){if(size==0) {cout<<"stack underflow"<<endl;
        return -1; 
         }
        else {
            return q.front();
         }
    }
  void display() {
    if (size == 0) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Stack elements (top to bottom): ";
    int n = size;  
    for(int i = 0; i<n; i++) {
        int val = q.front();
        cout << val << " ";
        q.pop();
        q.push(val);   // put back to maintain order
    }
    cout << endl;
}

}; 
int main(){
      stack s;
      s.push(2);
      s.push(4);
      s.push(6);
      s.display();
      cout<<s.peek()<<" is peek elemnet "<<endl;
      s.pop();
      s.pop();
      cout<<s.peek()<<" is peek elemnet "<<endl;
      s.display();
      s.pop();
      s.pop();
      return 0;
      
}