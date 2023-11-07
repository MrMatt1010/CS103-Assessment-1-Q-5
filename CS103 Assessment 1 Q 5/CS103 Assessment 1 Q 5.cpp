// CS103 Assessment 1 Q 5
//Student Name: Matt Taylor
// This program is a Shape Guessing game as outlined by the brief 

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

//Function to display the main menu
void displayMenu() {
    cout << "\nMain Menu:\n";
    cout << "1.Play\n";
    cout << "2. Final Score\n";
    cout << "3. Exit Game\n";
}

// Function to generate a random shape and ask the user to identify it
int playGame(int &score) {
    string shapes[] = { "Rectangle","Triangle", "Square" };
    int randomIndex = rand() % 3;
    string randomShape = shapes[randomIndex];

    cout << "\nIdentify the shape:\n";

    if (randomShape == "Rectangle") {
        cout << "   ________\n";
        cout << "  |        |\n";
        cout << "  |________|\n";
    }
    else if (randomShape == "Triangle") {
        cout << "    /\\  \n";
        cout << "   /  \\  \n";
        cout << "  /____\\  \n";
    }
    else if (randomShape == "Square") {
        cout << "  ________\n";
        cout << " |        |\n";
        cout << " |        |\n";
        cout << " |________|\n";
    }

    return 0;
}
