//Write a program to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. (Use functions for each)
#include<iostream>
using namespace std;
int merger(int arr1[],int arr2[],int a,int b)           /*int s=(arr3,n);
                                            int t=(arr3,n);
                                            cout<<< s <<endl;
                                            cout<< t <<endl;*/
{
    int arr3[a+b], i=0;
    for(int f=0;f<(a+b);f++)
    {
      if(i>=0 && i<a){
            arr3[f]=arr1[i];
            i++;
      }
      else if (i>=a && i<(a+b))
        {
            arr3[f]=arr2[i-a];
            i++;
        }
        cout << arr3[f] <<endl;
    }
	int mx=arr3[0];
	for( int i=0; i<a+b; i++){
		if(mx< arr3[i]){
			mx= arr3[i];
		}
	}
	cout<< "The value of the maximum element among your entries is "<<mx<<endl;
	int min=arr3[0];
	for(int i=0; i< a+b; i++){
		if(min > arr3[i]){
			min=arr3[i];
		}
	}
	cout<<" The value of the maximum element among your entries is "<< min <<endl;
}
int main()
{
    int a,b;
    cout<< "How many elements do you want to take in the first array? "<<endl;
	cin>>a;
	int arr1[a-1];
	cout<<"Enter the +ve integers you want to take in the array:"<<endl;
		for(int i=0; i< a; i++)
		{
			cin>> arr1[i];
		}
    cout<< "How many elements do you want to take in the second array?"<<endl;
	cin>>b;
	int arr2[b-1];
	cout<<"Enter the +ve integers you want to take in the array:"<<endl;
		for(int i=0; i< b; i++)
		{
			cin>> arr2[i];
		}
    merger(arr1, arr2, a ,b);

    return 0;
}
