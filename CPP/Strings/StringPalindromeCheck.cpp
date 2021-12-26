#include<bits/stdc++.h>
using namespace std;

/*
//two pointer approach  
class Solution {
public:
    bool isPalindrome(string s) {
    for (int i = 0, j = s.size() - 1; i < j;i++,j--) {     	// Move 2 pointers from each end until they collide
        while (isalnum(s[i]) == false && i < j) i++; 		// Increment left pointer if not alphanumeric
        while (isalnum(s[j]) == false && i < j) j--; 		// Decrement right pointer if no alphanumeric
        if (toupper(s[i]) != toupper(s[j])) return false; 	// Exit and return error if not match
    }
    
    return true;
}
};

*/

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
