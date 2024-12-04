#include<iostream>
using namespace std;
class Node{
   public:
   int val;
   Node* next;
   Node(int val){
    this->val=val;
    this->next=NULL;
   }
};
class Linkedlist{
    public:
        Node* head;
        Node* tail;
        int size;
    Linkedlist(){
        head=tail=NULL;
        size=0;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void display(){
        Node* temp =head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
   

};
int main(){
    Linkedlist ll;
    ll.insertAtHead(10);
    ll.insertAtHead(20);
    ll.insertAtHead(70);
    ll.display();
     cout<<ll.size;
    
}