#include<bits/stdc++.h>
using namespace std;

char toLowercase(char ch){
	if(ch>='a' and ch<='z'){
		return ch;
	}
	else {  //Uppercase to Lowercase conversion
		ch=ch-'A'+'a';
		return ch;
	}
}

bool checkPalindrome(string s)
{
    int l=0;
    int h=s.length()-1;
    while(l<=h){
        if(toLowercase(s[l])!=toLowercase(s[h])){
            return false;
        }
        else{
            l++;
            h--;
        }
    }return true;
}

int main(){

	string s="SouuuuuoS";
	cout<<checkPalindrome(s)<<endl;
}
