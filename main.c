#if 0
cat $0 && gcc $0 -o b && ./b; rm ./b
exit 0
#endif
#include <stdint.h>
int main() {
    const char* s = "helo wrd";
    const uint8_t l = strlen(s);
    int32_t p[8];
    int r, i, j, k, n = 0;
    memset(p, -1, sizeof(p));
    srand('b'<<24|'e'<<16|'e'<<8|'r');
    for (k = 0; k < l; n++, r = rand())
        for (j = 0; j < sizeof(r); j++)
            for (i = 0; i < l; i++)
                if (p[i] == -1 && s[i] == ((char*)&r)[j]) {
                    p[i] = n*4+j;
                    printf("%c: 0x%X\n", s[i], p[i]);
                    k++;
                }
}
