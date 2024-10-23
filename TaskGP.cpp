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
    int result = arr[0];
    for (int i = 1; i < size; ++i)
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
        cout << "Error: cannot divide by zero!" << endl;
        return 0;
    }
    return x / y;
}

int sqrPower(int x)
{
    return x * x;
}

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int modulas(int x, int y)
{
    if (y == 0)
    {
        cout << "Error: cannot divide by zero!" << endl;
        return 0;
    };
    return x % y;
}

int main()
{
    int size;
    int num;
    char cont;
    char operation;

    do
    {
        cout << "please select operation you want to do (+ , - , / , % , ^, ^^)" << '\n';
        cin >> operation;

        switch (operation)
        {
        case '/': {
            cout << "please enter your numbers" << '\n';
            int fnum, lnum;
            cin >> fnum;
            cin >> lnum;
            cout << "the final result is: " << division(fnum, lnum) << '\n';
            break;
        }
        case '^^': {
            cout << "please enter your numbers" << '\n';
            int fnum, lnum;
            cin >> fnum;
            cin >> lnum;
            cout << "the final result is: " << power(fnum, lnum) << '\n';
            break;
        }
        case '%': {
            cout << "please enter your numbers" << '\n';
            int fnum, lnum;
            cin >> fnum;
            cin >> lnum;
            cout << "the final result is: " << modulas(fnum, lnum) << '\n';
            break;
        }
        case '^': {
            cout << "please enter your numbers to get the square" << '\n';
            cin >> num;
            cout << "the final result is: " << sqrPower(num) << '\n';
            break;
        }
        case '+': {
            cout << "how many number you want to sum" << '\n';
            cin >> size;
            int* arr = new int[size];

            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            cout << "the final result is: " << sum(arr, size) << '\n';
            break;
        }
        case '-': {
            cout << "how many number you want to Subtract" << '\n';
            cin >> size;
            int* arr = new int[size];

            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            cout << "the final result is: " << subtract(arr, size) << '\n';
            break;
        }
        case '*': {
            cout << "how many number you want to Multiply" << '\n';
            cin >> size;
            int* arr = new int[size];

            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            cout << "the final result is: " << multiply(arr, size) << '\n';
            break;
        }

        default:
            cout << "invalid input! please enter one of the operations";
            break;
        }
        cout << "Press any key to continue or \"q\" to quit\n";
        cin >> cont;
    } while (cont != 'q');
    return 0;
}