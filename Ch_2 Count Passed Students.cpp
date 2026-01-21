#include <iostream>
using namespace std;

void students_passed(int marks[], int size);
int main()
{
    const int size = 5; 
    int numbers[size] = { 35, 78, 40, 22, 90 };

    students_passed(numbers, size);
    return 0; 
}
void students_passed(int marks_passed[], int size)
{
    int num_of_passed_students = 0;
    for (int index = 0; index < size; index++)
    {
        if (marks_passed[index] >= 40)
        {
            num_of_passed_students++;
        }
    }
    cout << "Number of passed students: " << num_of_passed_students; 
}

