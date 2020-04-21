#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string.h>
#include <stdio.h>
#include <ctype.h>


using namespace std;


struct frequencyTable{

                char letter;

                double frequency;

} englishFrequency[25],ciphertextFrequency[1000];

void addEnglishFrequencyTable();
void makeCiphertextFrequencyTable(char ciphertext[1000]);



int main(){

 addEnglishFrequencyTable();
 
 char ciphertext[1000];

 
cout<<"Please enter ciphertext \n\n";
cin.getline (ciphertext,1000);

makeCiphertextFrequencyTable(ciphertext);


for( int i =0 ; i<26 ; i++){
cout<<ciphertextFrequency[i].letter<< "  "<< ciphertextFrequency[i].frequency<<endl;
}

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
 
 
 
 ciphertextFrequency[0].letter = 'a';
 ciphertextFrequency[1].letter = 'b';
 ciphertextFrequency[2].letter = 'c';
 ciphertextFrequency[3].letter = 'd';
 ciphertextFrequency[4].letter = 'e';
 ciphertextFrequency[5].letter = 'f';
 ciphertextFrequency[6].letter = 'g';
 ciphertextFrequency[7].letter = 'h';
 ciphertextFrequency[8].letter = 'i';
 ciphertextFrequency[9].letter = 'j';
 ciphertextFrequency[10].letter = 'k';
 ciphertextFrequency[11].letter = 'l';
 ciphertextFrequency[12].letter = 'm';
 ciphertextFrequency[13].letter = 'n';
 ciphertextFrequency[14].letter = 'o';
 ciphertextFrequency[15].letter = 'p';
 ciphertextFrequency[16].letter = 'q';
 ciphertextFrequency[17].letter = 'r';
 ciphertextFrequency[18].letter = 's';
 ciphertextFrequency[19].letter = 't';
 ciphertextFrequency[20].letter = 'u';
 ciphertextFrequency[21].letter = 'v';
 ciphertextFrequency[22].letter = 'w';
 ciphertextFrequency[23].letter = 'x';
 ciphertextFrequency[24].letter = 'y';
 ciphertextFrequency[25].letter = 'z';	
 
 for (int i =0 ; i<26; i++){
 	ciphertextFrequency[i].frequency = 0;
 }
 
}

void makeCiphertextFrequencyTable(char ciphertext[1000]){
	
	
	
	for (int i =0 ; i<strlen(ciphertext) ; i++){
		

		
	    if (ciphertext[i] == 'a'){
			ciphertextFrequency[0].frequency++ ;
		}
		
		else if (ciphertext[i] == 'b'){
			ciphertextFrequency[1].frequency++ ;
		}
		else if (ciphertext[i] == 'c'){
			ciphertextFrequency[2].frequency++ ;
		}
		else if (ciphertext[i] == 'd'){
			ciphertextFrequency[3].frequency++ ;
		}
		else if (ciphertext[i] == 'e'){
			ciphertextFrequency[4].frequency++ ;
		}
		else if (ciphertext[i] == 'f'){
			ciphertextFrequency[5].frequency++ ;
		}
		else if (ciphertext[i] == 'g'){
			ciphertextFrequency[6].frequency++ ;
		}
		else if (ciphertext[i] == 'h'){
			ciphertextFrequency[7].frequency++ ;
		}
		else if (ciphertext[i] == 'i'){
			ciphertextFrequency[8].frequency++ ;
		}
		else if (ciphertext[i] == 'j'){
			ciphertextFrequency[9].frequency++ ;
		}
		else if (ciphertext[i] == 'k'){
			ciphertextFrequency[10].frequency++ ;
		}
		else if (ciphertext[i] == 'l'){
			ciphertextFrequency[11].frequency++ ;
		}
		else if (ciphertext[i] == 'm'){
			ciphertextFrequency[12].frequency++ ;
		}
		else if (ciphertext[i] == 'n'){
			ciphertextFrequency[13].frequency++ ;
		}
		else if (ciphertext[i] == 'o'){
			ciphertextFrequency[14].frequency++ ;
		}
		else if (ciphertext[i] == 'p'){
			ciphertextFrequency[15].frequency++ ;
		}
		else if (ciphertext[i] == 'q'){
			ciphertextFrequency[16].frequency++ ;
		}
		else if (ciphertext[i] == 'r'){
			ciphertextFrequency[17].frequency++ ;
		}
		else if (ciphertext[i] == 's'){
			ciphertextFrequency[18].frequency++ ;
		}
		else if (ciphertext[i] == 't'){
			ciphertextFrequency[19].frequency++ ;
		}
		else if (ciphertext[i] == 'u'){
			ciphertextFrequency[20].frequency++ ;
		}
		else if (ciphertext[i] == 'v'){
			ciphertextFrequency[21].frequency++ ;
		}
		else if (ciphertext[i] == 'w'){
			ciphertextFrequency[22].frequency++ ;
		}
		else if (ciphertext[i] == 'x'){
			ciphertextFrequency[23].frequency++ ;
		}
		else if (ciphertext[i] == 'y'){
			ciphertextFrequency[24].frequency++ ;
		}
		else if (ciphertext[i] == 'z'){
			ciphertextFrequency[25].frequency++ ;
		}	

	}
	
	
}
