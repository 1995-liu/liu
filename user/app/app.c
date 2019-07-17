#include <includes.h>
int main(void)
{
    static uint32_t i = 0;
    mocbox_GPIO_LED_Init();

    while(1){
        
        LED_MJ_GRE_OFF();
        LED_MJ_RED_ON();
        
        LED_KB_GRE_OFF();
        LED_KB_RED_ON();
        
        LED_KY_GRE_OFF();
        LED_KY_RED_ON();
        
        for(i = 0;i <=500000;i++){;}
        
        LED_MJ_GRE_ON();
        LED_MJ_RED_OFF();
        
        LED_KB_GRE_ON();
        LED_KB_RED_OFF();
        
        LED_KY_GRE_ON();
        LED_KY_RED_OFF();
        
        for(i = 0;i <=500000;i++){;}
    }

}
