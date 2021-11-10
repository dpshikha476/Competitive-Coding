int Solution::colorful(int A) 
{
    
unordered_set<int> s;

vector<int> arr;

while(A)

{

arr.push_back(A%10);

A=A/10;

}


for(int i=0;i<arr.size();i++)
{
    if(s.find(arr[i])!=s.end())
    {
        return 0;
    }
    s.insert(arr[i]);
    
}
for(int i=0;i<arr.size();i++)
{
    int mul=arr[i];
    for(int j=i+1;j<arr.size();j++)
    {
            mul=mul*arr[j];   
            if(s.find(mul)!=s.end()) {
               return 0;

            s.insert(mul);
    }

    }
}
return 1;

}
