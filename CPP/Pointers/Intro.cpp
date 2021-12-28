#include<bits/stdc++.h>
using namespace std;

int main(){
  
  //characterArray using Pointer
  char ch[10]="Sunny";
  char* p=ch;
  cout<<p<<endl;
  
  //char Passing Throuh Pointer 
   char m='s@86778';
  char* n=&m;
  cout<<*n<<endl;
  
}

//ArrayUsingPointer
#include<bits/stdc++.h>
using namespace std;

int main(){
  int ar[10]={10,20,30,44,55,66};

    cout <<" address of first memory block is " << arr << endl;
    cout << arr[0] << endl;
    cout <<" address of first memory block is " << &arr[0] << endl;
    cout << "4th " << *arr << endl;
    cout << "5th " << *arr + 1 << endl;
    cout << "6th " << *(arr + 1) << endl;
    cout << "7th " << *(arr) + 1 << endl;
    cout << "8th " << arr[2] << endl;
    cout << "9th " << *(arr+2) << endl;

    int i = 3;
    cout << i[arr] << endl;
   int temp[10] = {1,2};
   cout << sizeof(temp) << endl;
   cout << " 1st " <<  sizeof(*temp) << endl;
   cout << " 2nd " <<  sizeof(&temp) << endl;
   int *ptr = &temp[0];
   cout << sizeof(ptr) << endl ;
   cout << sizeof(*ptr) << endl ;
   cout << sizeof(&ptr) << endl ;
   

}
