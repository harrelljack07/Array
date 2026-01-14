#include <iostream>
using namespace std;

int main()
{
    const int size = 5; 
    int steps[size];
    int total = 0; 

    cout << "Enter the step counts: \n";

    for (int index = 0; index < size; index++)
    {
        cin >> steps[index];
        total += steps[index];
    }
    cout << "Steps: ";
    for (int index = 0; index < size; index++)
    {
        cout << steps[index] << " ";
    }

    cout << "\nTotal: " << total; 
    



}

