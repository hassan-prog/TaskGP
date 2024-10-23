#include <iostream>
using namespace std;

int sum(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; ++i) {
        result += arr[i];
    }
    return result;
}

int subtract(int arr[], int size){
    int result = 0;
    for (int i = 0; i < size; ++i) {
        result -= arr[i];
    }
    return result;
}

int multiply(int arr[], int size){
    int result = 0;
    for (int i = 0; i < size; ++i) {
        result *= arr[i];
    }
    return result;
}

int division(int x , int y)
{
    return x/y;
}

int sqrPower(int x)
{
    return x*x;
}

int modulas(int x, int y)
{
 return x%y; 
}

int main()
{

}