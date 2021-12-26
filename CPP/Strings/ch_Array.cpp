//String = one dimensional character array[]
#include<bits/stdc++.h>
using namespace std;

int getLength(char ch[]){
	int ct=0,i=0;
	while(ch[i]!='\0'){
		ct++;
		i++;
	}
  return ct;
}


int main(){

	char ch[20];
	cin>>ch;
	cout<<getLength(ch);
}
