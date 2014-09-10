#include<string.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int QuickPass(int * a, int left, int right)
{
		int low = left;
		int high = right;
		int temp;


		while(low < high) {
				while(*(a+high) >= *(a+low) && low < high)
						high--;
				temp = *(a+low);
				*(a+low) = *(a+high);
				*(a+high) = temp;
				while(*(a+low) <= *(a+high) && low < high)
						low++;
				temp = *(a+low);
				*(a+low) = *(a+high);
				*(a+high) = temp;
		}

		if(left < (low-1))
				QuickPass(a,left,low-1);
		if(right > (low+1))
				QuickPass(a,low+1,right);

		return low;
}

int main(void)
{
		int a[8] = {42,89,78,778,452,6688,42,75};
		
		int left = 0;
		int len = sizeof(a)/sizeof(int);
		int right = len-1;;
		printf("len is %d\n",len);

		QuickPass(a,left,right);

		cout<<"the sort is:";
		for(int i=0; i<len; i++) {
			cout<<a[i]<<" ";
		}
		cout<<endl;

}

