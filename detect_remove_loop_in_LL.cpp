bool detectLoop(Node* head) {
    if (head == NULL) {
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;           // move by 1
        fast = fast->next->next;     // move by 2

        if (slow == fast) {
            return true;             // cycle detected
        }
    }

    return false;                    // no cycle
}




Node* startofloop(Node* head) {
    if (head == NULL) {
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    // Detect intersection point
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            break;
        }
    }

    // Check if no loop exists
    if (fast == NULL || fast->next == NULL) {
        return NULL;
    }

    // Reset slow to head and find the start of the loop
    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    return slow; // Start of the loop
}

Node* removeLoop(Node* head) {
    if (head == NULL) {
        return head;
    }

    if (detectLoop(head)) {
        Node* start_of_cycle = startofloop(head);

        // Find the last node in the loop
        Node* temp = start_of_cycle;
        while (temp->next != start_of_cycle) {
            temp = temp->next;
        }

        // Break the loop
        temp->next = NULL;
    }
    return head; // Return the updated list
}
