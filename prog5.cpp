// Create a menu-driven program that performs the following using a vector of strings:
// - Add a student name
// - View all student names
// - Delete student name by index
#include <iostream>
#include <vector>
using namespace std;

void add_name(vector<string> &student){
    string std_name;
    cin.ignore();
    cout<<"Enter Student Name : ";
    getline(cin,std_name);
    student.push_back(std_name);
}

void display_std_name(vector<string> &student){
    cout<<"Students Names are : "<<endl;
    for (int i = 0; i < student.size(); i++)
    {
        cout<<i+1<<" : "<<student[i]<<" "<<endl;
    }
}

void delete_std(vector<string> &student){
    int index;

    cout<<"Enter student index no. to remove : ";
    cin>>index;

    if(index < 0 && index > student.size()){
        cout<<"Wrong Input";
    }
    else
    {
        student.erase(student.begin()+ index-1);
        cout<<"Student Deleted !"<<endl;
    }
}
    

   
    int main(){
    int choice;
    vector<string> students;
    cout << "Welcome to the Student Management System" << endl;

    do
    {
        cout << "----------------------------" << endl;
        cout << "Enter 1 For Add Student Name " << endl;
        cout << "Enter 2 For Display all Student Names" << endl;
        cout << "Enter 3 For Delete Student Name by Index" << endl;
        cout << "Enter 4 For Exit" << endl;
        cout << "----------------------------" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
            add_name(students);
            break;
             
            case 2: 
            display_std_name(students);
            break;
             
            case 3: delete_std(students);
            break;
                
 
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);
    return 0;
    }

