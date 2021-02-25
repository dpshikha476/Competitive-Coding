
#include <bits/stdc++.h> 
#include<string.h>
using namespace std; 
bool solve(string s1, string s2, string s3)
{
   long long int a[26]={0},b[26]={0},c[26]={0},i;
         for(i=0;i<s1.length();i++)
         a[s1[i]-'a']++;
         for(i=0;i<s2.length();i++)
         b[s2[i]-'a']++;
         for(i=0;i<s3.length();i++)
         c[s3[i]-'a']++;
         
         for(i=0;i<26;i++)
         {
             if(a[i]==b[i] && a[i]==c[i])
             continue;
             else 
             return false;
             
         }
         return true; 
}
 int main()
 {
     long long int t;
     cin>>t;
     while(t--)
     {
         string s1,s2,s3;
         cin>>s1>>s2>>s3;
         if(solve(s1,s2,s3))
         cout<<"Possible"<<"\n";
         else 
         cout<<"Not Possible"<<"\n";

     }
 }
