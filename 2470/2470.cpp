/*
 * 2470.cpp
 *
 */

#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    /*
     * 모든 경우를  뽑는 전탐색하면 O(n^2)  이면 TLE 가 발생한다.
     * 따라서 더 줄여줘야한다 .
     *  유사 binary_search를 이용해 구해볼 수 있다.
     *  sorting을 하고, 
     *  left idx , right idx를 설정해서, 
     *  한칸씩 좁혀간다. 
     *  
     *  sorting 비용 O(n log n)  + O(n)     
     *
     * */
    
    
    vector<int> a;
    int n;
    scanf("%d",&n);
    for (int i = 0 ; i< n; i++)
    {
        int sc;
        scanf("%d",&sc) ;
        a.push_back(sc);
    }
    sort(a.begin() , a.end() ) ;
    
    
    int ans1, ans2 ;
    int val = 987653412;
    int left = 0 , right = n-1 ;
    ans1 = a[left] , ans2 = a[right] ;
    while ( left < right ) {
        if (  val > abs( a[right] + a[left] ))  {
            val = abs(a[right] + a[left]);
            ans1=left;
            ans2=right ;
        }else if ( a[right] + a[left] < 0 ){
            left ++ ;
        }else {
            right--;	
        }
    }
    printf("%d %d\n", a[ans1],a[ans2]);
    return 0  ;
}

