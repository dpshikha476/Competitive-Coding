char convert(char s)
{
    if(s-'a'>=0&&s-'z'<=25)
    s = s - 32;
    return s;
}

int Solution::isPalindrome(string A) 
{
    int i=0,n=A.length(),j=n-1;

    while(i<=j)
    {
      if(A[i]-'a'>=0&&A[i]-'z'<=25 || A[i] - 'A'>=0&&A[i] - 'Z'<=25 || A[i] - '0'>=0&&A[i]-'0'<=9); 
      else 
      {
        i++;
        continue;
      }
      
      if(A[j]-'a'>=0&&A[j]-'z'<=25 || A[j] - 'A'>=0&&A[j] - 'Z'<=25 || A[j] - '0'>=0&&A[j]-'0'<=9);
      else 
      {
        j--;
        continue;
      }
      
      char x = convert(A[i]); 
      char y = convert(A[j]);
      
      if(x!=y)
      {
        return 0;
      }

      i++;
      j--;
    }
    
    return 1;

}