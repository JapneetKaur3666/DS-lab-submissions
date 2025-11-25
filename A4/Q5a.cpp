#include<iostream>
#include<queue>
using namespace std;
#define MAX 6
class stack{
    public:
    queue<int>q;
    queue<int>k;
    void push(int val){
        if(q.size()==MAX)cout<<"stack overflow"<<endl;
        else {
            k.push(val);
            while(!q.empty()){
                k.push(q.front());
                q.pop();
            }
           swap(k,q);
            cout<<val<<" pushed successfully"<<endl;
        }
     }
    void pop(){
        if(q.size()==0)cout<<"stack underflow"<<endl;
        else {
            cout<<q.front()<<" popped successfully"<<endl;
             q.pop();
        }
    }
    int peek(){if(q.size()==0) {cout<<"stack underflow"<<endl;
        return -1; 
         }
        else {
            return q.front();
         }
    }
  void display() {
    if (q.size() == 0) {
        cout << "Stack is empty" << endl;
        return;
    }
    else {
        k=q;
        cout << "Stack elements (top to bottom): ";
        while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout << endl;
     swap(k,q);
}
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