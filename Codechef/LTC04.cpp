#include <bits/stdc++.h> 
#include<string.h>
#include <algorithm>
using namespace std; 

 int main()
 {
     long long int t;
     cin>>t;
     while(t--)
     {
         long long int i;
        char ch;
        cin>>ch;
        string s1,s2;
        cin>>s1>>s2;
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        transform(s2.begin(),s2.end(), s2.begin(), ::tolower);
        if(ch=='A')
        {
            string s3="";
            s3=s1 +s2;
            s3[s1.length()] =s3[s1.length()]-32;
            cout<<s3<<"\n";
        }
        else if(ch=='B')
        {
            string s3="";
            s3=s1+ "_" +s2;
            cout<<s3<<"\n";
        }
        else if(ch=='C')
        {
           string s3=s1+"_"+s2;
           for(i=0;i<s3.length();i++)
           s3[i]=s3[i]-32;
            s3[s1.length()]=s3[s1.length()]+32;
           cout<<s3<<"\n";
            
        }
        else if(ch=='D')
        {
          string s3="";
          s3=s1+"-"+s2;
          s3[s1.length()+1]=s3[s1.length()+1]-32;
          s3[0]=s3[0]-32;
          cout<<s3<<"\n";
            
        }
        else if(ch=='E' || ch=='F' || ch=='G' || ch=='H')
        {
            string s3=s1+"|"+s2;
            
            for(i=0;i<s1.length();i++)
            {
                if(i%2!=0)
                s3[i]= s3[i]-32;
                
            }
            long long int c=0;
            for(i=s1.length()+1;i<=s2.length()+s1.length();i++)
            {
                if(c%2!=0)
                s3[i]= s3[i]-32;
                c++;
            }
             
            cout<<s3<<"\n";
        }
       
     }
     
 }
