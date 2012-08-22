#if 0
cat $0 && gcc $0 -o b && ./b
exit 0
#endif
#include <stdint.h>
int main() {
    const char* s = "helo wrd";
    int32_t result[8];
    uint8_t l = strlen(s);
    int random;
    int i, j, k, n = 0;
    memset(result, -1, sizeof(result));
    srand('b'<<24|'e'<<16|'e'<<8|'r');
    for (k = 0; k < l; n++, random = rand()) {
        //printf("%03X: 0x%08X\n", n, random);
        for (j = 0; j < sizeof(int); j++) {
            for (i = 0; i < l; i++) {
                if (result[i] == -1 && s[i] == ((char*)&random)[j]) {
                    result[i] = n*4+j;
                    printf("%c (0x%X): 0x%02X\n", s[i], s[i], result[i]);
                    k++;
                }
            }
        }
    }
    /*
    012345678901
    helo wrd!
    hello world!
    0->0
    1->1
    2->2,3,9
    3->4,7
    4->5
    5->6
    6->8
    7->10
    8->11
    */
done:
    return 0;
}
