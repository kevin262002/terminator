#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	char a[50];
	int i,count = 0;
	char nv[] = "Not Valid";
	
	cout<<"Enter Password : ";
	cin>>a;
	
	try{
		
		for(i=0; i<strlen(a);i++){
			
			if(a[i]>='A' && a[i]<='Z'){
				count =1;
			}
		}
		
		if(count ==1){
			
			cout<<"Valid";
		}
		else{
			
			throw nv;
		}
	}	
	
	catch(char n[]){
		
		cout<<n;
	}
	return 0;
}
