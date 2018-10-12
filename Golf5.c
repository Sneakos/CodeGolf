//ungolfed
#include <stdio.h>

int main()
{
	char roman[] = "CLXVI";
	char numbers[] = { 100,50,10,5,1 };

	int total2 = 0, total = 0;
	char in[100];
	int last = 200;
	int i = 0;
	int j = 0;
	int mod = 1;

	for (; gets(in);j=0, total2 += total, total = 0, mod = 1, last = 100)
	{
		for (; in[j] != '\0'; j++)
		{
			for (i = 0; roman[i] != in[j] && roman[i] != 0; i++);
			if (i<5)
			{
				if (numbers[i] > last)
				{
					total -= 2 * mod*last;
				}
				total += numbers[i] * mod;
				last = numbers[i];
			}
			else
			{
				if (in[j] == 42)
					mod = total, total = 0;
				else if (in[j] == 45)
					mod = -1;
				last = 100;
			}
		}
		printf("%d\n", total);
	}

	printf("%d\n", total2);

	return 0;
}

//75% golfed
char *r="CLXVId2\n",u[9],c,j,*T;

main(m,l,t,i)
{
	for(;gets(u);printf("%d\n",t,T+=t,j=t=0))
		for(m=1;c=u[j++];l=i<5?
							t+=(c=r[i+5])*m-(c>l?2*m*l:0),c
							:100,c==45?m=-1:c==42?m=t,t=0:0)
			for(i=0;r[i]^c&&i++<5;);
	printf("%d\n",T);
}

//99% golfed
char *r="CLXVId2\n",u[9],c,j,*T;main(m,t,i,l){for(t=0;gets(u);printf("%d\n",t),T+=t,j=t=0)for(m=1;c=u[j++];l=i<5?t+=(c=r[i+5])*m-(c>l?2*m*l:0),c:100,c^42?m=c^45?m:-1:(m=t,t=0))for(i=0;r[i]^c&&i++<5;);printf("%d\n",T);}
//100% golfed
//This didn't work with the provided golf script, but it works locally (somewhat)
char *r="CLXVId2\n",u[9],c,j,*T;main(m,i,t,l){for(;gets(u);printf("%d\n",t),T+=t,j=t=0)for(m=1;c=u[j++];l=i<5?t+=(c=r[i+5])*m-(c>l?2*m*l:0),c:100,c^42?m=c^45?m:-1:(m=t,t=0))for(i=0;r[i]^c&&i++<5;);printf("%d\n",T);}/*
* PROMPT
* Your program will read from
* stdin until input stops. Each line will contain two integers represented by
* Roman numerals (subtractive notation) separated by an operator for addition(+),
* subtraction(-), or multiplication(*). There may be any number of leading or
* trailing spaces surrounding the numbers. For each line of input, you must print
* one line of output with the result of the operation as a number followed by a
* new line. Once all operations are completed, print the sum of the result of all
* ops followed by a newline. The largest integer you must handle on either side
* of an operator is 300. There will be at most 100 lines of input.
*/
