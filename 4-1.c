int strrindex( char s[], char t )
{
  int i;
  int count = -1;
 
  for(i=0; s[i] != '\0'; i++)
  {
    if(s[i] == t)
    {
      count = i;
    }
  }
 
  return count;
}
