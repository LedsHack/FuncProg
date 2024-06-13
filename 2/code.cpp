#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* swapPairs(ListNode* head) {
    if (!head || !head->next) {
        return head;
    }

    ListNode dummy(0);
    dummy.next = head;
    ListNode* prev = &dummy;

    while (prev->next && prev->next->next) {
        ListNode* first = prev->next;
        ListNode* second = prev->next->next;

        first->next = second->next;
        second->next = first;
        prev->next = second;

        prev = first;
    }

    return dummy.next;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);


    cout << "Початковий список: ";
    printList(head);

    ListNode* newHead = swapPairs(head);

    cout << "Після обміну: ";
    printList(newHead);

    ListNode* temp;
    while (newHead) {
        temp = newHead->next;
        delete newHead;
        newHead = temp;
    }

    return 0;
}