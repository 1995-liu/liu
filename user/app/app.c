#include <includes.h>
int main(void)
{
    mocbox_GPIO_LED_Init();
    //EXTI_PC2_Config(void);
    LED_MJ_GRE_ON();
    LED_MJ_RED_ON();

    LED_KB_GRE_ON();
    LED_KB_RED_ON();

    LED_KY_GRE_ON();
    LED_KY_RED_ON();

    LED_KK_GRE_ON();
    LED_KK_RED_ON();
}
