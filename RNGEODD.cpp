#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	int m;
	cin>>n>>m;
	for( int i=n;i<=m;i++){
	    if(i%2!=0){
	      cout<<i<<" ";
	    }
	}
	return 0;
}
