//Ungolfed (sorta)
char i,M,m,w[99];
main(c){
    for(;gets(w);printf("%d:%c:%c:%s\n",i,M,m,w+99-i))
        for(i=0,M=m=*w;c=w[97-i]=w[i++];m=c<m?c:m)
        M=c>M?c:M;
}

//100% golfed
char i,M,m,w[99];main(c){for(;gets(w);printf("%d:%c:%c:%s\n",i,M,m,w+99-i))for(i=0,M=m=*w;c=w[97-i]=w[i++];m=c<m?c:m)M=c>M?c:M;}

/*
* PROMPT
* Read in words until end of filelength
* Print out length : largest letter : smallest letter : reversed word
*/