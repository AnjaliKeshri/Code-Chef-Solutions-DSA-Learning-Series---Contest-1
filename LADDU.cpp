#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string origin;
        cin>>origin;
        int i,sum=0;
        for(i=0;i<n;i++){
            string s;
            cin>>s;
            if(s=="TOP_CONTRIBUTOR"){
                sum=sum+300;
            }
            if(s=="CONTEST_HOSTED"){
                sum=sum+50;
            }
            else if(s=="BUG_FOUND"){
                int num;
                cin>>num;
                sum=sum+num;
            }
            else if(s=="CONTEST_WON"){
                int rank;
                cin>>rank;
                if(rank<20){
                    sum=sum+300+20-rank;
                }
                else{
                    sum=sum+300;
                }
            }
        }
        if(origin=="INDIAN"){
            cout<<sum/200<<endl;
        }
        else{
            cout<<sum/400<<endl;
        }
        
    }
	return 0;
}

