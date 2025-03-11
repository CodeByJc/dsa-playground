#include <iostream>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to check mountain & valley pattern
int isMountainValleyPattern(ListNode* head) {
    if (!head || !head->next) return 1; // Single node is always valid

    ListNode* curr = head;
    string lastTrend = ""; // Tracks last increase/decrease

    while (curr && curr->next) {
        if (curr->val < curr->next->val) { // Increasing
            if (lastTrend == "up") return 0; // Two consecutive increases
            lastTrend = "up";
        } 
        else if (curr->val > curr->next->val) { // Decreasing
            if (lastTrend == "down") return 0; // Two consecutive decreases
            lastTrend = "down";
        }
        curr = curr->next;
    }

    return 1; // Successfully alternated between increase & decrease
}

// Function to create a linked list from an array
ListNode* createLinkedList(int arr[], int n) {
    if (n == 0) return NULL;
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;
    for (int i = 1; i < n; i++) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }
    return head;
}

// Main function
int main() {
    int n;
    cin >> n;  // Read number of nodes
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    ListNode* head = createLinkedList(arr, n);
    cout << isMountainValleyPattern(head) << endl; // Check pattern

    return 0;
}
