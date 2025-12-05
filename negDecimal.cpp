#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int NegDecimal(int n ){
    int m = ~n;
    if ( m %10 ==0){
        m = m |1;
    }
    return m;

}