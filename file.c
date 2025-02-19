#include<string.h>
#include<iostream>
#include<cstring>
#include<unistd.h>

// check: strlen(), strcpy(), strcmp(), strcat()
// use a C online compiler to practice;
// cstring in C++ VS string.h in C;

// check why using string.h instead of cstring ?
// check why using unistd.h ;
// check how to use iostream in C language with write function
// and with printf function;

using namespace std;

int main(void) {
	string[] str;
	char character;
	cout << "Enter the string and then the character\n" << endl;
	cin >> str;
	cin >> character;
	cout << charIndex(str, character);
    return 1;
}

int charIndex (char const string[], char character) {
	if (string == NULL) {
		return -1;
	}
	int index = 0;
	while (string[index] != '\0') {
		if (string[index] == character) {
		       return index;	
		}
		index++;
	}
}

// Comprendre le problème posé:
// Inputs: string and character 
// Problème: trouver le premier indice dans string 
// tel que string[i] = character;
//
