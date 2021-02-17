#include<bits/stdc++.h>
using namespace std;

int main () {
  int t;
  scanf("%d\n",&t);
  for(int z = 0 ; z < t ; z++) {
    int n;
    scanf("%d\n",&n);
    int Array[n];
    int naive = 1;
    int thisYear[] = {2,0,2,0};
    for(int i = 0 ; i  < n ; i++) {
      scanf("%1d",&Array[i]);
      if(Array[i]!=thisYear[i]) naive = 0;
    }

    if(n==3 && naive==1) {
      printf("YES\n");
      continue;
    }

    int Beggining = 1;
    for(int i = 0 ; i < 4 ; i++) {
      if(Array[i]!=thisYear[i]) Beggining = 0;
    }
    if(Beggining==1) {
      printf("YES\n");
      continue;
    }

    int End = 1;
    int index = 3;
    for(int i = (n-1) ; i > (n-5); i--) {
      if(Array[i]!=thisYear[index]) {       
        End = 0;
      }
      index--;
    }
    if(End==1) {
      printf("YES\n");
      continue;
    }

    if(Array[0]==2 && Array[n-1]==0 && Array[n-2]==2 && Array[n-3]==0) {
      printf("YES\n");
      continue;
    }
    if(Array[0]==2 && Array[1]==0 && Array[n-1]==0 && Array[n-2]==2 ) {
      printf("YES\n");
      continue;
    }
    if(Array[0]==2 && Array[1]==0 && Array[2]==2 && Array[n-1]==0) {
      printf("YES\n");
      continue;
    }
    printf("NO\n");
  }
  return 0;
}
