#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	
	for(int i=0;i<t;i++){
	    	
	    int n;
	    cin>>n;
	    int a,h=8;
	    for(int i=0;i<n;i++){
	        cin>>a;
	    
	    
	    if(a%7!=0 && a%7!=6){
	        h++;
	    }

	    }
	    
	    cout<<h<<endl;
	}
	return 0;
}
