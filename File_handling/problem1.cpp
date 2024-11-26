#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

const string FILE_NAME = "players.txt";

// Function to create a new player list with random names
void createPlayersList(int numPlayers) {
    ofstream outFile(FILE_NAME);

    if (!outFile.is_open()) {
        cout << "Unable to open file for creating players list" << endl;
        return;
    }

    srand(time(nullptr));

    for (int i = 0; i < numPlayers; i++) {
        string playerName = "Player" + to_string(i + 1);
        outFile << playerName << endl;
    }

    outFile.close();
    cout << "Creating a new players list" << endl;
}

// Function to append additional players to the existing player list
void appendPlayers(int numPlayers) {
    ofstream outFile(FILE_NAME, ios::app);

    if (!outFile.is_open()) {
        cout << "Unable to open file for appending players" << endl;
        return;
    }

    srand(time(nullptr));

    for (int i = 0; i < numPlayers; i++) {
        string playerName = "Player" + to_string(rand() % 1000); // Random player name
        outFile << playerName << endl;
    }

    outFile.close();
    cout << "Adding more players to the list" << endl;
}

// Function to delete the entire player list
void deletePlayersList() {
    if (remove(FILE_NAME.c_str()) != 0) {
        cout << "Error while deleting the player list" << endl;
    } else {
        cout << "Deleting the player list which has been setup" << endl;
    }
}

// Function to read and print the players list
void readPlayersList() {
    ifstream inFile(FILE_NAME);

    if (!inFile.is_open()) {
        cout << "Unable to open file for reading players list" << endl;
        return;
    }

    string playerName;
    cout << "Printing the players list" << endl;
    while (getline(inFile, playerName)) {
        cout << playerName << endl;
    }

    inFile.close();
}

int main() {
    int choice, numPlayers;

    while (true) {
        cout << "Enter your choice:" << endl;
        cout << "1. Create Players List" << endl;
        cout << "2. Append Players" << endl;
        cout << "3. Delete Players List" << endl;
        cout << "4. Read Players List" << endl;
        cout << "5. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the number of players to add: ";
                cin >> numPlayers;
                createPlayersList(numPlayers);
                break;
            case 2:
                cout << "Enter the number of players to append: ";
                cin >> numPlayers;
                appendPlayers(numPlayers);
                break;
            case 3:
                deletePlayersList();
                break;
            case 4:
                readPlayersList();
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
Problem Statement

?

Mehaga wants to create a program to manage a list of players. The program should provide various operations such as creating a player list, appending new players, deleting the player list, and reading the player list.



Write a program that performs the following operations:



Create Players List: Creates a new players list by generating random player names. The user provides the number of players to be added to the list.

Append Players: Appends additional players to the existing player list.

Delete Players: Deletes the entire player list.

Read Players: Reads and prints the players list.

Implement the program using the provided functions and ensure error handling for file operations.



Error conditions and their messages:

If there was an issue with setup code, then print the message "Error while setting up data".

If you cannot open the file for read and write, then print the message "Unable to open file for" and append the appropriate task, i.e., create, delete, append, or read.

If there is an issue with closing a specific file then print the message "Error closing file for " and append the appropriate task i.e. create/delete/append/reading.

If there is an issue with closing both files, then print the message "Error closing files.".



Note: This is a sample question asked in a mPhasis interview.

Input format :
The input consists of the number of players to be added to the list (for the "Create Players List" operation).

Output format :
The output displays the following messages based on the performed operations:

"Deleting the player list which has been setup"

"Creating a new player list"

"Adding more players to the list"

"Printing the players list"



Refer to the sample output for formatting specifications.

Code constraints :
The number of players is a positive integer.

The maximum length of a player name is 32 characters.

The program should handle file open, write, append, read, and close operations correctly.

The program should display appropriate error messages if any file operations fail.

Sample test cases :
Input 1 :
10
Output 1 :
Deleting the players list which has been setup
Creating a new players list
Adding more players to the list
Printing the players list
