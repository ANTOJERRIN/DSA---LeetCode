class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,product=1;
        int temp=n;
        while(n>0)
        {
            int remainder=n%10;
            sum+=remainder;
            product*=remainder;
            n=n/10;
        }
        int divisor=sum+product;
        return temp%divisor==0 && divisor!=0;}
};