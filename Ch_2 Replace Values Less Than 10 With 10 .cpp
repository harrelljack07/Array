#include <iostream>
using namespace std; 

void less_than_ten(int numbers[], int size);
int main()
{
	const int size = 5;
	int numbers[size] = { 5, 12, 8, 20, 3};

	less_than_ten(numbers, size);

}
void less_than_ten(int numbers[], int size)
{
	for (int index = 0; index < size; index++)
	{
		if (numbers[index] < 10)
		{
			cout << "10 ";
		}
		else
		{
			cout << numbers[index] << " ";
		}
	}
}
