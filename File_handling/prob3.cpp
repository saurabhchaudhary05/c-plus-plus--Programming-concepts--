Jenifer has a text file named "ages.txt" that contains the ages of individuals, where you can enter up to 20 users ages as space- separated integers. She needs to write a program to read this file, calculate the average age, and display it. Help her with the task.

Fill your code here

Clear

Note: Calculate the sum of integer ages and store the sum in a floating-point variable.

Input format:

The first line consists of an integer n representing the total number of individuals ages to calculate the average for. The second line consists of n space-separated positive integers, each representing an individual's age.
The output prints the average age rounded off to one decimal

place.

If n exceeds 20, the output prints "Exceeding limit!"


Code in c++



#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n, age;
    float sum = 0.0, average;
    ifstream infile("ages.txt");

    infile >> n;

    if (n > 20) {
        cout << "Exceeding limit!";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        infile >> age;
        sum += age;
    }

    average = sum / n;

    cout << "Average age: " << average << endl;

    infile.close();

    return 0;
}

