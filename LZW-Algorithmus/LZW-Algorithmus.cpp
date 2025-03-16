#include <iostream>
#include <vector>

#define vector std::vector
#define string std::string

int main()
{
	// Get Input and push it into a vector char by char
	string inputString;
	vector<char> InputHandler(string /*input*/);
	vector <char> charVector;
	// Compress the input
	vector <string> dictionary;

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

int LZW_Compress(vector<char> inputVector)
{
	char currentChar;
	string lastChar;

	int outputCode;





	return 0;
}

int LZW_Decompress(string input)
{
	return 0;
}