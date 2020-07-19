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

unsigned long long int   combinations ( unsigned long long int   n , unsigned long long int   r ){
  //factorial( n ) / ( factorial( n - r ) * factorial( r )) ;
  unsigned long long int   numerator = 1 , denominator = 1 , result ;
  for( unsigned long long int   itr = 1 ; itr <= r ; itr++ ){
    denominator *= itr ;
    numerator = numerator * (n - ( itr - 1 ));
  }
  result =  numerator / denominator ;
  return result ;
}
unsigned long long int   calcGCD( unsigned long long int   num1 , unsigned long long int   num2 ){
  int  rem ;
  while( 1 ){


  rem = num1 % num2 ;
  if( rem == 0 )
    return num2 ;
  if( rem != 0 ){
    num1 = num2;
    num2 = rem ;
  }
}
}
unsigned long long int   mulInv( unsigned long long int   a ){
  unsigned long long int   m = 1000000007 , itr , b;
  for( itr = 1 ; itr < m ; ++itr ){
    if(( itr * m + 1 ) % a == 0){
      b  = ( itr * m + 1 ) / a ;
    break;
  }
  }
  return b ;
}

 int  main(int  argc, char const *argv[]) {

   int t , k ;
   std::cin >> t ;
   for( int k = 0 ; k < t ; ++k ){
  unsigned long long int   qb_questions , learnt  , chosen  ;
  std::cin >> qb_questions ;
  std::cin >> learnt ;
  std::cin >> chosen ;
  unsigned long long int   waysOfChoosing , waysOfFailing , p,q , gcd , result , unknown ;
  unknown = qb_questions - learnt ;
  waysOfChoosing = combinations( qb_questions , chosen ) ;
  waysOfFailing = combinations( unknown , chosen ) ;
  p = waysOfChoosing - waysOfFailing ;
  q = waysOfChoosing ;
  //std::cout << p <<"  "<<q  << '\n';
  gcd = calcGCD(p , q ) ;
if( gcd != 1 ){
  p = p / gcd ;
  q = q / gcd ;

}
result = ( p * mulInv(q)) % 1000000007 ;
std::cout << result << '\n';
}
  return 0;
}
