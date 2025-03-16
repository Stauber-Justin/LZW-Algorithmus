#include <iostream>
#include <vector>

#define vector std::vector
#define string std::string

int main()
{
	// Get Input and push it into a vector char by char
	string inputString;
	vector<char> InputHandler(string /*input*/);
	vector<char> charVector;

	vector<int> LZW_Compress(vector<char> /*inputVector*/);
	vector<int> outputCodeVector;

	// Get Input
	std::cout << "Bitte gebe die zu komprimierende Zeichenfolge ein!\n";
	std::cin >> inputString;
	// CharVector for compression
	charVector = InputHandler(inputString);
	for (int i = 0; i < charVector.size(); i++)
	{
		std::cout << charVector[i] << "\n";
	}


	std::cout << "Dic0: " << charVector[0] << "\n";
	
	// Ausgabe des Komprimierungsergebnisses
	outputCodeVector = LZW_Compress(charVector);
	for (int i = 0; i < outputCodeVector.size() ; i++)
	{
		std::cout << "Output Code: " << outputCodeVector[i] << "\n";
	}


}

vector<char> InputHandler(string inputString)
{
	vector<char> inputVector;

	std::cout << "Die Eingabe lautet: " << inputString << "\n";

	for (char z : inputString)
	{
		inputVector.push_back(z);
	}

	return inputVector;
}

vector<int> LZW_Compress(vector<char> inputVector)
{
	string currentCharString;
	string lastCharString;

	vector<string> dictionary;
	vector<int> outputCode;


	// loop every character and compare with dictionary
	for (int charCount = 0; charCount < inputVector.size(); charCount++)
	{
		currentCharString = inputVector[charCount];
		// empty dictionary we set lastChar=current and push_back the current char.
		if (dictionary.size() == 0)
		{
			dictionary.push_back(currentCharString);
			lastCharString = inputVector[0];
		}

		if (dictionary[charCount] == currentCharString && charCount != 0)
		{
			outputCode.push_back(charCount);
			lastCharString = inputVector[charCount - 1];
		}
	}

	return outputCode;
}

int LZW_Decompress(string input)
{
	return 0;
}