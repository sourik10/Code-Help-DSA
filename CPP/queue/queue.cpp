class Queue {
    int size;
    int qrear,qfront;
    int *ar;
public:
    Queue() {
        qrear=qfront=-1;
        size=99999;
        ar=new int[size];
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qrear==qfront){ 
            return true;
        }
        return false;
    }

    void enqueue(int data) {
        if(qrear==size-1){
            cout<<"Queue is full"<<endl;
    		return;
        }
        ar[qrear]=data;
        qrear++;
    }

    int dequeue() {
        if(qrear==qfront){
            //cout<<"Stack is empty"<<endl;
            return -1;
        }
        int res=ar[qfront];
        qfront++;
        if(qfront==qrear){
            qfront=0;
            qrear=0;
        }
        return res;
    }

    int front() {
        if(qfront==qrear){
            return -1; //stack is empty
        }
        return ar[qfront];
    }
};
