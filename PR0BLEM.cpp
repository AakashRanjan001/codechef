#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
	    int n,m;   //n is the problems of alice
	    //m is the problems of bob
	    cin>>n>>m;
	    
       if(abs(n-m)%2==0 || abs(n-m)%4==0){
           cout<<"YES"<<endl;
       }
else {cout<<"NO"<<endl;}
}


}
