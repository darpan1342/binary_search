#include<stdio.h>
#include<math.h>
int Sqrt(int A) {
    long long int l=0;
    long long int r=A;
    long long int mid=0;
    while(l<r)
    {
    
        mid=floor((l+r)/2);
		if((mid*mid)>=A)
        {
         r=mid;   
        }
        if((mid*mid)<A)
        {
            l=mid+1;
        }
    }
    if((l*l)==A)
    return l;
    else
    return l-1;
}
int main()
{
	int a;
	scanf("%d",&a);
	int c=Sqrt(a);
	printf("%d",c);
}
