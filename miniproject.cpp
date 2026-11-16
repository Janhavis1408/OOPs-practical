
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    int age;
    float marks;

public:

    // Add Student
    void addStudent()
    {
        cout << "\nEnter Roll Number: ";
        cin >> rollNo;

        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Marks: ";
        cin >> marks;

        cout << "\nStudent Added Successfully!\n";
    }

    // Display Student
    void displayStudent()
    {
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nMarks: " << marks << endl;
    }

    // Search Student
    bool searchStudent(int r)
    {
        if (rollNo == r)
        {
            displayStudent();
            return true;
        }
        return false;
    }

    // Update Student
    void updateStudent()
    {
        cin.ignore();

        cout << "Enter New Student Name: ";
        getline(cin, name);

        cout << "Enter New Age: ";
        cin >> age;

        cout << "Enter New Marks: ";
        cin >> marks;

        cout << "\nStudent Updated Successfully!\n";
    }

    // Delete Student
    int getRollNo()
    {
        return rollNo;
    }
};

int main()
{
    Student s[50];

    int choice;
    int count = 0;
    int r;
    bool found;

    do
    {
        cout << "\n================================";
        cout << "\n    STUDENT MANAGEMENT SYSTEM";
        cout << "\n================================";

        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            // Add Student
            case 1:

                if (count < 50)
                {
                    s[count].addStudent();
                    count++;
                }
                else
                {
                    cout << "\nStudent Limit Reached!";
                }
                break;

            // Display Students
            case 2:

                if (count == 0)
                {
                    cout << "\nNo Student Records Available!";
                }
                else
                {
                    for (int i = 0; i < count; i++)
                    {
                        s[i].displayStudent();
                    }
                }
                break;

            // Search Student
            case 3:

                cout << "\nEnter Roll Number to Search: ";
                cin >> r;

                found = false;

                for (int i = 0; i < count; i++)
                {
                    if (s[i].searchStudent(r))
                    {
                        cout << "\nStudent Found!";
                        found = true;
                        break;
                    }
                }

                if (!found)
                {
                    cout << "\nStudent Not Found!";
                }
                break;

            // Update Student
            case 4:

                cout << "\nEnter Roll Number to Update: ";
                cin >> r;

                found = false;

                for (int i = 0; i < count; i++)
                {
                    if (s[i].searchStudent(r))
                    {
                        s[i].updateStudent();
                        found = true;
                        break;
                    }
                }

                if (!found)
                {
                    cout << "\nStudent Not Found!";
                }
                break;

            // Delete Student
            case 5:

                cout << "\nEnter Roll Number to Delete: ";
                cin >> r;

                found = false;

                for (int i = 0; i < count; i++)
                {
                    if (s[i].getRollNo() == r)
                    {
                        for (int j = i; j < count - 1; j++)
                        {
                            s[j] = s[j + 1];
                        }

                        count--;
                        found = true;

                        cout << "\nStudent Deleted Successfully!";
                        break;
                    }
                }

                if (!found)
                {
                    cout << "\nStudent Not Found!";
                }
                break;

            // Exit
            case 6:

                cout << "\nThank You! Exiting Program...";
                break;

            default:

                cout << "\nInvalid Choice! Try Again.";
        }

    } while (choice != 6);

    return 0;
}
