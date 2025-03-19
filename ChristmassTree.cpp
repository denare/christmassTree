/* 
  Desctiption: Christmass tree
  Date: 25th of December 2024
  It's D again
*/
#include <iostream>
#include <windows.h>
#include <thread>
#include <chrono>
using namespace std;

// Function to set the console text color
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Function to display blinking lights on the tree
void drawTree() {
    const int treeHeight = 10;
    int lightColor[] = {4, 2, 6, 3, 1}; // Red, Green, Yellow, Aqua, Blue
    int colorIndex = 0, i=5;
    
    while (i<=15) {
        system("cls"); // Clear the screen for blinking effect
        setColor(2);
         cout << "\n   MERRY CHRISTMASS!!"<< endl;
        cout << endl << endl;
        // Draw the tree
        for (int i = 0; i < treeHeight; ++i) {
            // Print spaces for alignment
            cout << string(treeHeight - i, ' ');

            // Print the tree level with decorations
            for (int j = 0; j <= i * 2; ++j) {
                if (j % 3 == 0) {
                    setColor(lightColor[(colorIndex + j / 3) % 5]); // Blinking lights
                    cout << "*";
                } else if (j % 5 == 0) {
                    setColor(6); // Yellow ornaments
                    cout << "O";
                } else {
                    setColor(2); // Green tree
                    cout << "^";
                }
            }
            cout << endl;
        }

        // Draw the tree trunk
        setColor(6); // Brown trunk
        for (int i = 0; i < 2; ++i) {
            cout << string(treeHeight - 1, ' ') << "###" << endl;
        }

        // Reset color for the console
        setColor(7); // White

        // Increment color index for blinking effect
        colorIndex++;

        // Delay for blinking effect
        this_thread::sleep_for(chrono::milliseconds(500));
        i++;
    }
}

int main() {
	cout << "\n  LOADING,, Please wait...";
    this_thread::sleep_for(chrono::seconds(2)); // Delay before starting
    drawTree(); // Draw the blinking Christmas tree
    cout << endl;
    cout << "Yours sincerely Denis D\n";
    setColor(6);
    system("pause");
    return 0;
}
