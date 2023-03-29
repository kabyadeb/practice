#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};
void deleteList(Node* head)
{
    Node* current=head;
    Node* next =NULL;
    while(current!=NULL)
    {
        next =current->next;
        delete current;
        current =next;

    }
}
// void printLinkedList(Node* head) {
//     Node* current = head;
//     while (current != nullptr) {
//         std::cout << current->data << " ";
//         current = current->next;
//     }
// }
    int main()
    {
        Node* head =new Node;
        head->data =1;
        head->next =new Node;
        head->next->data=2;
        head->next->next=NULL;
        deleteList(head);
    //    printLinkedList(head);
        return 0;
    }

