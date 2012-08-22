#if 0
cat $0 && gcc $0 -o b && ./b; rm ./b; exit 0
#endif
#include <stdint.h>
int main() {
    const char* s = "helo wrd";
    int r, i, j, k, n = 0, p[8];
    memset(p, -1, sizeof(p));
    srand('b'<<24|'e'<<16|'e'<<8|'r');
    for (k = 0; k < 8; n++, r = rand())
        for (j = 0; j < sizeof(r); j++)
            for (i = 0; i < 8; i++)
                if (p[i] == -1 && s[i] == ((char*)&r)[j]) {
                    printf("%c: 0x%X\n", s[i], p[i] = n*4+j);
                    k++;
                }
}
