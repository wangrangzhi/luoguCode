int main()
{
    struct time
    {
        int school;                                        //�����ѧУ�Ͽε�ʱ��Ϊschool(Сʱ)
        int mother;                                        //���谲�Ž���Ͽε�ʱ��Ϊmother(Сʱ)
    };
    struct time day[7];                                    //����һ�����ڵ�7��
    int a,unhappy,total,max;
    for(a=0;a<=6;a++)
        scanf("%d %d",&day[a].school,&day[a].mother);    //��������н����������Ͽ�ʱ��
    for(a=unhappy=max=0;a<=6;a++)                        //������7���ÿһ��
    {
        total=day[a].school+day[a].mother;                //�������Ͽε���ʱ��Ϊtotal(Сʱ)
        if(total>8 && total>max)                        //�����ʱ�䳬��8(Сʱ)�����ͻ᲻����
        {
            unhappy=a+1;                                //����һ�������������unhappy
            max=total;                                    //����һ�����ʱ��������max
        }
    }                                                    //ѭ������ʱ��maxΪ���������Ͽ���ʱ������ֵ
    printf("%d\n",unhappy);                                //����������˵�һ���������unhappy
    return 0;
}
