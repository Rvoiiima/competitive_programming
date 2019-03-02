#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#define ll long long

using namespace std;

ll gcd(ll a, ll b) {
    ll  tmp, r;
  if(a<b){
    tmp = a;
    a = b;
    b = tmp;
  } else if (a==b) {
      return a;
  }
 
  r = a % b;
  while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }

  return b;
}
