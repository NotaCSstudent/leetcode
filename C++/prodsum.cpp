  int subtractProductAndSum(int n) {
        int add=0,multiply=1;
        int remainder;
        while(n)
        {
            remainder = n%10;
            add += remainder;
            multiply *= remainder;
            n/=10;
        }
        return multiply-add;
    }
