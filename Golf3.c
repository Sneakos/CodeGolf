//ungolfed
main(t,i)
{
	char *s,*p,l;
	for(;gets(p);printf("%s:%d\n",s,t))
	for(s="yes",t=i=0;l=p[i];t+=l)
		s=l^p[strlen(p)-++i]?"no":s;
}

//golfed
main(t,i){char *p,*s,l;for(;gets(p);printf("%s:%d\n",s,t))for(s="yes",t=i=0;l=p[i];t+=l)s=l^p[strlen(p)-++i]?"no":s;}

/*
* PROMPT
* Read in word
* Print out if the word is a palin drome as well as the total of the characters
*/