#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s)
{
    int l=0;
    int h=s.length()-1;
    while(l<=h){
        if(s[l]!=s[h]){
            return false;
        }
        else{
            l++;
            h--;
        }
    }return true;
}
int main(){

	string s="12221";
	cout<<checkPalindrome(s)<<endl;
}
