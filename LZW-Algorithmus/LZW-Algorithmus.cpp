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

    // Falls der Eingabe-Vektor leer ist, sofort zurückgeben.
    if (inputVector.empty())
        return outputCode;

    // Initialisierung mit dem ersten Zeichen
    currentCharString = string(1, inputVector[0]);
    dictionary.push_back(currentCharString);
    outputCode.push_back(0); // Der erste Eintrag hat Index 0
    lastCharString = currentCharString;

    // Ab dem zweiten Zeichen wird iteriert
    for (size_t currentChar = 1; currentChar < inputVector.size(); currentChar++)
    {
        currentCharString = string(1, inputVector[currentChar]);

        // Überprüfen, ob currentCharString bereits im Dictionary enthalten ist.
        vector<string>::iterator currentCharFindIterator = find(dictionary.begin(), dictionary.end(), currentCharString);

        if (currentCharFindIterator != dictionary.end())
        {
            // Gefunden: Index ermitteln und in outputCode speichern.
            int index = distance(dictionary.begin(), currentCharFindIterator);
            outputCode.push_back(index);
        }
        else
        {
            // Nicht gefunden: Füge currentCharString dem Dictionary hinzu.
            dictionary.push_back(currentCharString);

            // Ausgabe: Hier wird der Index des letzten verarbeiteten Strings genutzt.
            vector<string>::iterator lastCharFindIterator = find(dictionary.begin(), dictionary.end(), lastCharString);
            if (lastCharFindIterator != dictionary.end())
            {
                int index = distance(dictionary.begin(), lastCharFindIterator);
                outputCode.push_back(index);
            }
        }

        // Aktuellen String als letzten speichern.
        lastCharString = currentCharString;
    }

    return outputCode;
}

int LZW_Decompress(string input)
{
	return 0;
}