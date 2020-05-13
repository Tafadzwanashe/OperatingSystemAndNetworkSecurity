#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string.h>
#include <stdio.h>
#include <ctype.h>


using namespace std;

void tryDivideNumber(int number);

int main(){

int number;
cout<<"Please give a number-> ";
cin>> number;
tryDivideNumber(number);

}

void tryDivideNumber(int number){
	
	int answer;
	
	for (int i=2; i<number; i++){
		
		if( number%i ==0){
			
			cout<<i << "\t";
		}
		
	}
	
}
