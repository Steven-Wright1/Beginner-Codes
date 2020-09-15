#include <iostream>
#include <string>

using namespace std; 

int numbersyllables(string word)
{
	int length;
	char dash ='-'; 
	int syllables; 
    int dashes = 0; 

	length = word.length();
	
	for (int i = 0; i < length; i++)
		{
		if (word[i] == dash) dashes++; 
		}
    
	syllables = dashes + 1; 
    return syllables; 
}


int main()
{

string word = "Hel-lo";

// Call function to count number of syllables
numbersyllables(word);
// Output results
cout << numbersyllables(word);             

return 0; 
}