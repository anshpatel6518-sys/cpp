#include <iostream>
#include <string>
using namespace std;
class student
{
private:
    int rollnumber;
    string name;
    float marks;

public:
    // counstructor
    student()
    {
        rollnumber = 0;
        name = " ";
        marks = 0.0;
    }
    // member function to set data
    student(int r, string n, float m)
    {
        rollnumber = r;
        name = n;
        marks = m;
    }
    // function to input data
    void inputdata()
    {
        cout << "Enter roll number: ";
        cin >> rollnumber;
        cin.ignore(); // to ignore the newline character after roll number input
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter marks: ";
        cin >> marks;
    }
    // function to display data
    void displaydata()
    {
        cout << "Roll Number: " << rollnumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
    // destructor
    ~student()
    {
        cout << "Destructor called for roll number: " << rollnumber << endl;
    }
};
int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    // dynamic allocation of array of objects
    student *s = new student[n];
    // input data for each student
    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        s[i].inputdata();
    }
    // display data for each student
    for (int i = 0; i < n; i++)
    {
        cout << "Details of student " << i + 1 << ":" << endl;
        s[i].displaydata();
    }
    // deallocate memory
    delete[] s;
    return 0;
}