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
long long  fact(long long  n);

long long  nCr(long long  n, long long  r )
{
    return fact(n) / (fact(r) * fact(n - r));
}


long long  fact(long long  n)
{
    long long  res = 1;
    for (long long  i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int main(int argc, char const *argv[]) {

  long long  car ;
  std::cin >> car ;
  std::vector< std::vector< long long  > > inp( car , std::vector<long long >( 3 ) );
  for( int i = 0 ; i < car ; ++i ){
    for( int j = 0 ; j < 3 ; ++j ){
      std::cin >> inp[ i ][ j ];
    }
  }
  unordered_map < long long  , int > trac ;
  for( int i = 0 ; i < car ; ++i ){
    long long  dis = sqrt( pow ( inp[ i ][ 0 ] , 2 ) + pow( inp [ i ][ 1 ] , 2 )) ;
    long long  time = dis / inp [ i ][ 2 ] ;
    trac[ time ]++;
  }
  std::vector< long long  > sameTime ;
  for( auto itr = trac.begin() ; itr != trac.end() ; ++itr ){
    sameTime.push_back( itr->second ) ;
  }
  /*for( long long  x : sameTime ){
    std::cout << x << '\n';
  }*/

  long long  tot = 0 ;
  for( long long  x : sameTime ){
    if( x > 1 ){
      tot += nCr( x , 2 ) ;
    }
  }
  std::cout << tot << '\n';
  return 0;
}
