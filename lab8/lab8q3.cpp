#include<iostream>
using namespace std;
//arrange the array into ascending order
void ascendant(int arr[],int n)
{
    int a,b,c;
    for(b=0;b<n;b++)
    {
        for(a=b;a<n;a++)
        {
            if(arr[b]>arr[a])
            {
                c=arr[b];
                arr[b]=arr[a];
                arr[a]=c;
            }
        }
    }
}
int klarge(int arr[],int n,int k)
{
    return arr[n-k];
}
int ksmall(int arr[],int n,int k)
{
    return arr[k-1];
}
int main()
{
    int n;
    int k;
    cout<<"enter the number of the elements in the array "<<endl;
    cin>>n;
    int arr[n-1];
    cout<<"enter the value of k for the kth largest and smallest element"<<endl;
    cin>>k;

    cout<<"enter the element of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ascendant(arr,n);
    cout<<"the "<<k<<" th largest element is "<<klarge(arr,n,k)<<endl;
    cout<<"the "<<k<<" th smallest element is "<<ksmall(arr,n,k)<<endl;
    return 0;
}
