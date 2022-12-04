#include<iostream>
using namespace std;
int main()
{
    int n,k,i;
    std::cin>>n>>k;
    for(i=0;i<k;i++)
    {
        if(n%10==0)
        {

            n/=10;
        }
        else
        {

            n--;
        }
    }
    std::cout<<n;
}
