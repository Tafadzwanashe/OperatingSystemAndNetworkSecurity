#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<string.h>
#include <stdio.h>
#include <ctype.h>


using namespace std;

void tryDivideNumber(int number);
void method1Composite(int number);
void method2(int x );

int main(){

int number;
cout<<"Please give a number-> ";
cin>> number;
tryDivideNumber(number);
method2(number);

}

void tryDivideNumber(int number){
	
	int count=0;
	
	for (int i=2; i<number+1; i++){
		
		count++;
		if(i == number){
			
			cout<<number<<" is a Prime number and factors are -> "<<i;
			cout<<"\nWith 1st method number of iterations is: "<<count<<endl;
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
	
	cout<<"\nWith 1st method number of iterations is: "<<count<<endl;
}

void method2(int n ){
	
	int i=2,b,x, count;
	x = n;
	b = sqrt(x)	;
	while(x>1 && i<=b){
		count++;
		while((x%i)==0) {
			cout<<i;
			x= x/i;
			b= sqrt(x);
		}
		
		i = i+1;
	}
	if (x>1){
		cout<<"\n"<<x;
	}
	
}
