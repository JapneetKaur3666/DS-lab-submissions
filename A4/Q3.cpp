#include<iostream>
#include<queue>
using namespace std;
queue<int> reqqueue(queue<int>&q){
    queue<int>k;
    queue<int>m;
    int n=q.size();
    int i=1;
    while(i<=n/2){
        k.push(q.front());
        q.pop();
        i++;
    }
    i=1;
    while(i<=n){
        if(i%2==1){
            m.push(k.front());
            k.pop();
    }
    else{
            m.push(q.front());
            q.pop();
    }
  i++;
    }
    return m;
    
}
void display(queue<int>q){
    cout<<"quesue is:"<<endl;
    int n=q.size();
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        q.pop();
    }
}
int main(){
    queue<int>q;
    int n;
    cout<<"enter size of queue: "<<endl;
    cin>>n;
    cout<<"enter elements of queue: "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    display(reqqueue(q));
    return 0;
}