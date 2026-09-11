#include <iostream>
using namespace std;
void printarray(int *arr,int n){
    for(int i=0;i<n;i++){
cout<<arr[i]<<endl;
    }
    cout<<endl;
}


int main()
{
    int arr[]={3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);

    int copyArr[n];
for(int i=0;i<n;i++){
        int j=n-i-1;
        copyArr[i]=arr[j];
    }
 for(int i=0;i<n;i++){
 arr[i]=copyArr[i];
 }

 printarray(arr,n);
    return 0;
}