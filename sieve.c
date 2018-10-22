#include<stdlib.h>
#include<math.h>
int sieve(int m){for(int g=2,p=1,l=m*log(m)*2,*s=calloc(32,l),i;;){for(i=g;i<l;s[i]=1,i+=g);while(s[++g]);if(m==++p)return g;}}
