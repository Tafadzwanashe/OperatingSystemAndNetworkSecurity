#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<string.h>
#include <stdio.h>
#include <ctype.h>


using namespace std;

void createList(int numbers[10000], int upperLimit);
void findPrimeNumbers(int numbers[10000], int upperLimit);
void displayPrimeNumbers(int numbers[10000], int upperLimit);


int main(){

int upperLimit, again=5, numbers[10000];

while(again == 5){
again=0;

cout<<"Please enter upper limit number -> ";
cin>> upperLimit;
createList(numbers, upperLimit);
findPrimeNumbers(numbers, upperLimit);
displayPrimeNumbers(numbers, upperLimit);

 cout<<"\n\nPress 5 to try again or other numbers to exit: ";
 cin>>again;
}
}

void createList(int numbers[10000], int upperLimit){
	
	//int size = 10000;
//	size = upperLimit;

	
	for(int i=0; i< upperLimit; i++){
		
		numbers[i] = i+2;
		cout<< numbers[i] <<"_";
		if (numbers[i]== upperLimit){
			break;
		}
	}
	
	
}

void findPrimeNumbers(int numbers[10000], int upperLimit){
	
	int p = 0;
	 
	
	for(int i=0; i< upperLimit+1; i++){
		
		if (numbers[i]==0){
			break;
		}
		
		p = numbers[i];
		
		if( numbers[i]%p == 0){
			
	  for(int j = i ; j< upperLimit; j++){
	  	
		  numbers[j] = numbers[j+1];
		  
		}
	}
	}
	
}

void displayPrimeNumbers(int numbers[10000], int upperLimit){
	
	cout<<"\n\nThe prime numbers are -> ";
	
	for(int i = 0 ; i< upperLimit; i++){
	  	
		  cout<<numbers[i]<<"_";
		  
		}
	
}
