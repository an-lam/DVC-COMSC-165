
#include <stdio.h>
#include <stdlib.h>

#define MAX_WORDS   1000
#define MAX_LEN     50

void mystrcpy(char destination[], char source[]);

bool mystrcmp(char str1[], char str1[]);

int main()
{

    // List of distinct words
    char words[MAX_WORDS][MAX_LEN] = {}; // init to 0
    char one_word[MAX_LEN];
	int  count[MAX_WORDS] = {};
	

	
    // Read characters into word until you hit a blank or newline
	one_word[i] = ....
	
	// copy one_word into words array
	mystrcpy(words[i], one_word);
	
	// Loop from 1 to number of words
	compare words[i] to the rest 
	update count[i]++ if there is same word
	
	// loop thru count array
	if (count[i] == 0)
		// the word is unique
	

    return 0;
}


void mystrcpy(char destination[], char source[])
{
	int i = 0;
    for (int i = 0; source[i] != 0; i++)
		destination[i] = source[i];
		
}


bool mystrcmp(char str1[], char str1[])
{
	
	// calculate the len of str1 and str2
	
	if (len_str1 != len_str2)
		return false;
	
	// compare each char in str1 and str2 until end
	// if there is any different character, return false
	
	return true;  // they are the same when we get here
}

