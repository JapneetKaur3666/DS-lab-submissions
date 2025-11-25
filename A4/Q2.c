#include <iostream>
using namespace std;
#define SIZE 5
class circularqueue{
    int size,front,rear;
    int arr[SIZE];
    public:
    circularqueue(){
        front=-1;
        rear=-1;
        size=0;
    }
    void enqueue(int data){
        if(front==(rear+1)%SIZE)cout<<"overflow condition"<<endl;
        else{
            if(front==-1)front=0;
            rear=(rear+1)%SIZE;
            arr[rear]=data;
            size++;
        }
    }
    void dequeue(){
        if(front==-1)cout<<"underflow  condition"<<endl;
        else{
            if(front==rear){front=rear=-1;size=0;}
            else{
            front=(front+1)%SIZE;
            size--;
            }
            }
        }
    bool isempty(){
        if(front==-1)return 1;
        else return 0;
    }
  bool isfull(){
    return ((rear + 1) % SIZE) == front;
}
    int peek(){
        return arr[front];
    }
    int queuesize(){
        return size;
    }
    void display(){
        if (isempty())cout << "queue is empty\n";
        else {
        cout << "queue is: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        cout << "\n";
    }
    
};

int main()
{
   circularqueue q;
   q.display();
   q.enqueue(5);
   q.enqueue(3);
   q.enqueue(7);
   q.enqueue(9);
   q.enqueue(11);
   q.display();
   q.dequeue();
   cout<<q.peek();
   q.dequeue();
   q.dequeue();
   q.display();
    return 0;
}