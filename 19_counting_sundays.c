/*
You are given the following information, but you may prefer to do some research for yourself.

1 Jan 1900 was a Monday.
Thirty days has September,
April, June and November.
All the rest have thirty-one,
Saving February alone,
Which has twenty-eight, rain or shine.
And on leap years, twenty-nine.
A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.
How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int cnt_days=366,year,sundays=0,count1,count2;//cnt_days=366 for counting days of year 1900
	int arr[]={31,28,31,30,31,30,31,31,30,31,30,31};
	//printf("%d %d",days(2,1904),days(2,1900));	
	for(year=1901;year<=2000;year++)
	{
		if((year%4==0 && year%100!=0 )|| year%400==0 )
			arr[29];
		for(count1=0;count1<12;count1++)
		{
			for(count2=1;count2<=arr[count1];count2++)
			{
				if(count2==1 && cnt_days % 7 == 0)
					sundays++;
						
				cnt_days++;
			}			
		}

	}
	printf("%d",sundays);
}
