#include<iostream>
using namespace std;
int binarySearch(int arr[], int N, int K){
    int start = 0;
    int end = N-1;

    int mid = start + (end-start)/2;

    while (start <= end)
    {
        if (arr[mid] == K)
        {
            return mid;
        }

        if(arr[mid] > K){
            
            end = mid - 1;
        }   
        if(arr[mid] < K){
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int main(){
// int arr[4]={1,2,3,4};
// int index=binarySearch(arr,4,6);
// cout<<"The index of 6 is "<<index;
int N,K;
cout<<"Enter the Size of Array = ";
cin>>N;
cout<<"Enter the elements of Array:"<<endl;
int arr[N];
for(int i=0; i<N; i++){
    cin>>arr[i];
}
cout<<"Enter the Element You Want to Search = ";
cin>>K;
cout<<"Index of the Element you Entered is = "<<binarySearch(arr,N,K);
return 0;
}