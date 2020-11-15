//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    char c;
    scanf("%d%*c", &t);
    while (t--) {
        int s = 0, cnt = 0;
        while (1) {
            scanf("%c", &c);
            if (c == '\n') break;
            if (c == 'O') s += ++cnt;
            if (c == 'X') cnt = 0;
        }
        printf("%d\n", s);
    }
    return 0;
}