#include<bits/stdc++.h>
using namespace std;

//euclids Algorithm
//Time Complexity: O(Log min(a, b))  
//blogs --- https://www.codingninjas.com/blog/2020/07/25/explained-euclids-gcd-algorithm/

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
  
int main(){

	int a,b;
	cin>>a>>b;
	cout<<"GCD "<<gcd(a,b)<<endl;
	cout<<"LCM "<<a*b/gcd(a,b)<<endl;
}
