#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	 
	 int a,b,c;
	 cin>>a>>b>>c;
	    
	    int x = b -min(b,c);
	    int y = c -min(b,c);
	    
	    if(x>y){
	        a = a-x;
	        if(a>0){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	    else{
	        a = a-y;
	           if(a>0){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	        
	    }
	    
	    
	    
	    
	    
	}

}
