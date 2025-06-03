// Create a class Student to store 5 student names using an array. Create a derived class
// Display that will show all student names using single inheritance. make simple program

#include <iostream>
#include <string>
using namespace std;
class Student {
    public:
        string std_names[5];
        void set_Names() {
            for (int i = 0; i < 5; i++) {
                cout << "Enter " << (i + 1) << " student name: ";
                getline(cin, std_names[i]);
            }
        }
        string* get_data() {
            return std_names;
        }
};

class Display : public Student {
    public:
        void display_data() {
            string* studentNames = get_data();
            cout << endl << "Student Names:" << endl;
            for (int i = 0; i < 5; i++) {
                cout << "Name of student " << (i + 1) << ": " << studentNames[i] << endl;
            }
        }
};

int main() {
    Display display;
    cout << endl << "----------------------" << endl;
    display.set_Names();
    cout << "----------------------" << endl ;
    cout << endl << "----------------------" << endl;
    display.display_data();
    cout << "----------------------" << endl;
    return 0;
}