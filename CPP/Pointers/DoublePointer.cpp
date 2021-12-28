#include <bits/stdc++.h>
using namespace std;
void update(int** p){
	//p=p+1; NoUPDATE
	**p=**p+1;
  *p=*p+1;

}
int main() {
	int a=100;
	int*b=&a;
	int **c=&b;
	cout<<endl<<endl<<"Before Update"<<endl;
	cout<<a<<" "<<*b<<" "<<c<<endl;

	cout<<endl<<endl<<"After Update"<<endl;
	cout<<a<<" "<<*b<<" "<<c<<endl;


}
/*
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void increment(int **p){
  (**p)++;
}

int main(){
 int num = 10;
 int *ptr = &num;
 increment(&ptr);
 cout << num << endl;
}
*/
