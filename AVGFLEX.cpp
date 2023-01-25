#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,count=0,high=0,low=0;
	    cin>>n;
	    int a[n];
	    for(auto &x:a){
	        cin>>x;
	    }
	    for(int i=0;i<n;i++){
	        high=0;
	        low=0;
	        for(int j=0;j<n;j++){
	            if(a[i]>=a[j])
	                high++;
                else
                    low++;
	        }
	        if((high)>low){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
