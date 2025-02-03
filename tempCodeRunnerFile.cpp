#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of elements";
    cin>>n;
    int arr[n];
    cout<<"enter"<<n<<"elements";
    int sum=0;
    double avg;
    for(int i=0;i<n;i++){
        cin>> arr[i];
        sum+=arr[i];
        avg=sum/n;

    }
    cout<<"sum of array is "<<sum<<endl;
    cout<<"the average is"<<avg<<endl;
    return 0;
}