#include <stdio.h>
#define MAXN 100

int parent[MAXN];

void makeset(int n)
 {
for(int i=1;i<=n;i++) {
parent[i]=i;
  }
}

int findparent(int x) {
if(parent[x] == x)
return x;
return findparent(parent[x]);
}
 

void merge(int a,int b) {
parent[findparent(a)] = findparent(b);
}


int isconnected(int a,int b) {
return findparent(a) == findparent(b);
}

int main() {
makeset(10);
merge(1,2);
merge(2,3);
merge(7,8);
merge(8,9);

printf("%d\n",isconnected(1,3));
printf("%d\n",isconnected(2,8));
printf("%d\n",isconnected(5,8));
merge(5,8);
printf("%d\n",isconnected(8,5));
return 0;

}

   
