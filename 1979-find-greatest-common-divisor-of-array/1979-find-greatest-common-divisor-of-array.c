int findGCD(int* nums, int numsSize) {
    int big=*(nums);
    int small=*(nums);
    int x=0;
    if(numsSize<1)
    {
        return numsSize;
    }
    else
    {
        for(int i=0;i<numsSize;i++)
        {
            if(big<=*(nums+i))
            {
                big=*(nums+i);
            }
            if(small>=*(nums+i))
            {
                small=*(nums+i);
            }
        }
    }
    for(int i=1;i<=big;i++)
    {
        if(big%i==0 && small%i==0)
        {
            x=i;
        }
    }
    return x;
    
}