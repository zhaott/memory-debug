# memory-debug
memory error debug
build file  run in gdb

Program received signal SIGSEGV, Segmentation fault.
0x00007ffff7b5c667 in __memcpy_ssse3 () from /lib64/libc.so.6
Missing separate debuginfos, use: debuginfo-install glibc-2.17-222.el7.x86_64
(gdb) bt
#0  0x00007ffff7b5c667 in __memcpy_ssse3 () from /lib64/libc.so.6
#1  0x0000000000400618 in fun(char*) ()
#2  0x0000000000400712 in main ()
