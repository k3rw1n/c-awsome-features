int any(char s1[],char s2[]){
    
    int i=j=k=0;
    for (;s2[i]!='\0';i++)
    for(;s1[j]!='\0';j++)\
   if(s2[i]==s1[j])
   return j;
   return -1;
}