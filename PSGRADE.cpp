#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
	    int a,b,c;
	    int A,B,C;  
	    
	    
	    cin>>a>>b>>c;
	    int T;
	    cin>>T;        //minimum marks to pass the exam 
	    cin>>A>>B>>C;   //Marks he got in individual subject
	    
	    if(A>=a && B>=b && C>=c){
	        if((A+B+C)>=T){
	            cout<<"Yes"<<endl;
	        }
	        else{cout<<"No"<<endl;}
	    }
	    else {cout<<"NO"<<endl;}
	    
	    
	}
	
	return 0;
}
