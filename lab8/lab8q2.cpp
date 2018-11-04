#include<iostream>
using namespace std;

//defining the function
//defining array
//return the sum
int fx(int arr[], int n){
	int sum=0,mean;
		for(int i=0; i< n ;i++){
			sum= (sum+ arr[i]);
		}
		return mean= sum/n;
}
int gx(int arr[], int n){
	int mx=arr[0];
	for( int i=0; i< n; i++){
		if(mx< arr[i]){
			mx= arr[i];
		}
	}
	return mx;
	
}
int hx(int arr[], int n){
	int min=arr[0];
	for(int i=0; i< n; i++){
		if(min > arr[i]){
			min=arr[i];
		}
	}
	return min;
}
float kx(int arr[], int n){
	int i,j, temp;
	for(i=0;i<n;i++){		
			for(j=i+1;j<n;j++){
				
				if(arr[i]>arr[j]){
					temp  =arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
	}
//to return the central most value
	float med;
	if(n%2==0){
		med=(arr[n/2-1] + arr[n/2])/2;
	}
	else if(n%2==1){
		med=(arr[(n+1)/2]);
	}
	return med;
} 
int frqx(int arr[], int n){
	 int i,j;
	 int fre=1;
	 int mxfrq=0;
	 int mode=arr[0];
	 int num=arr[0];
	 for(i=1;i<n;i++)
	 {
	 	if(arr[i]==num)
	 	fre++;
	 	else
	 	{
	 		if(fre>mxfrq)
	 		{
	 			mxfrq=fre;
	 		    mode=num;
	 		}
	 		fre=1;
	 		num=arr[i];
	 	}
	 }
	 if(fre>mxfrq)
	 	mode=num;
	return mode;
}
	 		fre=1;
	 		num=a[j];
	 	int count=1;
	 	for(j=i;;j++)
	 	{
			if(arr[i] == arr[j])
				count++;
			else
				break;
		}
		if(mxfrq < count)
				mxfrq = count;
		}
		i=j;
	}
	return mxfrq;
}														
								
int main(){
	int n;
	cout<< "How many elements do you want to take in the array?"<<endl;
	cin>>n;
	int arr[n-1];
	cout<<"Enter the +ve integers you want to take in the array:"<<endl;
		for(int i=0; i< n; i++){
			cin>> arr[i];
		}
	int A=kx(arr,n);
	int r=fx(arr,n);
	int s=gx(arr,n);
	int t=hx(arr,n);
	float u=kx(arr,n);
	int B=frqx(arr,n); 
	cout<< "The mean of the elements of the array is "<< r <<endl;
	cout<< "The value of the maximum element among your entries is "<< s <<endl;
	cout<< "The value of the minimum element among your entries is "<< t <<endl;
	cout<< "The value of the median element among your entries is "<< u <<endl;
	cout<< "The element with the highest frequency is "<< B <<endl;
	return 0;
}
