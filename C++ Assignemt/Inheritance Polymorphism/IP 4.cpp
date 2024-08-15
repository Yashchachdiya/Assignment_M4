#include <iostream>
using namespace std;

class StudentInfo {
protected:
    string name;
    int rollNo;

public:
    void inputData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

class ExamMarks {
protected:
    int maths, science, english;

public:
    void inputData() {
        cout << "Enter maths marks: ";
        cin >> maths;
        cout << "Enter science marks: ";
        cin >> science;
        cout << "Enter english marks: ";
        cin >> english;
    }

    void displayData() {
        cout << "Maths: " << maths << endl;
        cout << "Science: " << science << endl;
        cout << "English: " << english << endl;
    }
};

class MarkSheet : public StudentInfo, public ExamMarks {
public:
    void displayMarkSheet() {
        cout << "Mark Sheet:" << endl;
        displayData();
        ExamMarks::displayData();
    }
};

int main() {
    MarkSheet ms;
    cout << "Enter student data:" << endl;
    ms.inputData();
    ms.ExamMarks::inputData();
    ms.displayMarkSheet();
    return 0;
}
