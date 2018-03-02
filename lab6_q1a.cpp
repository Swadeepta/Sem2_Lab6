#include<iostream>
using namespace std;

int bsearch(int arr[],int l,int h,int k)       //func for binary search
{
    int m=(l+h)/2;
    if(k<arr[l]||k>arr[h])
    {
        return -1;
    }
    if(arr[m]==k)
    {
        return m;
    }
    else if(arr[m]>k)
    {
        bsearch(arr,0,(m-1),k);
    }
    else if(arr[m]<k)
    {
        bsearch(arr,m+1,h,k);
    }
    else                         //not required 
    {
        return -1;
    }
}

int main()                     //test program
{
    int x;
    cout<<"Enter length";
    cin>>x;
    int b[x];
    for(int i=0;i<x;i++)       //test array of given length
    {
        b[i]= i;
    }
    cout<<"choose key";
    int key;
    cin>>key;
    int ans=bsearch(b,0,x-1,key);
    cout<<ans;                     //-1 signifies match not found
    return 0;
}