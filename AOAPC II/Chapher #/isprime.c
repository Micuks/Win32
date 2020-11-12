
    if (num <= 3) {
        return num > 1;
    }
    // 不在6的倍数两侧的一定不是质数
    if (num % 6 != 1 && num % 6 != 5) {
        return false;
    }
    int sqrt = (int) Math.sqrt(num);
    for (int i = 5; i <= sqrt; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
int isprime(int number)
{if(number==2||number==3) 是质数;
    if(number%6!=1&&num%6!=-1) 不是质数;
    int sqrt=sqrt(number);
    else for(int i=5;i<=sqrt;i+=6)
    {
        if(number%i==0||number%(i+2)==0) 不是质数；
    }
}
