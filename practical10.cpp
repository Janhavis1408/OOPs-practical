10. #include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Writing student records
    ofstream fout("students.csv");

    fout << "RollNo,Name,Marks\n";
    fout << "1,Aditi,90\n";
    fout << "2,Rahul,85\n";
    fout << "3,Priya,95\n";

    fout.close();

    // Reading student records
    ifstream fin("students.csv");

    string line;

    cout << "Student Records:\n";

    while (getline(fin, line)) {
        cout << line << endl;
    }

    // File pointer operations
    cout << "\nFile Pointer Operations:\n";

    cout << "Initial Position: " << fin.tellg() << endl;

    fin.clear();
    fin.seekg(0, ios::beg);

    cout << "After seekg: " << fin.tellg() << endl;

    fin.seekg(0, ios::end);

    cout << "End Position: " << fin.tellg() << endl;

    fin.close();

    // Output file pointer operations
    ofstream file("demo.txt");

    file << "Hello C++ Programming";

    cout << "\nOutput Pointer: " << file.tellp() << endl;

    file.seekp(0, ios::beg);

    cout << "After seekp: " << file.tellp() << endl;

    file.close();

    return 0;
}