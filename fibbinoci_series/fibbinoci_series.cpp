#include <iostream>
using namespace std;

int main(){
	int user_input;
	cout<<"Enter the number for fibbinoci";
	cin>>user_input;
	int start = 0;
	int next = 1;
	int fibbinoci;
	for(int i = 0; i < user_input; i++){
	
	
		fibbinoci = start + next;
		start = next;
		next = fibbinoci;
	    cout<<fibbinoci;
	}
	
	
	return 0;
}