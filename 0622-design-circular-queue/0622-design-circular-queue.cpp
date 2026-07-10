class MyCircularQueue {
public:
int front=0,rear=-1;
int * arr;
int k=0;int size=0;
    MyCircularQueue(int k){
        arr= new int[k];
        this->k=k;
        
        
    }
    
    bool enQueue(int value) {
        if(this->isFull()){
            return false;
        }
        rear=(rear+1)% k;
        arr[rear]=value;
        size++;
        return true;
        
    }
    
    bool deQueue() {
        if(this->isEmpty()) return false;
        front=(front+1)%k;
        size--;
        return true;
        
    }
    
    int Front() {
        if(this->isEmpty())return -1;
        return arr[front];
    }
    
    int Rear() {
        if(isEmpty())return -1;

        return arr[rear];
        
    }
    
    bool isEmpty() {
      return size==0;
    }
    
    bool isFull() {
       return size==k;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */