#include <stdio.h>

using namespace std;

int main () {
  int t , n;
  scanf("%d\n",&t);
  for(int w = 0 ; w < t ; w++){

    scanf("%d\n",&n);
    int p [n];

    for(int i = 0 ; i < n ; i++){
      p[i] = n-i;
	}
   
    if ( n % 2 != 0) {
      int temp = (n/2);
      int a = p[temp+1];
      int b = p[temp];

      p[temp]=a;
      p[temp+1] = b;
    }

	for(int i = 0 ; i < n ; i++) {
  		if(i!=(n-1)) printf("%d ",p[i]);
  		else printf("%d",p[i]);
	}	
	
	printf("\n");
	}
  return 0;
}
