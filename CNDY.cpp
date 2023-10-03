#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int N;
        cin>>N;
        int array[2*N];
        int flag=1;
        for (int i=0; i<2*N ; i++ ) {
            cin >> array[i];
        }
        sort(array,array+(2*N));
        
        int count =1;
        
for (int i=0; i<2*N -1 ; i++) {
    if (array[i]==array[i+1]){
        count++;
        if (count>2) {
        flag=0;
        break;
    }
     
    }
    else  {
        count = 1;
    }
    
   
    
}
    
     if (flag==0) {
         cout << "No" <<endl;
     }
    else {cout<< "Yes" <<endl;
     }
    }
	return 0;
}
