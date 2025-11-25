#include <iostream>
using namespace std;
#define SIZE 5
class queue{
    int size,front,rear;
    int arr[SIZE];
    public:
    queue(){
        front=-1;
        rear=-1;
        size=0;
    }
    void enqueue(int data){
        if(rear==SIZE-1)cout<<"overflow condition"<<endl;
        else{
            if(front==-1&&rear==-1)front=rear=0;
            else{
                rear=rear+1;
            }
            arr[rear]=data;
            size++;
        }
    }
    void dequeue(){
        if(front==-1||front>rear)cout<<"underflow  condition"<<endl;
        else{
            front=front+1;
            size--;}
        }
    bool isempty(){
        if(front==-1||front>rear)return 1;
        else return 0;
    }
    bool isfull(){
        if(rear==SIZE-1)return 1;
        else return 0;
    }
    int peek(){
        return arr[front];
    }
    int queuesize(){
        return size;
    }
    void display(){
        if(isempty())cout<<"queue is empty"<<endl;
       else{
           cout<<"queue is: "<<endl;
           for(int i=front;i<=rear;i++){
               cout<<arr[i]<<" ";
               
           }
           cout<<"\n";

       }    
       }
    
};

int main()
{
   queue q;
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