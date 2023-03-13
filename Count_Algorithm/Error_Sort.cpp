//
//  Error_Sort.cpp
//  Count_Algorithm
//
//  Created by 金心羽 on 2023/3/13.
//

#include "Error_Sort.hpp"

long long Error_Sort::factorial(long long number)
{
    long long sum = 1;
    while(number != 0)
    {
        sum *= number;
        number --;
    }
    return sum;
}

long long Error_Sort::Calculate(long long n)
{
    if(n == 1)   //D1 = 0
    {
        return 0;
    }
    if(n == 2)   //D2 = 1;
    {
        return 1;
    }
    else if(n > 2)
    {
        long long FactorialOfN = factorial(n);
        cout << FactorialOfN << endl;
        long long cosx = 1;
        double ans = 0;
        long long FactorialOfI = 0;
        for(long long i = 2; i <= n; i++)
        {
            FactorialOfI = factorial(i);
            ans += 1.0 / FactorialOfI * cosx;
            cosx *= -1;
        }
        return FactorialOfN * ans;
    }
    return -1;
}
