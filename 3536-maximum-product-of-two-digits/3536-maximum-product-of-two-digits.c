int maxProduct(int n) {
    int largest=0;
    int second=0;
    int rem=0;

    while(n!=0)
    {
        rem=n%10;

        if(rem>largest)
        {
            second=largest;
            largest=rem;
        }
        else if(rem>second)
        {
            second=rem;
        }
        n=n/10;
    }
    return largest*second;
}