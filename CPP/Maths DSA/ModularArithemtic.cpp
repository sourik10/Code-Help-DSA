/*
First off, some important identities about the modulo operator:

(a mod m)+(b mod m)  mod m=a+b  mod m
(a mod m)−(b mod m)  mod m=a−b  mod m
(a mod m)⋅(b mod m)  mod m=a⋅b  mod m

*/

int modularExponentiation(int x, int n, int m) {
	int res=1;
    while(n>0){
        if(n%2){
            res=(1LL*((res%m)*x)%m)%m;
        }
        n=n>>1;
        x=(1LL*(x%m)*(x%m))%m;
    }return res;
}
