#include <iostream>
using namespace std;

    
int main() {
	// your code goes here
	int ladddu =0;
  int a,CONTEST_WON_rank,BUG_FOUND_severity;
  string country,CONTEST_WON,BUG_FOUND,CONTEST_HOSTED,TOP_CONTRIBUTOR;
  
	int n;
	cin>>n;
	int CONTEST_WON(){
        if(CONTEST_WON == "CONTEST_WON"){
            if(CONTEST_WON_rank<20){
                laddu = 300+(20-CONTEST_WON_rank);
            }
            else{
                laddu = 300;
            }
        }
    }
    int TOP_CONTRIBUTOR(){
        cin>>TOP_CONTRIBUTOR;
        if(TOP_CONTRIBUTOR == "TOP_CONTRIBUTOR"){
            laddu = laddu + 300;
        }
    }
    int BUG_FOUND(){
        cin>>BUG_FOUND>>BUG_FOUND_severity;
        if(BUG_FOUND == "BUG_FOUND"){
            laddu = laddu +BUG_FOUND_severity;
        }
    }
    int CONTEST_HOSTED(){
        cin>>CONTEST_HOSTED;
        if(CONTEST_HOSTED == "CONTEST_HOSTED"){
            laddu = laddu +50;
        }
    }
    
	while(n--){
	    cin>>a>>country;
	if(a ==4){
        int CONTEST_WON();
        TOP_CONTRIBUTOR();
        BUG_FOUND();
        CONTEST_HOSTED();
    }
    else if(a ==3){
        CONTEST_WON();
        TOP_CONTRIBUTOR();
        BUG_FOUND();
    }
    else if(a ==2){
        CONTEST_WON();
        TOP_CONTRIBUTOR();
    }
    else{
        CONTEST_WON();
    }
        cout<<laddu;
	return 0;
}
