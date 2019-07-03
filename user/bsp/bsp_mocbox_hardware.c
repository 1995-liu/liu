#define __BSP_MOCBOX_HARDWARE_C__
#include "bsp_mocbox_hardware.h"
#undef __BSP_MOCBOX_HARDWARE_C__

void mocbox_GPIO_LED_Init(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;
    
    GPIO_InitStructure.GPIO_Pin = LED_MJ_RED_GPIO_PIN;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(LED_MJ_RED_GPIO_PORT, &GPIO_InitStructure);
    
    GPIO_InitStructure.GPIO_Pin = LED_MJ_GRE_GPIO_PIN;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(LED_MJ_GRE_GPIO_PORT, &GPIO_InitStructure);

    
    GPIO_InitStructure.GPIO_Pin = LED_KB_RED_GPIO_PIN;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(LED_KB_RED_GPIO_PORT, &GPIO_InitStructure);
        
    GPIO_InitStructure.GPIO_Pin = LED_KB_GRE_GPIO_PIN;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(LED_KB_GRE_GPIO_PORT, &GPIO_InitStructure);

    GPIO_InitStructure.GPIO_Pin = LED_KY_RED_GPIO_PIN;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(LED_KY_RED_GPIO_PORT, &GPIO_InitStructure);
            
    GPIO_InitStructure.GPIO_Pin = LED_KY_GRE_GPIO_PIN;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(LED_KY_GRE_GPIO_PORT, &GPIO_InitStructure);

    GPIO_InitStructure.GPIO_Pin = LED_KK_RED_GPIO_PIN;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(LED_KK_RED_GPIO_PORT, &GPIO_InitStructure);
                
    GPIO_InitStructure.GPIO_Pin = LED_KK_GRE_GPIO_PIN;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(LED_KK_GRE_GPIO_PORT, &GPIO_InitStructure);
}
