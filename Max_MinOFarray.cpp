#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of elements";
    cin>>n;
    int arr[n];
    cout<<"enter"<<n<<"elements";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
     int maxElement = arr[0];
    int minElement = arr[0];

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

    cout << "Maximum element: " << maxElement << endl;
    cout << "Minimum element: " << minElement << endl;

    return 0;
}