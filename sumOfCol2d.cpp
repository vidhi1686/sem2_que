// Calculate and print sum of each coloumn
#include <iostream>
using namespace std;
int main()
{
    int arr[3][3], i, j;
    cout << "provide array elements";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum=0;
    for(int j=0;j<3;j++){
        for(int i=0;i<3;i++){
            sum+=arr[i][j];
        }
        cout<<"Sum of col"<<j+1<<"="<<sum<<endl;
    }
    return 0;
}