#include<iostream>
#include<vector>

using namespace std;

class Node{
public:
    Node* next = nullptr;
    int val = 0;
};

class myQueue{
private:
    Node* head = nullptr;
    int size_ = 0;
public:

};

int main(void){
    Node head;
    head.val = 1;
    cout << &head << "/" << head.next << "/" << head.val << endl;

    Node* newNode = new Node;
    newNode->val = 3;
    head.next = newNode;
    cout << head.val << " " << head.next->val << endl;
    delete newNode;

    vector<int> v;
    return 0;
}