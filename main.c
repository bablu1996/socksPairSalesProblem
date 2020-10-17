#include <stdio.h>

int main()
{
    
 int n;
    scanf("%d",&n);
 int freq[101] = {};
 for(int i = 0; i < n; i++) {
        int c;
        scanf("%d",&c);
        freq[c]++;
    }

 int res = 0;
 for(int i = 0; i <= 100; i++){
         res += freq[i] / 2;
     }
 printf("%d",res);
 return 0;
}
