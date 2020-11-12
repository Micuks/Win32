#include "headfile.h"
void main()
{
    int count;
    DisableInterrupts;
    gpio_init(PTA1, 1, 0); //第四位
    gpio_init(PTA2, 1, 0); //第三位
    gpio_init(PTA3, 1, 0); //第二位
    gpio_init(PTA5, 1, 0); //第一位
    EnableInterrupts;
    while (1)
    {
        for (count = 1; count < 2 * 2 * 2 * 2; count++)
        {
            int temp = count;
            if (temp % 2 == 1 && temp > 0)
                gpio_init(PTA5, 1, 1);
            else
                gpio_init(PTA5, 1, 0);
            temp /= 2;
            if (temp % 2 == 1 && temp > 0)
                gpio_init(PTA3, 1, 1);
            else
                gpio_init(PTA3, 1, 0);
            temp /= 2;
            if (temp % 2 == 1 && temp > 0)
                gpio_init(PTA2, 1, 1);
            else
                gpio_init(PTA2, 1, 0);
            temp /= 2;
            if (temp % 2 == 1 && temp > 0)
                gpio_init(PTA1, 1, 1);
            else
                gpio_init(PTA1, 1, 0);
            temp /= 2;
            delayms(1000);
        }
    }
}
