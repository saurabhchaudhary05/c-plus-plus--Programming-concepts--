
Pooja is a teacher at a school, and she wants to maintain a record of student information in a file. She needs a program that allows her to input the details of multiple students and store them in a file named "sample.txt". Additionally, she wants to be able to retrieve and display the stored student information from the file.



Write a program that can assist Pooja in achieving her goal. Pooja to enter the number of students' information she wants to input. For each student, the program should ask for the student's roll number, name, and marks. The entered student information should be stored in the "sample.txt" file using the Write mode.



Once the student information is stored, the program should read the data from the "sample.txt" file using the Read mode and display the student details on the console. Each student's information should be displayed with their roll number, name, and marks.



File name: sample.txt



Note: This is a sample question asked in Capgemini.

Input format :
The first line of input consists of an array of size n.

The following lines consist of the roll number, name, and percentage of n students.

Output format :
The output displays the student's details.



Refer to the sample output for the formatting specifications.

Code constraints :
name[30]

Sample test cases :
Input 1 :
2
12
Angel
90
15
Thanu
98
Output 1 :
Reading Student information from the file:
Roll No.: 12
Name : Angel
Marks : 90
Roll No.: 15
Name : Thanu
Marks : 98

#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int rollNumber;
    string name;
    int marks;
};

int main() {
    int n;
  //  cout << "Enter the number of students: ";
    cin >> n;

    // Opening the file in Write mode
    ofstream file("sample.txt");

    // Prompting for each student's roll number, name, and marks
    for (int i = 0; i < n; i++) {
        Student student;
        //cout << "Enter roll number: ";
        cin >> student.rollNumber;
      //  cout << "Enter name: ";
        cin.ignore();
        getline(cin, student.name);
       // cout << "Enter marks: ";
        cin >> student.marks;

        // Writing student information to the file
        file << "Roll No.: " << student.rollNumber << endl;
        file << "Name : " << student.name << endl;
        file << "Marks : " << student.marks << endl;
    }

    // Closing the file
    file.close();

    // Reading Student information from the file
    cout << "Reading Student information from the file:" << endl;

    // Opening the file in Read mode
    ifstream readFile("sample.txt");

    string line;
    while (getline(readFile, line)) {
        cout << line << endl;
    }

    // Closing the file
    readFile.close();

    return 0;
}

