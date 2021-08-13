#include <stdio.h>
#include <memory.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <unistd.h>

#include <string.h>


void fun(char* ss)
{

    {
        printf("%d\r\n",sizeof(ss));
        memcpy(ss, "1234567890+-", 12);
    }



}

int main(int n, char** s)
{
    char	s0[4096];
    char	ss[4];
    int	i = 0;
    char sss[2] = { 0 };
    int k = 0;
    char	s1[4096];
    char	s2[4096];
    long sz = sysconf(_SC_PAGESIZE); 
    void*  p = (unsigned long *)((long)&(s1[0]) &~(sz - 1)) ;
    printf("addr %p %p %p %p %p %d\r\n",ss,&i,sss,&k,p,sz);

    mprotect(p, sz*2, PROT_READ);
    printf("%s %d %s %d\r\n",ss, i,sss, k);
    fun((char*)sss);

    printf("%s %d %s %d\r\n",ss, i,sss, k);
    return 0;
}
