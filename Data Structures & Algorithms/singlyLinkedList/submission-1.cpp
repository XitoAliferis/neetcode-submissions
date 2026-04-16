class LinkedList {
private:
    class Node{
    public:
        int value;
        Node* next;
        Node(int v){
            value=v;
            next = nullptr;
        }
        Node(int v, Node* n){
            value=v;
            next = n;
        }
    };
    Node* head;
    Node* tail;
public:
    LinkedList() {
        head = new Node(-1);
        tail = head;
    }

    int get(int index) {
        Node* temp = head;
        for (int i = -1; i < index; i++){
            if (temp->next == nullptr){
                return -1;
            }
            temp = temp->next;
        }
        return temp->value;
    }

    void insertHead(int val) {
        Node*temp = new Node(val, head->next);
        head->next = temp;
        return;
    }
    
    void insertTail(int val) {
        Node*temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = new Node(val);
        tail = temp->next;
        return;
    }

    bool remove(int index) {
        Node*temp = head;
        if (index == 0){
            if (temp->next == nullptr){
                return false;
            }
            head = temp->next;
            delete temp;
            return true;
        }
        for (int i =0; i<index;i++){
            temp = temp->next;
            if (temp->next == nullptr){
                return false;
            }
        }
        temp->next = temp->next->next;
        return true;
    }

    vector<int> getValues() {
        vector<int> temp_vec; 
        Node* temp = head;
        bool dummy = true;
        while (temp != nullptr){
            if (dummy) {
                dummy = false;
                temp = temp->next;
                continue;
            }
            temp_vec.push_back(temp->value);
            temp = temp->next;
        }
        return temp_vec;
    }
};
