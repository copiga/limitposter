#include <stdio.h>
#include <limits.h>

int main(void)
{
  puts("\n\t\t    sizes and lengths of types\n\n");
  

  printf("char\t\t\tbits:\t\t%d\tbytes:\t\t%d\n", sizeof(char)*8, sizeof(char));
  printf("\tmin:\t\t%d\n\tmax:\t\t %d\n\tunsigned:\t %u\n\n", CHAR_MIN, CHAR_MAX, UCHAR_MAX);

  printf("short\t\t\tbits:\t\t%d\tbytes:\t\t%d\n", sizeof(short)*8, sizeof(short));
  printf("\tmin:\t\t%d\n\tmax:\t\t %d\n\tunsigned:\t %u\n\n", SHRT_MIN, SHRT_MAX, USHRT_MAX);
  
  printf("int\t\t\tbits:\t\t%d\tbytes:\t\t%d\n", sizeof(int)*8, sizeof(int));
  printf("\tmin:\t\t%d\n\tmax:\t\t %d\n\tunsigned:\t %u\n\n", INT_MIN, INT_MAX, UINT_MAX);
  
  printf("long long\t\tbits:\t\t%d\tbytes:\t\t%d\n", sizeof(long)*8, sizeof(long));
  printf("\tmin:\t\t%lld\n\tmax:\t\t %lld\n\tunsigned\t %llu\n\n", LLONG_MIN, LLONG_MAX, ULLONG_MAX); 

  
  
  return 0;
}
