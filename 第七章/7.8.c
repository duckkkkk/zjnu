#include <stdio.h>
#include <string.h>
int main()
{char str[80];
 void insert(char []);
 printf("����һ����λ����:");
 scanf("%s",str);
 insert(str);
 return 0;
}
void insert(char str[])
{int i;
 for (i=strlen(str);i>0;i--)
  {str[2*i]=str[i];
   str[2*i-1]=' ';
  }
 printf("���Ϊ:\n%s\n",str);
}

