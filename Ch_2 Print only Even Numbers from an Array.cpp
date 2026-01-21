#include <iostream>
using namespace std;

void even_numbers(int number[], int size);

int main()
{
    const int size = 5; 
    int number[size] = { 10, 15, 20, 25, 30};

    even_numbers(number, size);


}
void even_numbers(int number[], int size)
{
    for (int index = 0; index < size; index++)
    {
        if (number[index] % 2 == 0)
        {
            cout << number[index] << " ";
        }
    }
}
