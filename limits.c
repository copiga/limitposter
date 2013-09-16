#include <stdio.h>
#include <limits.h>

int main(void)
{
  puts("\n\t\t    sizes and lengths of types\n\n");
  

  printf("char\t\t\tbits:\t\t%d\tbytes:\t\t%d\n", sizeof(char)*8, sizeof(char));
  printf("\tmin:\t\t%d\t\t\t0x%X\t\t0%o\n\tmax:\t\t %d\t\t\t0x%X\t\t\t0%o\n\tunsigned:\t %u\t\t\t0x%X\t\t\t0%o\n\n", CHAR_MIN, CHAR_MIN, CHAR_MIN, CHAR_MAX, CHAR_MAX, CHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX);

  printf("short\t\t\tbits:\t\t%d\tbytes:\t\t%d\n", sizeof(short)*8, sizeof(short));
  printf("\tmin:\t\t%d\t\t\t0x%X\t\t0%o\n\tmax:\t\t %d\t\t\t0x%X\t\t\t0%o\n\tunsigned:\t %u\t\t\t0x%X\t\t\t0%o\n\n", SHRT_MIN, SHRT_MIN, SHRT_MIN, SHRT_MAX, SHRT_MAX, SHRT_MAX, USHRT_MAX, USHRT_MAX, USHRT_MAX);
  
  printf("int\t\t\tbits:\t\t%d\tbytes:\t\t%d\n", sizeof(int)*8, sizeof(int));
  printf("\tmin:\t\t%d\t\t0x%X\t\t0%o\n\tmax:\t\t %d\t\t0x%X\t\t0%o\n\tunsigned:\t %u\t\t0x%X\t\t0%o\n\n", INT_MIN, INT_MIN, INT_MIN, INT_MAX, INT_MAX, INT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
  
  printf("long long\t\tbits:\t\t%d\tbytes:\t\t%d\n", sizeof(long)*8, sizeof(long));
  printf("\tmin:\t\t%lld\t0x%llX\t0%llo\n\tmax:\t\t %lld\t0x%llX\t0%llo\n\tunsigned\t %llu\t0x%llX\t0%llo\n\n", LLONG_MIN, LLONG_MIN, LLONG_MIN, LLONG_MAX, LLONG_MAX, LLONG_MAX, ULLONG_MAX, ULONG_MAX, ULONG_MAX); 

  
  
  return 0;
}
