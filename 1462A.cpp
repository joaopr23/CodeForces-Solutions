#include<bits/stdc++.h>
using namespace std;

int main () {
  int t;
  scanf("%d\n",&t);
  int n;
  for(int i = 0 ; i < t ; i++) {
    scanf("%d\n",&n);
    long long sequence[n+1];
    for(int j = 1 ; j <= n ; j++) {
      scanf("%lld\n",&sequence[j]);
    }
    long long restoredSequence[n+1];
    int flag = 0;
    int index = 1;
    for(int k = 1 ; k <= n ; k++) {
      int value;

        value = sequence[k];
        restoredSequence[index] = value;

        index++;


        value = sequence[(n+1)-k];
        restoredSequence[index] = value;

        index++;
	}

    for(int k = 1 ; k <= n ; k++) {
      if(k==n) printf("%lld\n",restoredSequence[k]);
      else printf("%lld ",restoredSequence[k]);
	}
  }
  return 0;
}
/*1 n
2 n-1
3 n-2
4 n-3;*/
