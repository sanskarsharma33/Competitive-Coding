ll pfact(int num,map<int, int> &mp)
{
    ll count=0;
    ll x;
    if(num%2==0)
    {
        x=1;
        num=num>>1;
        count++;
        while(num%2==0)
        {
            num=num>>1;
            count++;
            x++;
        }
        mp[2]=x;
    }

    for(int i=3;i<=sqrt(num);i+=2)
    {
        if(num%i==0)
        {
            num/=i;
            x=1;
            while(num%i==0)
            {
                x++;
                num/=i;
                count++;
            }
            mp[i]=x;
        }
    }
    if(num>2)
    {
        mp[num]=1;
        count++;
    }
    return count;
}