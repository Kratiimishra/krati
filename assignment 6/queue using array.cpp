#include<bits/stdc++.h>
#include<queue>
using namespace std;
class queue{
    int qfront;
    int rear;
    int *arr;
    int size;

queue(int size){
     int qfront =0;
     int rear=0;
     this->size=size;
     arr= int [size];
}
void push(int num){
    if (rear==size){
        cout<<"queue is full"<<endl;
    }
    else{
        arr[rear]=num;
        rear++;
    }
}
void pop(){
    if (qfront==rear){
        cout<<"queue is empty"<<endl;
    }
    else {
        int arr[qfront]=-1;
        front--;

    }
}
void display(){
    int s= arr[rear];
    while(!s.empty()){
        cout<<arr[s]<<endl;
        s--;
    }
}
};
int main(){
     queue q[4];
     q.push(10);
     q.push(20);
     q.push(30);
     q.push(40);
     q.pop();
     cout<<"hi"<<endl;
}
