#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	
	if(N>0 &&N<10){
	    cout<<1<<endl;
	}
else if(N>=10 && N<100){
    cout<<2<<endl;
}
else if(N>=100 && N<1000){
    cout<<3<<endl;
} 
else{
    cout<<"More than 3 digits"<<endl;
}
}
