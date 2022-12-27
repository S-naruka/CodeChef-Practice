#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,f=0;
        cin>>n>>k;
        
        if(k!=0||n!=0){
            for(int i=1;i<=k;i++){
            f=f+i;
            }
            if(n>=f)
                cout<<"YES"<<endl;
            
            else
                cout<<"NO"<<endl;
        }
        
        else
            cout<<"NO"<<endl;
        
        
        
    }
	return 0;
}
