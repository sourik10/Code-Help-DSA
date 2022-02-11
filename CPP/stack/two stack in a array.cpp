class TwoStack {

public:

   int top1,top2;
    int *arr;
    int size;
    TwoStack(int size) {
        this->size=size;
        this->top1=-1;
        this->top2=size;
        arr=new int[size];
    }
    
    // Push in stack 1.
    void push1(int num) {
        if(top2 - top1 > 1){
            top1++;
            arr[top1]=num;
        }
      
    }

    // Push in stack 2.
    void push2(int num) {
        if(top2 - top1 > 1){
             top2--;
            arr[top2]=num;   
        }
     
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
       if(top1 >= 0){
           int res=arr[top1];
           top1--;
           
           return res;
       }
        return -1;
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if(top2 < size){
           int res=arr[top2];
           top2++;
           
           return res;
       }
        return -1;
    }

};
