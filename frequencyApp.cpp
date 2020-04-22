#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string.h>
#include <stdio.h>
#include <ctype.h>


using namespace std;


struct frequencyTable{

                char letter , inputletter;

                double frequency;
                int inputfrequency;
               

} englishFrequency[25];

void addEnglishFrequencyTable();
void makeCiphertextFrequencyTable(char ciphertext[1000]);
void sortCipherFrequency();
void showOriginalText(char ciphertext[1000]);

int main(){

 addEnglishFrequencyTable();
 
 char ciphertext[1000];

 
cout<<"Please enter ciphertext \n\n";
cin.getline (ciphertext,1000);

for (int i=0 ; i< strlen(ciphertext) ; i++) {
	
	ciphertext[i] = tolower(ciphertext[i]);
}


makeCiphertextFrequencyTable(ciphertext);
sortCipherFrequency();
showOriginalText(ciphertext);

return 0;
}


void addEnglishFrequencyTable(){
	
 englishFrequency[0].letter = 'e';
 englishFrequency[0].frequency = 12.7;
 
 englishFrequency[1].letter = 't';
 englishFrequency[1].frequency = 9.1;
 
 englishFrequency[2].letter = 'a';
 englishFrequency[2].frequency = 8.2;
 
 englishFrequency[3].letter = 'o';
 englishFrequency[3].frequency = 7.5;
 
 englishFrequency[4].letter = 'i';
 englishFrequency[4].frequency = 7;
 
 englishFrequency[5].letter = 'n';
 englishFrequency[5].frequency = 6.7;
 
 englishFrequency[6].letter = 's';
 englishFrequency[6].frequency = 6.3;
 
 englishFrequency[7].letter = 'h';
 englishFrequency[7].frequency = 6.1;
 
 englishFrequency[8].letter = 'r';
 englishFrequency[8].frequency = 6.0;
 
 englishFrequency[9].letter = 'd';
 englishFrequency[9].frequency = 4.3;
 
 englishFrequency[10].letter = 'l';
 englishFrequency[10].frequency = 4;
 
 englishFrequency[11].letter = 'c';
 englishFrequency[11].frequency = 2.8;
 
 englishFrequency[12].letter = 'u';
 englishFrequency[12].frequency = 2.8;
 
 englishFrequency[13].letter = 'm';
 englishFrequency[13].frequency = 2.4;
 
 englishFrequency[14].letter = 'w';
 englishFrequency[14].frequency = 2.4;
 
 englishFrequency[15].letter = 'f';
 englishFrequency[15].frequency = 2.2;
 
 englishFrequency[16].letter = 'g';
 englishFrequency[16].frequency = 2;
 
 englishFrequency[17].letter = 'y';
 englishFrequency[17].frequency = 2;
 
 englishFrequency[18].letter = 'p';
 englishFrequency[18].frequency = 1.9;
 
 englishFrequency[19].letter = 'b';
 englishFrequency[19].frequency = 1.5;
 
 englishFrequency[20].letter = 'v';
 englishFrequency[20].frequency = 1;
 
 englishFrequency[21].letter = 'k';
 englishFrequency[21].frequency = 0.8;
 
 englishFrequency[22].letter = 'j';
 englishFrequency[22].frequency = 0.15;
 
 englishFrequency[23].letter = 'x';
 englishFrequency[23].frequency = 0.15;
 
 englishFrequency[24].letter = 'q';
 englishFrequency[24].frequency = 0.1;
 
 englishFrequency[25].letter = 'z';
 englishFrequency[25].frequency = 0.07;
 
 
 
 englishFrequency[0].inputletter = 'a';
 englishFrequency[1].inputletter = 'b';
 englishFrequency[2].inputletter = 'c';
 englishFrequency[3].inputletter = 'd';
 englishFrequency[4].inputletter = 'e';
 englishFrequency[5].inputletter = 'f';
 englishFrequency[6].inputletter = 'g';
 englishFrequency[7].inputletter = 'h';
 englishFrequency[8].inputletter = 'i';
 englishFrequency[9].inputletter = 'j';
 englishFrequency[10].inputletter = 'k';
 englishFrequency[11].inputletter = 'l';
 englishFrequency[12].inputletter = 'm';
 englishFrequency[13].inputletter = 'n';
 englishFrequency[14].inputletter = 'o';
 englishFrequency[15].inputletter = 'p';
 englishFrequency[16].inputletter = 'q';
 englishFrequency[17].inputletter = 'r';
 englishFrequency[18].inputletter = 's';
 englishFrequency[19].inputletter = 't';
 englishFrequency[20].inputletter = 'u';
 englishFrequency[21].inputletter = 'v';
 englishFrequency[22].inputletter = 'w';
 englishFrequency[23].inputletter = 'x';
 englishFrequency[24].inputletter = 'y';
 englishFrequency[25].inputletter = 'z';	
 
 for (int i =0 ; i<26; i++){
 	englishFrequency[i].inputfrequency = 0;
 }
 
}

