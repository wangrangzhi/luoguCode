#include<stdio.h>
int main()
{
   int x;
   long long int n,i,sum=0;
   scanf("%d%lld",&x,&n);//�������ں� ����
   for(i=1;i<=n;i++)
   {
        switch(x)//�����������ж�
        {
           case 1:case 2:case 3:case 4:case 5:sum+=250;
           case 6: x++;continue;//���������� ������һѭ��
           case 7:x=1;continue;//��������Ϊ����һ ��������һѭ��
        }
      x++;//����������� ������һ��
  }
  printf("%lld\n",sum);//���������
  return 0;
}
