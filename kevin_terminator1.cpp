#include<iostream>

using namespace std;

int main(){
	
	int a;
	int b;
	
	cout<<"Enter A : ";
	cin>>a;
	cout<<"Enter B : ";
	cin>>b;
	
	try{
		if(b==0){
			
			throw b;
		}
		else{
			
			cout<<a/b;
		}
	}	
	
	catch(int n){
		
		cout<<"cannot divide by zero";	
	}	
	return 0;
}
