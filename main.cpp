#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int num)
{
    if (num == 2)
    {
        return true;
    }
    for (int i=2; i < sqrt(num) ;i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    return true;
};

int main()
{
    for (int i = 1; i < 100000000000; i++){
        int num = i;
        if(isPrime(num))
        {
            cout << num << " prime" << endl;
        }
    }
    return 0;
}
