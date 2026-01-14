#include <iostream>
using namespace std;

int main()
{
    const int size = 5;

    int student_marks[size];

    cout << "Enter 5 marks: \n";
    for (int index = 0; index < size; index++)
    {
        cin >> student_marks[index];
    }

    cout << "Marks entered:\n";
    for (int index = 0; index < size; index++)
    {
        cout << student_marks[index] << " ";
    }
    
    return 0;
}

