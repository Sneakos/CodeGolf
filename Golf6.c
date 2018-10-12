//Ungolfed
#include <stdio.h>

int main()
{
	int i, j, total;
	char arr[100] = { 0 };
	
	total = 0;
	
	for(i = 0; gets(arr); i++)
	{
		total = 0;
		for(j = 0; arr[j] != 0; j++)
		{
			total += (arr[j] - 48);
			if(arr[j] == arr[j+1])
				j = 50;
		}
		if(total % 7 != 0 && total % 11 != 0 && j < 10 && j > 6 && arr[0] != 48)
			printf("valid\n");
		else
			printf("invalid\n");
	}
	
	return 0;
}

char arr[99], j, total;


//75% golfed
main()
{
	for(; gets(arr); total % 7 && total % 11 && 9/j & *arr > 48 ?
						puts("valid")
					:
						puts("invalid"))
						
		for(j = total = 0; arr[j]; j=arr[j] ^ arr[++j] ? j : 99)
			total += *arr+j - 48;	
}

//100% Golfed
main(){for(;gets(a);t%7&&t%11&&9/j&*a>48?puts("valid"):puts("invalid"))for(j=t=0;a[j];j=a[j]^a[++j]?j:99)t+=*a+j-48;}

//Lost the prompt for this one
