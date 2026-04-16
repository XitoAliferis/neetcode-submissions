class DynamicArray {
private:
    int* data;
    int capacity;
    int size;
public:

    DynamicArray(int capacity) {
        this->data = new int[capacity];
        this->size = 0;
        this->capacity = capacity;
    }

    ~DynamicArray(){
        delete[] data;
    }
    int get(int i) {
        if (i >= size || i<0){
            return -1;
        }
        return data[i];
    }

    void set(int i, int n) {
        if (i > size-1 || i < 0){
            return;
        }
        data[i] = n;
        return;
    }

    void pushback(int n) {
        if (size == capacity){
            resize();
        }
        data[size] = n;
        size++;
    }

    int popback() {
        if (size > 0){
            size--;
        }
        return data[size];
    }

    void resize() {
        capacity *= 2;
        int * newArr = new int[capacity];
        for (int i = 0; i < size; i++){
            newArr[i] = data[i];
        }
        delete[] data;
        data = newArr;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }
};
