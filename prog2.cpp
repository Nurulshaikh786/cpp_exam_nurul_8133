// Create a multilevel inheritance structure with:
// - Class 1: Student – to input student name
// - Class 2: Marks – to input marks of 3 subjects using array
// - Class 3: Result – to calculate and display total and percentage.

#include<iostream>
#include<string>
using namespace std;
class Student {
    public:
        string std_name;
        void input_Name() {
            cout << "Enter student name: ";
            getline(cin, std_name);
        }
};
class Marks : public Student{
    public:
        double marks[3];
        void input_Marks() {
            for (int i = 0; i < 3; i++) {
                cout << "Enter marks for subject " << (i + 1) << ": ";
                cin >> marks[i];
            }
        }
};
class Result : public Marks {
    public:
        void calculate_Result() {
            double total = 0;
            for (int i = 0; i < 3; i++) {
                total += marks[i];
            }
            double percentage = total / 3;
            cout << endl << "Student Name: " << std_name << endl;
            cout << "Total Marks: " << total << endl;
            cout << "Percentage: " << percentage << "%" << endl;
        }
};
int main() {
    Result result;
    cout << endl << "----------------------" << endl;
    result.input_Name();
    cout<<endl;
    result.input_Marks();
    cout << "----------------------" << endl;
    result.calculate_Result();
    cout << "----------------------" << endl;
    return 0;
}