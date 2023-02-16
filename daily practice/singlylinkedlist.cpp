#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node * next;
};
struct node *head=0, *temp, *newnode;
int main(){
    int choice=1;
    //cout<<"HI";
    while (choice){
        newnode= (struct node*)malloc(sizeof(struct node));
        cout<<"enter the data for node";
        cin>>newnode->data;
        newnode->next=NULL;
        if (head==0){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        cout<<"do you wantto add more nodes";
        cin>>choice;
    }
    temp=head;
    while(temp!= NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
