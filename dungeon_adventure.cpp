//Author.....: Carlos Ortega
//Assignment.: Escape the Dungeon

#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int choice;
    char direction;
    bool hasKey = false;

    // Introduction
    cout << "Welcome to 'Escape the Dungeon'!\n";
    cout << "You find yourself trapped in a dark dungeon.\n";
    cout << "Your mission is to find a way out.\n\n";

    // First decision: Left or Right?
    cout << "\nThere are two routes in front of you. One to the (L)eft and one to the (R)ight.\n";
    cout << "Which way do you go? (L/R): ";
    cin >> direction;

    // Input validation
    if (direction != 'L' && direction != 'l' && direction != 'R' && direction != 'r') {
        cout << "Invalid direction. A dragon appeared and burnt you to a crisp... Game Over.\n";
        return 0;
    }

    if (direction == 'L' || direction == 'l') {
        cout << "\nYou walk cautiously to the left and find a key on the floor.\n";
        hasKey = true;
    } else {
        cout << "\nYou go right and find a locked door.\n";
        if (!hasKey) {
            cout << "You don't have a key! You are captured after a guard notices you ... Game Over.\n";
            return 0;
        }
    }

    // Major decision using switch
    cout << "\nYou approach a large wooden door. A voice echoes: \n";
    cout << "\"Answer this riddle to pass: I speak without a mouth and hear without ears.\n";
    cout << "I have no body, but I come alive with the wind.\n";
    cout << "What am I?\"\n";
    cout << "1. An echo\n2. A shadow\n3. A dream\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Correct! The door creaks open.\n";
            break;
        case 2:
        case 3:
            cout << "Wrong answer. The floor collapses and you fall to your death... Game Over.\n";
            return 0;
        default:
            cout << "Invalid choice. A pirate appears and stabs you... Game Over.\n";
            return 0;
    }

    // Final scenario
    if (hasKey) {
        cout << "\nYou use the key to open the final gate.\n";
        cout << "Your eyes are flooded with sunlight. You're out of the dungeon now!\n";
        cout << "Congratulations, " << name << "! You win!\n";
    } else {
        cout << "\nYou reach the final gate, but it's locked. You needed a key.\n";
        cout << "You're trapped forever! Game Over.\n";
    }

    return 0;
}