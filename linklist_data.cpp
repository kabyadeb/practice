#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* createLinkedList() {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    std::cout << "Enter the elements of the linked list (type -1 to stop):\n";
    int value;
    std::cin >> value;
    while (value != -1) {
        ListNode* new_node = new ListNode(value);
        if (head == nullptr) {
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
        std::cin >> value;
    }

    return head;
}

void printLinkedList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        std::cout << current->val << " ";
        current = current->next;
    }
}

int main() {
    // create a linked list using user input
    ListNode* head = createLinkedList();

    // print the linked list
    printLinkedList(head);

    // free memory
    ListNode* current = head;
    while (current != nullptr) {
        ListNode* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
