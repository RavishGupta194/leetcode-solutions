class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        this->data = value;
        this->next = NULL;
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
        int size = 0;
        Node* temp = head;
        while (temp != NULL) {
            size++;
            temp = temp->next;
        }
        if (index < 0 || index >= size) {
            return -1;
        }
        Node* temp2 = head;
        for (int i = 0; i < index; i++) {
            temp2 = temp2->next;
        }
        return temp2->data;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);
        if (head == NULL && tail == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (head == NULL && tail == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void addAtIndex(int index, int val) {
        int size = 0;
        Node* temp3 = head;
        while (temp3 != NULL) {
            size++;
            temp3 = temp3->next;
        }
        if (index < 0 || index > size) {
            return;
        }
        if (index == 0) {
            addAtHead(val);
            return;
        }

        if (index == size) {
            addAtTail(val);
            return;
        }

        Node* newNode = new Node(val);

        Node* temp4 = head;

        for (int i = 0; i < index - 1; i++) {
            temp4 = temp4->next;
        }

        newNode->next = temp4->next;
        temp4->next = newNode;
    }

    void deleteAtIndex(int index) {
        int size = 0;
        Node* temp3 = head;
        while (temp3 != NULL) {
            size++;
            temp3 = temp3->next;
        }
        if (index < 0 || index >= size) {
            return;
        }

        if (index == 0) {

            Node* temp = head;

            head = head->next;

            temp->next = NULL;

            delete temp;

            size--;

            if (size == 0) {
                tail = NULL;
            }

            return;
        }

        Node* previous = head;

        for (int i = 0; i < index - 1; i++) {
            previous = previous->next;
        }

        Node* current = previous->next;

        if (current == tail) {
            tail = previous;
        }

        previous->next = current->next;

        current->next = NULL;

        delete current;
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