long long int SumEvenFibo(long long int limit)
{
    if (limit < 2)
        return 0;
 
    long long int a = 0, b = 2;
    long long int sum = a + b;
 
    while (b <= limit)
    {
        long long int c = 4*b + a;
 
        if (c > limit)
            break;
        
        a = b;
        b = c;
        sum =sum+b;
    }
 
    return sum;
}
