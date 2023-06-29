#include <iostream>
using namespace std;
int main(){
/*	
	int rows;
	cout<<"Enter the rows";
	cin >> rows;
	for (int i = 1; i <=rows; i++){
		for(int j = rows; j >= i; j--){
			cout<< "*";
			
		}
		cout<<endl;
	
	}

****
***
**
*
*/
/*
	int rows;
	cout<<"Enter the rows";
	cin >> rows;
	for (int i = 1; i <=rows; i++){
		for(int j = 1; j <= i; j++){
			cout<< "*";
			
		}
		cout<<endl;
	
	}
*
**
***
****
*/
/*
	int rows;
	cout<<"Enter the rows";
	cin >> rows;
	for (int i = 1; i <=rows; i++){
		for(int j = 0; j <= rows; j++){
			cout<< j ;
			
		}
		cout<<endl;
	
	}
012345
012345
012345
012345
012345
*/
/*
	int rows;
	cout<<"Enter the rows";
	cin >> rows;
	int x = 0;

	for (int i = 0; i <=rows; i++){
		for(int j = 0; j <=i ; j++){
			cout<< j + x;
			
		}
		cout<<endl;
	
	}
0
01
012
0123
01234
*/
/*
	int rows;
	cout<<"Enter the rows";
	cin >> rows;
	

	for (int i = 1; i <=rows; i++){
		for(int j = 1; j <=rows ; j++){
			cout<< j * i;
			
		}
		cout<<endl;
	
	}
12345
246810
3691215
48121620
510152025
*/
/*
	int rows;
	cout<<"Enter the rows";
	cin >> rows;
	

	for (int i = 1; i <=rows; i++){
		for(int j = 1; j <=i ; j++){
			cout<<  i * 1;
			
		}
		cout<<endl;
		
	
	}
1
22
333
4444
*/
/*
	int rows = 5;
	for (int i = 9; i >=rows; i--){
		for(int j = 5; j <=i ; j++){
			cout<<  j ;
			
		}
		cout<<endl;
		
	}
56789
5678
567
56
5
*/


/*
	int rows;
	cout<<"Enter the rows";
	cin >> rows;
	

	for (int i = 1; i <=rows; i++){
		for(int j = 1; j <=i ; j++){
			if(j==i){
				cout<< "#";
				
			}
			else{
				cout<< j;
			}
			
		}
		cout<<endl;
	
	}
#
1#
12#
123#
1234#
*/

/*
	int rows;
	cout<<"Enter the rows";
	cin >> rows;
	int x = 1;
	

	for (int i = 1; i <=rows; i++){
		for(int j = 1; j <=x ; j++){
			cout<< "*";
		
			
		}
		cout<<endl;
		x  = x + 2;
	
	}
*
***
*****
*******
*********
*/

/*
	int rows;
	cout<<"Enter the rows";
	cin >> rows;
	int x = 1;
	

	for (int i = 1; i <=rows; i++){
		for(int j = 1; j <=x ; j++){
			cout<< "*";
		
			
		}
		cout<<endl;
		x  = x + 2;
	
	}
*
***
*****
*******
*/

	int rows;
	cout<<"Enter the rows";
	cin >> rows;
	
	int x = 2 * rows - 1;
	
	

	for (int i = 1;i<=rows; i++){
	
		for(int j = 1; j <=x ; j++){
			cout<< "*" ;
		
			
		}
		cout<<endl;
		x = x - 2;
		
		
	
}









	
	
	return 0;
}