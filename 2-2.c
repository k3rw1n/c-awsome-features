bool flag=1;
i=0;
while(flag){
    if(i>=lim-1)
    flag=0;
    else if((c=getchar())=='\n')
    flag=0;
    else if(c==EOF)
    flag=0;
    else{
        s[i]=c;
        ++i;
    }
}