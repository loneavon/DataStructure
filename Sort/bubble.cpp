#include<stdio.h>
#include<iostream>

using namespace std;

void bubble(int a[10]) {
		int i;
		int temp;

		for(i=9;i>0;i--) {
				for(int j=0;j<i;j++) {
						if (a[j] < a[j+1]) {
								temp = a[j+1];
								a[j+1] = a[j];
								a[j] = temp;
						}
				}
		}
}





int main(void)
{
	int a[10] = {1,2,4,6,3,2,5,7,10,9};

	
	bubble(a);
	
	cout<<"the sort is:";
	for(int i=0;i<10;i++)
	{
			cout<<a[i]<<" ";
	}
	cout<<endl;

	
}
