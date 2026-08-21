class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};
class MyLinkedList {
public:
    Node* head;
    Node* tail;

    MyLinkedList() {
        head = NULL;
        tail = NULL;
    }
    
    int get(int index) {
        if (head == NULL) {
        return -1;
    }

    Node* temp = head;

    for (int i = 0; i < index; i++) {
        if (temp == NULL) {
            return -1;
        }

        temp = temp->next;
    }

    if (temp == NULL) {
        return -1;
    }

    return temp->data;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        // List already has nodes
        else {
            newNode->next = head;
            head = newNode;
        }
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);

    // Empty list
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    // List already has nodes
    else {
        tail->next = newNode;
        tail = newNode;
    }
}
    
    void addAtIndex(int index, int val) {
        if (index == 0) {
        addAtHead(val);
        return;
    }

    // List empty hai
    if (head == NULL) {
        return;
    }

    Node* temp = head;

    // index - 1 tak jaana hai
    for (int i = 0; i < index - 1; i++) {
        if (temp == NULL) {
            return;
        }

        temp = temp->next;
    }

    // Agar position exist nahi karti
    if (temp == NULL) {
        return;
    }

    Node* newNode = new Node(val);

    newNode->next = temp->next;
    temp->next = newNode;

    // Agar last mein insert hua
    if (newNode->next == NULL) {
        tail = newNode;
    }
    }
    
    void deleteAtIndex(int index) {
        if (head == NULL) {
        return;
    }

    // Head delete karna hai
    if (index == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;

        // Agar list empty ho gayi
        if (head == NULL) {
            tail = NULL;
        }

        return;
    }

    Node* temp = head;

    // index - 1 wale node tak jao
    for (int i = 0; i < index - 1; i++) {
        if (temp == NULL || temp->next == NULL) {
            return;
        }

        temp = temp->next;
    }

    // Delete karne ke liye node exist nahi karti
    if (temp->next == NULL) {
        return;
    }

    Node* nodeToDelete = temp->next;

    // Link skip kar do
    temp->next = nodeToDelete->next;

    // Agar last node delete hui
    if (nodeToDelete == tail) {
        tail = temp;
    }

    delete nodeToDelete;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */