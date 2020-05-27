#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<string.h>
#include <stdio.h>
#include <ctype.h>


using namespace std;

void createList(int numbers[10000], int upperLimit);


int main(){

int upperLimit, again=5, numbers[10000];

while(again == 5){
again=0;

cout<<"Please enter upper limit number -> ";
cin>> upperLimit;
createList(numbers, upperLimit);

 cout<<"\n\nPress 5 to try again or other numbers to exit: ";
 cin>>again;
}
}

void createList(int numbers[10000], int upperLimit){
	
	//int size = 10000;
//	size = upperLimit;

	
	for(int i=2; i< upperLimit; i++){
		
		numbers[i] = i;
		cout<< numbers[i] <<"_";
	}
	
	
}
