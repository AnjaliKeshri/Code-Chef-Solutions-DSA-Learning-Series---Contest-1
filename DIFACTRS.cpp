#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int ans = 0;
	for (int i=1;i<=n;i++){
	    if(n%i==0){
	    ans++;
	    }
	}
	   cout<<ans<<endl;
	for (int i=1;i<=n;i++){
	    if(n%i==0){
	    cout << i << " ";
	    }
	}
	return 0;
}
