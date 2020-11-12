//这是一个简单的顺序执行的例子 
#include <stdio.h>
int main()
{
    //定义变量 
    int age, day;

    //与电脑对话，输入你的年龄 ，回车确认 
    printf("你的年龄是", age);
    scanf("%d", &age);

    //按照每年365天换算成天数 
    day = 365 * age;
    
    printf("所以，你今年%d岁，一共是约 %d 天。\n", age, day);
            //为了让你有足够的时间看清楚屏幕内容，等待回车继续 

        getchar();
    //程序退出 
    return 0;
}