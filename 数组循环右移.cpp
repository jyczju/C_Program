#include <stdio.h>
#define MAXN 10

int ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);

    ArrayShift(a, n, m);

    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

int ArrayShift( int a[], int n, int m ){
	int i;
	static int b[20];
	m=m%n;
	for(i=0;i<n;i++){
		b[i+m]=a[i];
	}
	for(i=0;i<m;i++){
		b[i]=b[i+n];
	}
	for(i=0;i<n;i++){
		a[i]=b[i];
	}
}
