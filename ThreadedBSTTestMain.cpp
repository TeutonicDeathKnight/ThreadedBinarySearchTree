//ThreadedBSTTestMain.cpp -- Test the threaded binary search tree data structure
//CSIS215 <D01_202520>

//Sources

#include <string>
#include <sstream>
#include "BST.h"

using namespace std;

void PauseScreen(); //Used to pause screen output

int main(int argc, char** argv) {

	cout << "Zachary Seeley -- CSIS 215 Programming Assignment 2 -- Threaded Binary Search Tree" << endl << endl;

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