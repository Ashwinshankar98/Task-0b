#include<iostream.h>

int main()
{
	int x,a[10],n,i,j;
	char ch='y';
	while(ch=='y')
	{
		cout<<"enter the amount of cloths in the stack";
		cin>>n;
		
		cout<<"THE SIMULATION ONE ...."<<endl;
		cout<<"enter the sizes of clothes in the stack";
		for(i=0;i<n;i++)
			cin>>a[i];
		cout<<endl<<"the stack of clothes present is"<<endl;
		 for(i=n-1;i>=0;i--)
			cout<<a[i]<<endl;
		cout<<endl<<"enter the amount of cloth required by the customer";
		cin>>x;
		cout<<endl;
	     for(j=n-1;j>=0;j--)
		 {
			 if(a[j]>=x)
			 {
				 cout<<"the cloth "<<n-j+1<<" from the top should be chosen";
			 }
			 break;
		 }
         a[j]=a[j]-x;
        cout<<"the updated stack of cloths is";
         for(i=n-1;i>=0;i--)
			cout<<a[i]<<endl;
        cout<<"do you want to continue (y/n)";
        cin>>ch;
	}   
			 