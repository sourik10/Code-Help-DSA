#include<bits/stdc++.h>
using namespace std;
//2d Array in DS

//linear Search in 2D Array
bool linearSearch(int ar[][3],int key){
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      
      if(ar[i][j]==key){
        return true;
      }
    }
  }
  return false;
}

/*
 //Rowwise taking Input in 2d array
for(int row=0;row<3;row++){
  for(int col=0;col<3;col++){
    cin>>arr[row][col];
  }
}
//Columnwise taking Input in 2d array
for(int col=0;col<3;col++){
  for(int row=0;row<3;row++){
    cin>>arr[col][row];
  }
}

*/

//rowWise Sum problem in 2d array
void rowSum(int ar[][3]){
  for(int i=0;i<3;i++){
    int sum=0;
    for(int j=0;j<3;j++){
      sum+=ar[i][j];
    }
    cout<<i+1<<" th row sum "<<sum<<endl;
  }
}


//columnWise Sum problem in 2d array
void columnSum(int ar[][3]){
  for(int i=0;i<3;i++){
    int sum=0;
    for(int j=0;j<3;j++){
      sum+=ar[j][i];
    }
    cout<<i+1<<" th column sum "<<sum<<endl;
  }
}

//largestRow sum Problem 
void largestRowSum(int ar[][3]){
  int maxSum=INT_MIN;
  int rowNo=-1; //initially taking rowNO=-1

  for(int i=0;i<3;i++){
    int s=0;
    for(int j=0;j<3;j++){
      s+=ar[i][j];
    }
    
    if(s>maxSum){
      maxSum=s;
      rowNo=i+1;
    }
  }
  cout<<"Largest RowSum : "<<maxSum<<endl;
  cout<<"Row no "<<rowNo<<endl;
  
}




int main(){
  
  int ar[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin>>ar[i][j];
    }
  }
  int n;
  cin>>n;
  cout<<linearSearch(ar,n)<<endl;
  rowSum(ar);
  columnSum(ar);
  largestRowSum(ar);

}
  
