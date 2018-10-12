//Relatively Ungolfed

#include <stdio.h>

int main()
{
	char in[2], input, last;
	
	while(~scanf("%s%c", in, &input))
	{	
		int i = 0, count = 1;	
		if(*in == 'e')
		{
			for(scanf("%c",&last); scanf("%c",&input), input > 10;last=input)
			{
				if(last != input)
					printf("%%%d$%c", count, last),count=1;
				else
					count++;
			}
			printf("%%%d$%c", count, last);
		} else {
				int num;
				char tmp;
			while(~scanf("%c", &tmp) && tmp != 10)
			{
				scanf("%d %c %c", &num, &tmp, &tmp);
				for(i = 0; i < num; i++)
					putchar(tmp);
			}
		}
		puts("");
	}
	
	return 0;
}


//75% Golfed
int main(number)
{
	char *input=&number+9;
	for(;~scanf("%s%*c",input);puts(""))
		if(*input&1)
			for(gets(input);*input;printf("%%%d$%c",number,*(input-1)))
				for(number=1;*input++==*input;number++);
		else
			for(;scanf("%*c%d%*c%c",&number, input)>1;)
				for(;number--;putchar(*input));
}


//100% Golfed
main(n){char *i=&n+9;for(;~scanf("%s%*c",i);puts(""))if(*i&1)for(gets(i);*i;printf("%%%d$%c",n,*(i-1)))for(n=1;*i++==*i;n++);else for(;scanf("%*c%d%*c%c",&n,i)>1;)for(;n--;putchar(*i));}
/*

Challenge:

Current Challenge: Run Length Encoding
===============================================================================

Run Length Encoding (RLE) is a lossless data compression algorithm in which
runs of identical characters in a stream of data are represented as a single
character and a run length.  To avoid ambiguity, for the sake of this task, each
character/length set will be represented as "%N$C", where "N" is a decimal integer
of arbitrary length, and "C" is a single character in the range 0x20-0x7e.

For instance...

rle("XXXXYYYZZzzzzzzzzzzzzzzzzzzzz") -> "%4$X%3$Y%2$Z%20$z"
rle("AAAAAaaawwwwwwwwwwwwe!") -> "%5$A%3$a%12$w%1$e%1$!"

Similarly, the process can be reverse...

unrle("%12$*%1$1%1$2%1$3%1$4") -> "************1234"
unrle("%23$$") -> "$$$$$$$$$$$$$$$$$$$$$$$"

Your program will be given a series of newline seperated strings in the form:
e ...
d ...
e ...
d ...
d ...
e ...
e ...
...etc...

If the line begins with "e ", the rest of the data should be RLE-encoded.  If
the line begins with "d ", the rest of the data should be RLE-decoded.  Your
program should print each answer on a newline.



Example
===============================================================================

If your program reads the input:
e aaaaBBBBcccc
d %13$z%3$q%1$b
e A
d %10$?%5$Z

It should output:
%4$a%4$B%4$c
zzzzzzzzzzzzzqqqb
%1$A
??????????ZZZZZ

*/
