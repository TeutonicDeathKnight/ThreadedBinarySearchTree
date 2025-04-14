//ThreadedBSTTestMain.cpp -- Test the threaded binary search tree data structure
//CSIS215 <D01_202520>

//Sources

#include <string>
#include <sstream>
#include "BST.h"

using namespace std;

const int intVals[] = {77, 70, 75, 66, 79, 68, 67, 69, 90, 85, 83, 87, 65};
const string strVals[] = 
{ "seventy - seven", "seventy", "seventy-five", "sixty-six"
, "seventy-nine", "sixty-eight", "sixty-seven", "sixty-nine"
, "ninety", "eighty-five", "eighty-three", "eighty-seven", "sixty-five"};

void PauseScreen(); //Used to pause screen output

int main(int argc, char** argv) {

	cout << "Zachary Seeley -- CSIS 215 Programming Assignment 2 -- Threaded Binary Search Tree" << endl << endl;

	//create Threaded BST Dictionary
	BST<int, string>* dict = new BST<int, string>;
	
	string travType = "inorder";

	//verify dictionary was created
	dict->print(travType);

	//insert node values
	for (int i = 0; i < 13; i++) dict->insert(intVals[i], strVals[i]);


	
	//print dictionary
	dict->print(travType);

	//testing BST.h->findPredecessor()
	//dict->testPredecessor(intVals[4]);

	PauseScreen();

	return 0;
}

//Used to pause the screen wherever desired
void PauseScreen()
{
	char ch;
	cout << "\nPress the Enter key to continue ... ";
	cin.get(ch);
}