void makeCiphertextFrequencyTable(char ciphertext[1000]){
	
	
	
	for (int i =0 ; i<strlen(ciphertext) ; i++){
		

		
	    if (ciphertext[i] == 'a'){
			englishFrequency[0].inputfrequency++ ;
		}
		
		else if (ciphertext[i] == 'b'){
			englishFrequency[1].inputfrequency++ ;
		}
		else if (ciphertext[i] == 'c'){
			englishFrequency[2].inputfrequency++ ;
		}
		else if (ciphertext[i] == 'd'){
			englishFrequency[3].inputfrequency++ ;
		}
		else if (ciphertext[i] == 'e'){
			englishFrequency[4].inputfrequency++ ;
		}
		else if (ciphertext[i] == 'f'){
			englishFrequency[5].inputfrequency++ ;
		}
		else if (ciphertext[i] == 'g'){
			englishFrequency[6].inputfrequency++ ;
		}
		else if (ciphertext[i] == 'h'){
			englishFrequency[7].inputfrequency++ ;
		}
		else if (ciphertext[i] == 'i'){
			englishFrequency[8].inputfrequency++ ;
		}
		else if (ciphertext[i] == 'j'){
			englishFrequency[9].inputfrequency++ ;
		}
		else if (ciphertext[i] == 'k'){
			englishFrequency[10].inputfrequency++ ;
		}
		else if (ciphertext[i] == 'l'){
			englishFrequency[11].inputfrequency++ ;
		}
		else if (ciphertext[i] == 'm'){
			englishFrequency[12].inputfrequency++ ;
		}
		else if (ciphertext[i] == 'n'){
			englishFrequency[13].inputfrequency++ ;
		}
		else if (ciphertext[i] == 'o'){
			englishFrequency[14].inputfrequency++ ;
		}
		else if (ciphertext[i] == 'p'){
			englishFrequency[15].inputfrequency++ ;
		}
		else if (ciphertext[i] == 'q'){
			englishFrequency[16].inputfrequency++ ;
		}
		else if (ciphertext[i] == 'r'){
			englishFrequency[17].inputfrequency++ ;
		}
		else if (ciphertext[i] == 's'){
			englishFrequency[18].inputfrequency++ ;
		}
		else if (ciphertext[i] == 't'){
			englishFrequency[19].inputfrequency++ ;
		}
		else if (ciphertext[i] == 'u'){
			englishFrequency[20].inputfrequency++ ;
		}
		else if (ciphertext[i] == 'v'){
			englishFrequency[21].inputfrequency++ ;
		}
		else if (ciphertext[i] == 'w'){
			englishFrequency[22].inputfrequency++ ;
		}
		else if (ciphertext[i] == 'x'){
			englishFrequency[23].inputfrequency++ ;
		}
		else if (ciphertext[i] == 'y'){
			englishFrequency[24].inputfrequency++ ;
		}
		else if (ciphertext[i] == 'z'){
			englishFrequency[25].inputfrequency++ ;
		}}}
	
void sortCipherFrequency(){
	
	
	
for( int i =0 ; i<26 ; i++){
cout<<englishFrequency[i].inputletter<< "  "<< englishFrequency[i].inputfrequency<<endl;
}

	
	char temp;
	int tempn;
     for( int s=0; s<25; s++){	
     for(int i=0; i<24; i++){
              
                                     
     if(englishFrequency[i].inputfrequency < englishFrequency[i+1].inputfrequency){
             
			 tempn = englishFrequency[i].inputfrequency;
			 englishFrequency[i].inputfrequency = englishFrequency[i+1].inputfrequency;
             englishFrequency[i+1].inputfrequency = tempn;
             
             temp = englishFrequency[i].inputletter;
             englishFrequency[i].inputletter = englishFrequency[i+1].inputletter;
             englishFrequency[i+1].inputletter = temp;
             
}}}
	
	for( int i =0 ; i<26 ; i++){
   cout<<englishFrequency[i].letter<<"  "<<englishFrequency[i].frequency<<" --> "<<englishFrequency[i].inputletter<< "  "<< englishFrequency[i].inputfrequency<<endl;
    }


	
	}
	
	void showOriginalText(char ciphertext[1000]){
		
		char temp;
		for (int i =0 ; i<strlen(ciphertext) ; i++){
			
			for(int j=0 ; j<26 ; j++){

	    if (ciphertext[i] == englishFrequency[j].inputletter){
			ciphertext[i] = englishFrequency[j].letter;
			break;
		}}}
		cout<<"\n\n"<<ciphertext;
}
