#include <iostream>
using namespace std;

int main() {
	int t;
	int a[10000];
	cin>>t;
	  while(t--){
	      int N,i,c=0;
	      cin>>N;
	      a[0]=0;
	    
	        for(i=1;i<=N;i++){
	          cin>>a[i];
          }
	        
	        for(i=1;i<=N;i++){
	          int bi;
              cin>>bi;
	              if(bi<=a[i]-a[i-1])
	              c++;
          }
	        
	        cout<<c<<"\n";
	    }
	
	return 0;
}
