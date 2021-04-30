#include<stdio.h>

int main()
{
    int i, j, i1, j1, n=1, bayal[500][500];
    scanf("%d %d", &i1, &j1);
    for(i=1;i<=i1;i++) {
        if (i%2==1) {
            for(j=1;j<=j1;j++) {
                bayal[i][j]=n++;
            }
        }
        else {
            for(j=j1;j>=1;j--) {
                bayal[i][j]=n++;
            }
        }
    }
    for(i=1;i<=i1;i++) {
        for(j=1;j<=j1;j++) {
            printf("%d ", bayal[i][j]);
        }
        printf("\n");
    }
    return 0;
}