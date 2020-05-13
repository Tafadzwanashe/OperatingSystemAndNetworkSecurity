#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string.h>
#include <stdio.h>
#include <ctype.h>


using namespace std;

void tryDivideNumber(int number);
void method1Composite(int number);

int main(){

int number;
cout<<"Please give a number-> ";
cin>> number;
tryDivideNumber(number);

}

void tryDivideNumber(int number){
	

	
	for (int i=2; i<number+1; i++){
		
		
		if(i == number){
			
			cout<<number<<" is a Prime number";
			break;
		}
		
		if( number%i ==0){
			
			method1Composite(number);
			break;
		}
		
	}
	
}

void method1Composite(int number){
	
	
	cout<<number<<" is a composite number and factors are -> ";
	
	int answer=0, count=0;
	
	for (int i=2; i<number+1; i++){
		
		count++;
		if(number==i){
			cout<<i;
			break;
		}
		if( number%i ==0){
			
			cout<<i << ",";
		}
		
	}
	
	cout<<"\nWith 1st method number of iterations is: "<<count;
}
