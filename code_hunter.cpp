//#include "pch.h" // This line only needed for console C++ project, omit this for Empty C++ Project.
#include <iostream>
#include <string>

using namespace std;


int main()
{
	//variables to count different aspects of the text
	string textToAnalyze;
	//easter egg 1, foo bar
	int foo = 0;
	int bar = 0;
	int vowels = 0;
	int consonants = 0;
	int digits = 0;
	int spaces = 0;
	int lengthOfStringSubmittedForAnalysis = 0;
	int unknownCharacters = 0;
	int checkSum = 0;
	

	//Welcome messages
	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	//Get user input, full line
	getline(cin, textToAnalyze);

	//For loop that analyzes input text
	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		//counts vowels, both upper and lower case
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			//Increases the vowels variable by one each time the code encounters a vowel in the analyzed text
			//Fixed by changing -- which decreases the count to ++ which increases the count
			++vowels;
		}
		//count the consonants a through z, however the vowels have been omited byt the previous line if statement
		else if ((textToAnalyze[i] >= 'a' && textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A' && textToAnalyze[i] <= 'Z'))
		{
			//Increases the consonants variable by one each time the code encounters a consonant in the analyzed text
			//Fixed by getting rid of the '//' which made it a comment
			++consonants;
		}
		//Counts the amount of numbers
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			//increase the digits variable by one each time the code encounters a number in the analyzed text
			++digits;
		}
		//counts the number of spaces
		else if (textToAnalyze[i] == ' ')
		{
			//increase the spaces variable by one each time the code encounters a space in the analyzed text
			++spaces;
		}
		//checks for any other characters not already analyzed
		else
		{
			//increase the unknown characters variable by one each time the code encounters one in the analyzed text
			++unknownCharacters;
		}
	}

	//A check to see if the program is working properly
	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();
	checkSum = unknownCharacters + vowels + consonants + digits + spaces;

	//Output for the user to see what the text contains
	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	//Output based on whether the checksum was confirmed or not
	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	else
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	system("pause");

	return 0;
}