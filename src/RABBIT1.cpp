#include<stdio.h>
#include<math.h>
void multiply(long long int F[2][2], long long int M[2][2], long long int mod);

void power(long long int F[2][2], long long int n, long long int mod);

/* function that returns nth Fibonacci number */
long long int fib(long long int n, long long int mod)
{
  long long int F[2][2] = {{1,1},{1,0}};
  if(n == 0)
    return 0;
  power(F, n-1,mod);
  return F[0][0];
}

/* Optimized version of power() in method 4 */
void power(long long int F[2][2], long long int n, long long int mod)
{
  if( n == 0 || n == 1)
      return;
  long long int M[2][2] = {{1,1},{1,0}};

  power(F, n/2, mod);
  multiply(F, F, mod);

  if( n%2 != 0 )
     multiply(F, M, mod);
}

void multiply(long long int F[2][2], long long int M[2][2], long long int mod)
{
  long long int x =  ((F[0][0]*M[0][0])%mod + (F[0][1]*M[1][0])%mod)%mod;
  long long int y =  ((F[0][0]*M[0][1])%mod + (F[0][1]*M[1][1])%mod)%mod;
  long long int z =  ((F[1][0]*M[0][0])%mod + (F[1][1]*M[1][0])%mod)%mod;
  long long int w =  ((F[1][0]*M[0][1])%mod + (F[1][1]*M[1][1])%mod)%mod;

  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}

/* Driver program to test above function */
int main()
{
  long long int t,n,m,mod,ans;
  scanf("%lld",&t);
  while(t--)
  {
     scanf("%lld %lld",&n,&m);
     mod=(long long int) pow(2,m);
     printf("%lld\n", fib(n+1,mod));
  }
  return 0;
}
