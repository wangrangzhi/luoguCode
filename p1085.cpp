int main()
{
    struct time
    {
        int school;                                        //津津在学校上课的时间为school(小时)
        int mother;                                        //妈妈安排津津上课的时间为mother(小时)
    };
    struct time day[7];                                    //对于一个星期的7天
    int a,unhappy,total,max;
    for(a=0;a<=6;a++)
        scanf("%d %d",&day[a].school,&day[a].mother);    //输入各天中津津的两部分上课时间
    for(a=unhappy=max=0;a<=6;a++)                        //对于这7天的每一天
    {
        total=day[a].school+day[a].mother;                //当天津津上课的总时间为total(小时)
        if(total>8 && total>max)                        //如果总时间超过8(小时)，津津就会不高兴
        {
            unhappy=a+1;                                //将这一天的星期数赋给unhappy
            max=total;                                    //将这一天的总时间数赋给max
        }
    }                                                    //循环结束时，max为这星期中上课总时间的最大值
    printf("%d\n",unhappy);                                //输出津津最不高兴的一天的星期数unhappy
    return 0;
}
