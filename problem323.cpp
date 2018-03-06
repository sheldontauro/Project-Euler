#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ff first
#define ss second
#define gcd __gcd
#define inf (1<<30)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define bitcit __builtin_popcount
#define ll long long
const int N = 1e5 + 5;
double power(double a,int b){
    double ret = 1.00;
    while(b){
        if(b & 1)
            ret = (ret * a);
        b /= 2;
        a = (a * a);
    }
    return ret;
}
int main(){
    double sum = 1 , val = 1 , div = 0.5 , var = 1; 
    int cnt = 1000;
    /* for the ith round we can calculate the probability as 1 - pow(1 - pow(2,-i) , 32) and 
	sum it up till we get the accuracy we need
    */
    for(int i=1;i<cnt;i++){
        val *= div;
        sum += var - power((var - val) , 32);
    }
    printf("%.15lf\n",sum);
}
