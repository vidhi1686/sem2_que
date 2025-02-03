#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
     
    int arr[n];

    cout << "Enter " << n << " elements: ";
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];


    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
        if (arr[i] < minElement)
        {
            minElement = arr[i];
        }
    }
}
