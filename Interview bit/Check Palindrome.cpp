int Solution::solve(string A) 
{
    unordered_map<char,int> m;int count=0;

    for(char i:A) m[i]++;

    for(auto j:m) count+=j.second%2;

    return count<=1?1:0;
}
