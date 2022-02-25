#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>dk;
    dk.push_back(10);
    dk.push_back(20);
    for(auto x:dk){
        cout<<x<<";";
    }
    cout<<endl;

    dk.push_front(5);
    dk.push_front(8);
    cout<<dk.front()<<endl;
    cout<<dk.back()<<endl;

    dk.pop_back();
    cout<<dk.back()<<endl;

    if(dk.empty()){
        cout<<"deque is empty"<<endl;
    }
    else {
        cout<<"deque is not empty"<<endl;
    }
    

}