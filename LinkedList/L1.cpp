#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor with default argument for next
    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

Node* arraytoLL(vector<int>ans){

    Node* head = new Node(ans[0]);
    Node* mover = head;

    for(int i = 1; i<ans.size(); i++){
        Node* temp = new Node(ans[i]);
        mover -> next = temp;
        mover = temp;
    }

    return head;

}


int printLL(Node* head) {
    int length = 0;
    while (head) {
        cout << head->data << " ";
        head = head->next;
        length++;
    }
    return length;
}



int main(){
    vector<int> ans = {11, 2, 3, 4, 5};

    Node* head = arraytoLL(ans);

    int length = printLL(head);

    cout << length;

    return 0;
}