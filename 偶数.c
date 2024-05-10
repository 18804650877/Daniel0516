
#include <stdio.h>

int main() {
    int a[8]; 
    int b=0;   
	for (int i=0;i<8;i++) {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<8;i++) {
        if (a[i]%2==0) {
            b += a[i];
        }
    }

    printf("%d\n",b);

    return 0;
}


