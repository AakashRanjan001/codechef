#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	
	
		  int n,h,x;
     cin >>n >>h >>x;
     int a[n];
     string s = "No";
          
          for(int i=0; i<n; i++){
              cin >>a[i];
              if (a[i]+x >=h) s = "Yes";
              
              
          }
             cout<< s <<endl;

}
