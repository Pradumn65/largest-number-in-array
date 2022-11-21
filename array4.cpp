// finding largest number in given array
#include<iostream>
using namespace std;
  
int main()
{
    
    
     cout<<"enter the size of array";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     int max=arr[0];
     for (int j = 1; j < n; j++)
     {
        if(arr[j]>max)
        {
            max=arr[j];
        }
     }
     cout<<"largest number is :"<<max;
     
    return 0;
}