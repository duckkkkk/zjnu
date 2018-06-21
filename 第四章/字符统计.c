#include <stdio.h>
int main()
{
 int letter=0,space=0,number=0,others=0;
 char nextchar;
 printf("请输入一行字符\n");
 for(;nextchar!='\n';)
 {
  scanf("%c",&nextchar);
  if(('a'<=nextchar&&nextchar<='z')||('A'<=nextchar&&nextchar<='Z'))
   letter++;
  else if(nextchar==' ')
   space++;
  else if('0'<=nextchar&&nextchar<='9')
   number++;
  else
   others++;
 }
 printf("中英文字母=%d,空格=%d,数字=%d,其他字符=%d\n",letter,space,number,--others);
}
