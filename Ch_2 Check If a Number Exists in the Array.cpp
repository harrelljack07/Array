#include <iostream>
using namespace std; 

void number_exists(int number[], int size, int number_guess);

int main()
{
    const int size = 5;
    int number[size] = { 2, 3, 5, 7, 20 };

    int num_guess; 
    cout << "Enter a number to guess: ";
    cin >> num_guess; 

    number_exists(number, size, num_guess);

}
void number_exists(int number[], int size, int number_guess)
{
    bool found = false;

    for (int index = 0; index < size; index++)
    {
        if (number[index] == number_guess )
        {
            found = true; 
            break; 
        }
    }
    if (found)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }
}
