constexpr int Fibonacci(int n)
{
    if(n <= 1) return n;
    int n1 = 0, n2 = 0, result = 0;
    n2 = 0;
    n1 = 1;
    for(int i = 0; i < n-1; i++)
    {
        result = n2 + n1;
        n2 = n1;
        n1 = result;
    }
    return result;
}