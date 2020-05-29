#include <stdio.h>
#include <conio.h>
#define R 4
#define C 6 

void spiralPrint(int m,int n, int a[R][C])
{
    int i,l=0,k=0;
    while(k<m && l<n)
    {
        //print top row
        for(i=l;i<n;++i)
        {
        	printf("\n%d",a[k][i]);
		}
        k++;
        
        //print right most column
        for(i=k;i<m;++i)
        {
        	printf("\n%d",a[i][n-1]);
		}
		n--;
		//print bottom row
		if(k<m)
		{
			for(i=n-1;i>=l;--i)
			{
				printf("\n%d",a[m-1][i]);
			}
			m--;
		}
		if(l<n)
		{
			for(i=m-1;i>=k;--i)
			{
				printf("\n%d",a[i][l]);
			}
			l++;
		}
	}
}
int main()
{
	int a[R][C]={{1,2,3,4,5,6},
				  {7,8,9,10,11,12},
				  {13,14,15,16,17,18},
				  {19,20,21,22,23,24}};
	spiralPrint(R,C,a);
	return 0;
}

