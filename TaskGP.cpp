#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
    int result = 0;
    for (int i = 0; i < size; ++i)
    {
        result += arr[i];
    }
    return result;
}

int subtract(int arr[], int size)
{
    int result = 0;
    for (int i = 0; i < size; ++i)
    {
        result -= arr[i];
    }
    return result;
}

int multiply(int arr[], int size)
{
    int result = 0;
    for (int i = 0; i < size; ++i)
    {
        result *= arr[i];
    }
    return result;
}

int division(int x, int y)
{
    if (y == 0)
    {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return x / y;
}

int sqrPower(int x)
{
    return x * x;
}

int modulas(int x, int y)
{
    if (y == 0)
    {
        cout << "Error: Division by zero!" << endl;
        return 0;
    };
    return x % y;
}

int main()
{
    int size;
    
    cout << "Enter the number of values: ";
    cin >> size;

    int* arr = new int[size];
}