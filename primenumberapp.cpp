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

int number, again=5;

while(again == 5){
again=0;

cout<<"Please give a number-> ";
cin>> number;
tryDivideNumber(number);
method2(number);

 cout<<"\n\nPress 5 to try again or other numbers to exit: ";
 cin>>again;
}
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
	
	int i=2,b,x, count=0, ans;
	x = n;
	b = floor(sqrt(x))	;
	while((x>1) && (i<=b)){

		while(x/i) {
		count++;	
		//	cout<<"i is"<<i;
			x= x/i;
			b= floor(sqrt(x));
		}
		
		i = i+1;
	}
	if (x>1){
	//	cout<<"\n"<<x;
	}
cout<<"With 2nd method number of iterations is: "<<count<<endl;	
}
