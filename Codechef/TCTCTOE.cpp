#include<bits/stdc++.h>
#include<unordered_set>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;


int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        char ch[3][3];
        lli wo=0,wx=0,x=0,o=0,u=0,i,j;
        
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>ch[i][j];
                if(ch[i][j]=='X')
                x++;
                else if(ch[i][j]=='O')
                o++;
                else if(ch[i][j]=='_')
                u++;
            }
        }
        
        for(i=0;i<3;i++)
        {
            if(ch[i][0]==ch[i][1] && ch[i][2]==ch[i][1])
            {
                if(ch[i][0]=='X')
                wx=1;
                else if(ch[i][0]=='O')
                wo=1;
            }
        }
        
        for(j=0;j<3;j++)
        {
            if(ch[0][j]==ch[1][j] && ch[2][j]==ch[1][j])
            {
                if(ch[0][j]=='X')
                wx=1;
                else if(ch[0][j]=='O')
                wo=1;
            }
        }
        
        
        if(ch[0][0]==ch[1][1] && ch[1][1]==ch[2][2])
        {
            if(ch[1][1]=='X')
            wx=1;
            else if(ch[1][1]=='O')
            wo=1;
        }
        
         if(ch[0][2]==ch[1][1] && ch[1][1]==ch[2][0])
        {
            if(ch[1][1]=='X')
            wx=1;
            else if(ch[1][1]=='O')
            wo=1;
        }
        
        
        if((wx==1 && wo==1) || (x-o <0) || (x-o >1))
        cout<<3<<"\n";
        else if(x==0 && o==0 && u==9)
        cout<<2<<"\n";
        else if(wx==1 && wo==0 && x>o)
        cout<<1<<"\n";
        else if(wx==0 && wo==1 && x==o)
        cout<<1<<"\n";
        else if(wx==0 && wo==0 && u==0)
        cout<<1<<"\n";
        else if(wx==0 && wo==0 && u>0)
        cout<<2<<"\n";
        else 
        cout<<3<<"\n";
        
    }
    
}
