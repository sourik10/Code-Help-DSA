class CircularQueue{
    int size;
    int rear,front;
    int *ar;
    public:
    
    CircularQueue(int n){
        size=n;
        rear=-1;
        front=-1;
        ar=new int[n];
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        if((front==0 && rear==size-1) || (rear==(front-1)%size)){
            return false; //queue is full
        }
        else if(front=-1){  //insert first element
            rear=front=0;
        }
        else if(rear=size-1 && front!=0){  //maintain cyclic nature
            rear=0;
        }
        else{
           					 
            rear++; //normal insertion
        }
        ar[rear]=value; 
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(front=-1){
            return -1; //queue is empty 
        }
        int res=ar[front];
        ar[front]=-1; 
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else if(front==size-1){  //cyclic nature 
            front=0;
        }
        else front++;  //normal deque 
        return res;
    }
};
