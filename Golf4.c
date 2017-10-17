//Ungolfed (sorta)
int area,width,height,out,in;
int main(i)
{
	for(scanf("%d%d %c %c",&width,&height,&out,&in),i+=++width*height;--i;putchar(i%width>2&i>width&i<height*width-width?area++,in:i%width^1?out:'\n'));
	printf("%d\n",area);
}

//100% golfed
main(i,w,h,o,I){for(scanf("%d%d %c %c",&w,&h,&o,&I),i+=++w*h;--i;putchar(i%w>2&i>w&i<h*w-w?I:i%w^1?o:10));printf("%d\n",(h-2)*(w-3));}

/*
* PROMPT:
* Read in width, height, and two characters
* Print square with outside consisting of the first character and the inside consisting of the second character
* Print the area of the inside
* 
*/