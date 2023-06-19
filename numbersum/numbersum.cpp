#include<iostream>
using namespace std;

int main(){
int user_input ;
int sum = 0;

cout<<"Enter the number";
cin >> user_input;

for(; true ;){
		
        while(user_input > 0){
		  int temp = user_input%10;
		  sum = sum + temp;
          user_input = user_input/10;

       }

        user_input = sum;
        sum = 0;
        if (user_input < 10){
        	
        	break;
		}
		
        

 
}
cout << "the final sum is " << user_input;  

}