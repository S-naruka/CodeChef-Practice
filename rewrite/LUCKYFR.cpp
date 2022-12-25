#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int count=0;
        string a;
        cin>>a;
        
        for(int i=0;i<a.size();i++){
            if(a[i]=='4'){
                count++;
            }
        }
        
        cout<<count<<endl;
    }
	return 0;
}
