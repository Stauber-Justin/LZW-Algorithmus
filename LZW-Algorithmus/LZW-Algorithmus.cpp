#include <iostream>
#include <vector>

#define cout std::cout
#define cin std::cin

int main()
{
	std::vector <std::string> dictionary;
	std::string input;
	cout << "Bitte gebe die zu komprimierende Zeichenfolge ein!\n";
	cin >> input;
	cout << "Die Eingabe lautet: " << input << "\n";
	dictionary.push_back(input);

	for (int i = 0; i < dictionary.size(); i++)
	{
		cout << dictionary[i] << "\n";
	}

	cout << dictionary[0] << "\n";

}

int LZW_Compress(std::string input)
{
	return 0;
}

int LZW_Decompress(std::string input)
{
	return 0;
}