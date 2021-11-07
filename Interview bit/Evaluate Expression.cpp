int Solution::evalRPN(vector<string> &a) 
{
    int i;
    stack<int> s;

    for(i=0;i<a.size();i++)
    {
        if(a[i]=="+" || a[i]=="-" || a[i]=="*" || a[i]=="/")
        {
            int y=s.top();
            s.pop();
            int b=s.top();
            s.pop();

            if(a[i]=="+")
                s.push(b+y);
            else if(a[i]=="-")
                s.push(b-y);
            else if(a[i]=="*")
                s.push(b*y);
            else if(a[i]=="/")
                s.push(b/y);
        }
        else
        {
            int x=stoi(a[i]);
            s.push(x);
        }
    }

    return s.top();
}