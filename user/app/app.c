#include <includes.h>
int main(void)
{
    static uint32_t i = 0;
    mocbox_GPIO_LED_Init();

    while(1){

        LED_VBT_GRE_OFF();
        LED_Close_RED_ON();

        LED_Open_GRE_OFF();
        LED_VBT_RED_ON();

        LED_MJ_GRE_OFF();
        LED_MJ_RED_ON();
        
        LED_KB_GRE_OFF();
        LED_KB_RED_ON();
        
        LED_KY_GRE_OFF();
        LED_KY_RED_ON();

        LED_KK_GRE_OFF();
        LED_KK_RED_ON();

        LED_VCC_12V_GRE_OFF();
        LED_Open_RED_ON();

        LED_PS_GRE_OFF();
        LED_CAN_RED_ON();

        LED_BT_GRE_OFF();
        LED_PS_RED_ON();

        LED_BC_GRE_OFF();
        LED_VANG_RED_ON();
        
        for(i = 0;i <=500000;i++){;}
        
        LED_VBT_GRE_ON();
        LED_Close_RED_OFF();

        LED_Open_GRE_ON();
        LED_VBT_RED_OFF();
        
        LED_MJ_GRE_ON();
        LED_MJ_RED_OFF();
        
        LED_KB_GRE_ON();
        LED_KB_RED_OFF();
        
        LED_KY_GRE_ON();
        LED_KY_RED_OFF();

        LED_KK_GRE_ON();
        LED_KK_RED_OFF();

        LED_VCC_12V_GRE_ON();
        LED_Open_RED_OFF();

        LED_PS_GRE_ON();
        LED_CAN_RED_OFF();

        LED_BT_GRE_ON();
        LED_PS_RED_OFF();

        LED_BC_GRE_ON();
        LED_VANG_RED_OFF();
        
        for(i = 0;i <=500000;i++){;}
    }

}
