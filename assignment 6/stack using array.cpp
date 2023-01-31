#include<bits/stdc++.h>
using namespace std;
class stackk{
    public:
      int top;
      int *arr;
      int size;
      stackk(int size){
        top=-1;
        this->size=size;
        arr=new int(size);
      }    
     
    void push(int num){
        if (top==size-1){
            cout<<"stack overflow";
        }
        else{
            top++;
            arr[top]=num;
        }
    }
    void pop(){
        arr[top]=-1;
        top--;

    }
    void print(){
        int s=top;
        while(s!=-1){
            cout<<arr[s]<<endl;
            s--;
        }
        }
};

int main(){
    stackk st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.pop();
    st.pop();
    cout<<"Hi";
    st.print();
    return 0;
}
