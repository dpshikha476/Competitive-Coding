
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}

vector<int> Solution::primesum(int a) 
{
    for(int i=2;i<a;i++)
    {
        if(isPrime(i))
        {
            if(isPrime(a-i))
            return{i,a-i};
        }
    }

    return {};
}