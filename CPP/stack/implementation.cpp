#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    //data members 
    int *arr;
    int size;
    int top;

    //stack constructor 
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    //behavior 
    void push(int val){
        if(size - top > 1){
            arr[top]=val;
            top++;
        }
        else {
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){
        if(top >= 0){
            cout<<"item popped "<<arr[top]<<endl;
            top--;
        }
        else cout<<"Stack Underflow"<<endl;
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else {
            cout<<"Stack is empty "<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else return false;
    }
};
int main(){
    Stack s(5);
    cout<<s.isEmpty()<<endl;
    s.pop();


    s.push(10);
    s.push(20);
    s.push(30);

    
    s.pop();
    s.pop();
    
    cout<<s.peek()<<endl;

    cout<<s.isEmpty()<<endl;

}
