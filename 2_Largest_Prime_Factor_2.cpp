#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	long long int n=600851475143,factor=2,lastfactor=1,maxfactor;
	if(n%factor==0)
	{
		lastfactor=factor;
		while(n%factor==0)
		n=n/factor;
	}
	
	factor=3;
	maxfactor=(long long int)sqrt(n);
	printf("%lld\n",maxfactor);
	while(n>1 && factor <= maxfactor)
	{
		if(n%factor==0)
		{
		lastfactor=factor;
		while(n%factor==0)
		n=n/factor;
		}
		factor++;
	//	printf("%lld",factor);
	}
	printf("%lld",lastfactor);
	
}
