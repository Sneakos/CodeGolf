//ungolfed
arr[9],top,s,f;
main(letter)
{
    for(;~(letter=getchar());arr[top]=s)
		f=arr[--top],
        s=letter>47
        ?top+=2,letter-'0'
        :letter>45
		?f/s
		:letter>43
		?f-s
		:letter>42
		?f+s
		:letter>37
		?f*s
		:letter>10
        ?f%s
		:printf("%d\n",s);
}

//golfed
a[9],t,s,f;main(l){for(;~(l=getchar());a[t]=s)f=a[--t],s=l>47?t+=2,l-'0':l>45?f/s:l>43?f-s:l>42?f+s:l>37?f*s:l>10?f%s:printf("%d\n",s);}

/*
* PROMPT
* Postfix calculator with the +,/,-,+,*,and % operators
*/