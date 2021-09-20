bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int k) 
{
    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
    int i=1,j=0;
    int c=1;

    while(i<arrive.size())
    {

        if(arrive[i]>=depart[j])
        {
        i++;
        j++;
        }

        else
        {
            c++;
            i++;
        }

    }

    if(c<=k) 
    return true;
    else
    return false;

}