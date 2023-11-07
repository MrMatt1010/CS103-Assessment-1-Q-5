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

    cout << "a. Rectangle\n";
    cout << "b. Triangle";
    cout << "c. Square\n";
    cout << "d. None of the above";

    char userAnswer;
    cin >> userAnswer;

    // Clear the input buffer to prevent issues with the program crashing
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (tolower(userAnswer) == tolower(randomShape[0])) {
        cout << "Correct! You earned 10 points.\n";
        return 10;
    }
    else {
        cout << "Incorrect. The correct answer was: " << randomShape << "\n";
        return 0;
    }

}

// Function to display the final score for the user
void displayFinalScore(int score) {
    cout << "\nFinal Score: " << score << "\n";
}

int main(){



    return 0;
}
