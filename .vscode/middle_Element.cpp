#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int new_data){
        this->data = new_data;
        this->next = nullptr;
    }
};

int middle_Ele(Node *head){
    if(!head) return -1;        // sentinel for empty list

    Node *slow = head;
    Node *fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}

 
int main(){
 
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    cout<<"Middle Element is : "<<middle_Ele(head);

return 0;
}