#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <iostream>
#include <string.h>
#include <algorithm>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
bool isPrime( unsigned long long int n ){
    int flag = 1 ;
  for (unsigned long long int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
      return true ;

    }
    else {
      return false ;

    }
}
unsigned long long int countDigit(  unsigned long long int n ){
  unsigned long long int count = 0 ;
  while( n != 0 ){
    n /= 10 ;
    ++count;
  }
  unsigned long long int ret ;
  if( count == 1 )
    ret = 10 ;
  else if( count == 2 )
    ret = 100;
  else if( count == 3 )
    ret = 1000;
  return ret ;
}
std::vector<unsigned long long int> findprime ( unsigned long long int  a , unsigned long long int b ){
  std::vector<unsigned long long int> prime ;
  unsigned long long int index = 0 ;
  for (unsigned long long int i = a; i <= b; i++) {

        if (i == 1 || i == 0)
            continue;


        unsigned long long int flag = 1;

        for (unsigned long long int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            prime.push_back(i) ;
    }
    return prime ;
}
 int main( int argc, char const *argv[]) {
  unsigned long long int a , b ;
  std::cin >> a ;
  std::cin >>  b ;
  std::vector<unsigned long long int> prime1 ;
  prime1 = findprime( a , b );
  unsigned long long int n = prime1.size() ;

  std::vector< unsigned long long int > combo ;

  for( unsigned long long int i = 0 ; i < n ; ++i ){
    for( unsigned long long int j = 0 ; j < n ; ++j  ){
      if( i != j ){

      unsigned long long int mul = countDigit( prime1[j] ) ;

      combo.push_back ( ((mul * prime1[i]) + prime1[j])) ;
    }
    }
  }
  unsigned long long int index = combo.size() ;

  std::set < unsigned long long int > prime2 ;
  for( unsigned long long int i = 0 ; i < index ; ++i ){
    if( isPrime(combo[ i ]))
      prime2.insert(combo[ i ]) ;
  }
  unsigned long long int j = prime2.size() ;

  unsigned long long int mi= (*prime2.begin()) ;
  unsigned long long int ma = ( *prime2.rbegin());

  double a1 = mi ;
  double b1 = ma ;
  unsigned long long int c = 0 ;
  for( unsigned long long int f = 2 ; f < j ; ++f ){


    c = a1 + b1 ;
a1 = b1 ;
b1 = c ;
  }

std::cout << c << '\n';

  return 0;
}
