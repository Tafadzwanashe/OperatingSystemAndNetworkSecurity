#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

struct frequencyTable{

                char letter;

                double frequency;

} englishFrequency[25];

void addEnglishFrequencyTable();


int main(){

 addEnglishFrequencyTable();


cout<<"Please enter ciphertext \n\n";

for( int i =0 ; i<26 ; i++){


cout<<englishFrequency[i].letter<< "  "<< englishFrequency[i].frequency<<endl;

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
	
}
