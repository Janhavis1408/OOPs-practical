8. #include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    vector<int> marks = {75, 90, 65, 85, 80};

    // Sorting
    sort(marks.begin(), marks.end());

    cout << "Sorted Marks:\n";
    for (int m : marks)
        cout << m << " ";

    // Finding a mark
    auto it = find(marks.begin(), marks.end(), 90);

    if (it != marks.end())
        cout << "\n90 Marks Found\n";

    // Find marks greater than 75
    int count = count_if(marks.begin(), marks.end(),
        [](int m) { return m > 75; });

    cout << "Marks above 75: " << count << endl;

    // Transform
    vector<int> updated;
    transform(marks.begin(), marks.end(),
        back_inserter(updated),
        [](int m) { return m + 5; });

    cout << "Updated Marks:\n";
    for (int m : updated)
        cout << m << " ";

    // Map
    map<string, int> student;
    student["Aditi"] = 90;
    student["Rahul"] = 85;

    cout << "\n\nStudent Map:\n";
    for (auto p : student)
        cout << p.first << ": " << p.second << endl;

    // Unordered Map
    unordered_map<int, string> records;
    records[1] = "Aditi";
    records[2] = "Rahul";

    cout << "\nUnordered Map:\n";
    for (auto p : records)
        cout << p.first << ": " << p.second << endl;

    return 0;
}