//2. Write a program of to sort the array using templates.
#include<iostream>
using namespace std;

template <class S>
void sort(S a[], S n)
{
	S temp;
	S i, j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i]; 
				a[i]=a[j]; 
				a[j]=temp;
			}	
		}	
	}
	
}
main()
{
	int i, n;
	cout<<"\n\n\t Enter the size of the arrays : ";
    cin>>n;
	int a[n]; // Dynamically sized array declaration is not allowed, changing to a static size
	 printf("\n\n Enter elements of array ");
    for (i = 0; i < n; i++) {
        cout<<"\n\n a["<<i<<"] : ";
		cin>>a[i];
    }
	sort(a, n);
	printf("\n\n\t After sorting Array......");
	for(i=0;i<n;i++)
	{
		cout<<"\n\n\t a["<<i<<"] :"<<a[i];
	}	 
}
