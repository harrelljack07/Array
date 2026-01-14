#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int scores[size];

    cout << "Input your scores: \n";
    for (int index = 0; index < size; index++)
    {
        cin >> scores[index]; 
    }
    
    cout << "Your scores were: ";
    for (int index = 0; index < size; index++)
    {
        cout << scores[index] << " ";
    }

    return 0;
}
