// Aplicacao do algortimo KMP para encontrar o maior prefixo que e sufixo e que
// esta contido dentro da string

//computepi do https://cp-algorithms.com/string/prefix-function.html

#include<bits/stdc++.h>

using namespace std;


int Pi[1000010];

void computePi (string P) {
  int n = P.length();
  for(int i = 1 ; i < n ; i++) {
    int j = Pi[i-1];
    while(j > 0 && P[i] != P[j]) {
      j = Pi[j-1];
    }
    if (P[i] == P[j]) {
      j++;
    }
    Pi[i] = j;

  }
}

int main () {
  string S;
  getline(cin, S);



  int length = S.length();

  computePi(S);

  for(int i = 0 ; i < length ; i++) Pi[i] = Pi[i]-1;
  int max = Pi[length-1];
  int position = Pi[max];
  if(max==-1) position = -1;

    for(int i = 1 ; i < (length-1) ; i++) {
      if (Pi[i] == max) {
        position = max;
      }


    }


    if(position == -1) printf("Just a legend\n");

    else {
    for(int i = 0 ; i <= position ; i++) {
      printf("%c",S[i]);
    }
    printf("\n");
  }
  for(int i = 0 ; i < length ; i++) {
  //  printf("%d : %d\n",i,Pi[i]);
  }
  return 0;
}
