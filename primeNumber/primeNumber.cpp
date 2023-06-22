#include<iostream>
using namespace std;

int main(){
	
	int startNumber = 2;
	int factor = 0;
	
	while(startNumber <= 100){
		
		int innerloop = 2;
		
		while(innerloop < startNumber){
			if(startNumber%innerloop==0){
				factor++;
				break;
				
			}
			
			innerloop++;
			
			
		}
		
		if(factor == 0)
			
			cout<<startNumber<< "\t";
		
		factor=0;
		
	
		startNumber++;
		
		
	}

	
	
	
	return 0;
}