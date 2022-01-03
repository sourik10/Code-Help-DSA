#include<bits/stdc++.h>
using namespace std;

int main(){
	int rows,cols;
	cin>>rows>>cols;

	//variable sized 2D array Dynamic Memory Allocation
	int** ar=new int* [rows];
	for(int i=0;i<rows;i++){
		ar[i]=new int[cols];
	}

	//taking input in 2D array
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin>>ar[i][j];
		}
	}

	//printing output
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}

	//releasing memory
	for(int i=0;i<rows;i++){
		delete [] ar[i];
	}

	delete [] ar;

	

}
