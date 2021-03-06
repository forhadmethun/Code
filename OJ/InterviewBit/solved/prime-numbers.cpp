#include<bits/stdc++.h>
using namespace std;
bitset<10000010> bs;
/*

why sqrt(n) will work for finiding primality of n?
    - sqrt(n) * sqrt(n) = n
    - (x <= sqrt(n)) * (y >= sqrt(n)) = n
    - there must be some number which is less than or equal to sqrt(n) and divides n, if n is not a prime number.
 

*/

vector<int> sieve(long long A){
    vector<int> primes;

    bs.set();
    bs[0] = bs[1] = 0;
    for(long long i=2;i<=A+1;i++){
        if(bs[i]){
            for(long long j=i*i;j<=A+1;j+=i){
                bs[j] = 0;
            }
            primes.push_back((int)i);
        }
    }
    return primes;

}
bool isPrime(int x){
    if(bs[x]){
        return true;
    }
    return false;
}
int main(){
    int A = 1000000;
    sieve(A);
//    cout << INT_MAX << endl;
    cout <<isPrime(6) << endl;





    return 0;
}