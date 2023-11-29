#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data, Node* next = nullptr){
        this -> data = data;
        this -> next = next;
    }
};

Node* arrayToLL(vector<int>ans){
    Node* head = new Node(ans[0]);
    Node* mover = head;

    for(int i = 1; i<ans.size(); i++){
        Node* temp = new Node(ans[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}

void printLL(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

// Deletion Of Head Node: 
Node* deleteHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head -> next;
    delete temp;
    printLL(head);
}

// Deletion of Tail node:
Node* deleteTail(Node* head){
    if(head == NULL || head -> next == NULL) return head;
    Node* temp = head;
    while(temp -> next -> next != NULL){
        temp = temp -> next;
    }
    Node* tail = temp -> next;
    temp -> next = nullptr;
    delete tail;
    return head;
}

// Deletion of K node:
Node* deleteKthElement(Node* head, int k){
    if(head == NULL) return head;
    if(k == 1){
        Node* temp = head;
        head = head -> next;
        delete temp;
        return head;
    }
    int count = 0;
    Node* temp = head;
    Node* prevNode = NULL;

    while(temp != NULL){
        count++;
        if(count == k){
            prevNode -> next = temp -> next;
            delete temp;
            break;
        }
        prevNode = temp;
        temp = temp -> next;
    }
    return head;
}

// Delete a node with value:

Node* deleteKthElementWithValue(Node* head, int elm){
    if(head == NULL) return head;
    if(head -> data == elm){
        Node* temp = head;
        head = head -> next;
        delete temp;
        return head;
    }
    Node* temp = head;
    Node* prevNode = NULL;

    while(temp != NULL){
        if(temp -> data == elm){
            prevNode -> next = temp -> next;
            delete temp;
            break;
        }
        prevNode = temp;
        temp = temp -> next;
    }
    return head;
}


int main(){
    vector<int>ans = {11,12,3,4,5,6,7};
    Node* head = arrayToLL(ans);
    // head = deleteHead(head);
    // head = deleteTail(head);
    // head = deleteKthElement(head, 4);
    head = deleteKthElementWithValue(head, 11);
    printLL(head);
    return 0;
}