#include <iostream>
#include <vector>

#define cout std::cout
#define cin std::cin

int main()
{
	std::vector<char> InputHandler();
	std::vector <std::string> dictionary;
	std::vector <char> charVector;

	char currentChar;
	std::string lastChar;

	int outputCode;

	charVector = InputHandler();

	for (int i = 0; i < charVector.size(); i++)
	{
		cout << charVector[i] << "\n";
	}


	cout << "Dic0: " << charVector[0] << "\n";

}

std::vector<char> InputHandler()
{
	std::string input;
	std::vector<char> inputVector;

	cout << "Bitte gebe die zu komprimierende Zeichenfolge ein!\n";
	cin >> input;
	cout << "Die Eingabe lautet: " << input << "\n";

	for (char z : input)
	{
		inputVector.push_back(z);
	}

	return inputVector;
}

int LZW_Compress(std::string input)
{

	return 0;
}

int LZW_Decompress(std::string input)
{
	return 0;
}