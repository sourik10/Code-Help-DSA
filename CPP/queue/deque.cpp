//https://www.geeksforgeeks.org/implementation-deque-using-circular-array/
class Deque
{	int rear,front;
 	int *ar;
 	int size;
public:
    // Initialize your data structure.
    Deque(int n)
    {	
        size=n;
        rear=-1;
        front=-1;
        ar=new int[n];
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        if(isFull()){
            return false;
        }
         else if(isEmpty()){
            front = rear = 0;
        }
        else if(front==0 && rear!=size-1){
            front=size-1;
        }
        else front--;
        
        ar[front]=x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
       if(isFull()){
           return false; //dequeu is empty
       }
        else if(isEmpty()){
            front = rear = 0;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
        }
        else rear++;
        
        ar[rear]=x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        if(isEmpty()){
            return -1; //deque is empty
        }
        int ans=ar[front];
        if(front==rear){ //single element		
            front=-1; rear=-1;
        }
        else if(front==size-1){ //no element to delete 
            front=0;
        }
        else front++;
        
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        if(isEmpty()){
            return -1;
        }
        int ans=ar[rear];
        if(front==rear){ //single element		
            front=-1; rear=-1;
        }
        else if(rear==0){ //no element to delete 
            rear=size-1;
        }
        else rear--;
        
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(isEmpty()){
            return -1;
        }
        else return ar[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if(isEmpty()){
            return -1;
        }
        else return ar[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if(front==-1){
            return true;
        }
        return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {	
         if((front==0&&rear==size-1)||(rear==(front-1)%(size-1))){
             return true;
         }
            return false;
    }
};
