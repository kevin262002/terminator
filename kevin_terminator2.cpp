#include<iostream>

using namespace std;

int main(){
	
	int a;
	
	cout<<"Enter Age : ";
	cin>>a;
	
	try{
		if(a>=18){
			
			throw a;
		}
		else{
			
			cout<<"Not Able to Vote";
		}
	}	
	
	catch(int n){
		
		cout<<"Able To Vote";
		
		
		
	}
	
	
	return 0;
}
