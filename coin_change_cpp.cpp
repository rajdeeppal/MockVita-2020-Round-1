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

int main(int argc, char const *argv[]) {
  int c ;
  std::cin >> c ;
  for( int i = 1 ; i <= c ; ++i ){
    int value ;
    std::cin >> value ;
    int coincount =  0 ;
    while( value >= 1 ){
      value =( int ) value / 2 ;
      coincount = coincount + 1 ;
    }
    std::cout << coincount << '\n';
  }
  return 0;
}
