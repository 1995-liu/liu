/******************************************************************************
* @file    BSP_MOCBOX_HARDWARE.h
* $Author: ericwong
* $Revision: 17 $
* $Date:: 2016-08-26 00:13:00 +0800
* @brief   BSP_MOCBOX_HARDWARE
******************************************************************************
* @attention
*
*<h3><center>&copy; Copyright 2009-2012, EmbedNet</center>
*<center><a href="http:\\www.embed-net.com">http://www.embed-net.com</a></center>
*<center>All Rights Reserved</center></h3>
*
*******************************************************************************/
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __BSP_MOCBOX_HARDWARE_H__
#define __BSP_MOCBOX_HARDWARE_H__
/* Includes ------------------------------------------------------------------*/
#include <includes.h>
/* BSP_MOCBOX_HARDWARE Define -----------------------------------------------------------*/
#undef BSP_MOCBOX_HARDWARE
#undef LOCAL_GLOBAL
#ifdef __BSP_MOCBOX_HARDWARE_C__
#define BSP_MOCBOX_HARDWARE
#define LOCAL_GLOBAL
#else
#define BSP_MOCBOX_HARDWARE extern
#endif
/* GLOBAL Define -------------------------------------------------------------*/
/*
*********************************************************************************************************
*                                          GLOBAL EXCEPTION DEFINES
*********************************************************************************************************
*/

/******************************* OBD GPIO PORT DEF ************************************/
//OBD status read OK
#define     mocbox_OBD_STATUS_GPIO_PORT     GPIOA
#define     mocbox_OBD_STATUS_GPIO_PIN      GPIO_Pin_0
#define     mocbox_OBD_STATUS_Read()        GPIO_ReadInputDataBit(mocbox_OBD_STATUS_GPIO_PORT, mocbox_OBD_STATUS_GPIO_PIN)

/******************************* BATTERY GPIO PORT DEF ************************************/
//RD_PWREN
#define     mocbox_RD_PWREN_GPIO_PORT       GPIOA
#define     mocbox_RD_PWREN_GPIO_PIN        GPIO_Pin_1
#define     mocbox_RD_PWREN_Enable()        GPIO_SetBits(mocbox_RD_PWREN_GPIO_PORT, mocbox_RD_PWREN_GPIO_PIN)
#define     mocbox_RD_PWREN_Disable()       GPIO_ResetBits(mocbox_RD_PWREN_GPIO_PORT, mocbox_RD_PWREN_GPIO_PIN)

/****************************** 12V   POWER  GPIO PORT DEF ***********************************/
//
#define     mocbox_12V2X5OUT_EN_GPIO_PORT              GPIOA
#define     mocbox_12V2X5OUT_EN_GPIO_PIN               GPIO_Pin_4
#define     mocbox_12V2X5OUT_EN_OutputL()              GPIO_ResetBits(mocbox_12V2X5OUT_EN_GPIO_PORT,mocbox_12V2X5OUT_EN_GPIO_PIN);
#define     mocbox_12V2X5OUT_EN_OutputH()              GPIO_SetBits(mocbox_12V2X5OUT_EN_GPIO_PORT,mocbox_12V2X5OUT_EN_GPIO_PIN); 

//
#define     mocbox_12VRJ45OUT_EN_GPIO_PORT              GPIOA
#define     mocbox_12VRJ45OUT_EN_GPIO_PIN               GPIO_Pin_5
#define     mocbox_12VRJ45OUT_EN_OutputL()              GPIO_ResetBits(mocbox_12VRJ45OUT_EN_GPIO_PORT,mocbox_12VRJ45OUT_EN_GPIO_PIN);
#define     mocbox_12VRJ45OUT_EN_OutputH()              GPIO_SetBits(mocbox_12VRJ45OUT_EN_GPIO_PORT,mocbox_12VRJ45OUT_EN_GPIO_PIN); 

//
#define     mocbox_12V2X12OUT_EN_GPIO_PORT             GPIOA
#define     mocbox_12V2X12OUT_EN_GPIO_PIN              GPIO_Pin_6
#define     mocbox_12V2X12OUT_EN_OutputL()              GPIO_ResetBits(mocbox_12V2X12OUT_EN_GPIO_PORT,mocbox_12V2X12OUT_EN_GPIO_PIN);
#define     mocbox_12V2X12OUT_EN_OutputH()              GPIO_SetBits(mocbox_12V2X12OUT_EN_GPIO_PORT,mocbox_12V2X12OUT_EN_GPIO_PIN); 


/****************************** USART GPIO PORT DEF ***********************************/
//USART1_TXD OK
#define     mocbox_USART1_TXD_GPIO_PORT             GPIOA
#define     mocbox_USART1_TXD_GPIO_PIN              GPIO_Pin_9
#define     mocbox_USART1_TXD_OutputH()             GPIO_SetBits(mocbox_USART1_TXD_GPIO_PORT, mocbox_USART1_TXD_GPIO_PIN)
#define     mocbox_USART1_TXD_OutputL()             GPIO_ResetBits(mocbox_USART1_TXD_GPIO_PORT, mocbox_USART1_TXD_GPIO_PIN)

//USART1_RXD OK
#define     mocbox_USART1_RXD_GPIO_PORT             GPIOA
#define     mocbox_USART1_RXD_GPIO_PIN              GPIO_Pin_10
#define     mocbox_USART1_RXD_OutputH()             GPIO_SetBits(mocbox_USART1_RXD_GPIO_PORT, mocbox_USART1_RXD_GPIO_PIN)
#define     mocbox_USART1_RXD_OutputL()             GPIO_ResetBits(mocbox_USART1_RXD_GPIO_PORT, mocbox_USART1_RXD_GPIO_PIN)

//USART2_TXD OK
#define     mocbox_USART2_TXD_GPIO_PORT             GPIOA
#define     mocbox_USART2_TXD_GPIO_PIN              GPIO_Pin_2
//USART2_RXD OK
#define     mocbox_USART2_RXD_GPIO_PORT             GPIOA
#define     mocbox_USART2_RXD_GPIO_PIN              GPIO_Pin_3
//USART3_TXD OK
#define     mocbox_USART3_TXD_GPIO_PORT             GPIOB
#define     mocbox_USART3_TXD_GPIO_PIN              GPIO_Pin_10
//USART3_RXD OK
#define     mocbox_USART3_RXD_GPIO_PORT             GPIOB
#define     mocbox_USART3_RXD_GPIO_PIN              GPIO_Pin_11
//USART4_TXD OK
#define     mocbox_USART4_TXD_GPIO_PORT             GPIOC
#define     mocbox_USART4_TXD_GPIO_PIN              GPIO_Pin_10
//USART4_RXD OK
#define     mocbox_USART4_RXD_GPIO_PORT             GPIOC
#define     mocbox_USART4_RXD_GPIO_PIN              GPIO_Pin_11
//USART5_TXD OK
#define     mocbox_USART5_TXD_GPIO_PORT             GPIOC
#define     mocbox_USART5_TXD_GPIO_PIN              GPIO_Pin_12
//USART5_RXD OK
#define     mocbox_USART5_RXD_GPIO_PORT             GPIOD
#define     mocbox_USART5_RXD_GPIO_PIN              GPIO_Pin_2

/****************************** CAN GPIO PORT DEF *************************************/
//P1_CAN_STB CTRL OK
#define     mocbox_CAN_STB_GPIO_PORT                GPIOB
#define     mocbox_CAN_STB_GPIO_PIN                 GPIO_Pin_3
#define     mocbox_CAN_STB_STANDBY_HIGH()           GPIO_SetBits(mocbox_CAN_STB_GPIO_PORT, mocbox_CAN_STB_GPIO_PIN)
#define     mocbox_CAN_STB_NORMAL_LOW()             GPIO_ResetBits(mocbox_CAN_STB_GPIO_PORT, mocbox_CAN_STB_GPIO_PIN)
//MCU_P1_CAN_RX OK
#define     mocbox_MCU_CAN_RX_GPIO_PORT             GPIOA
#define     mocbox_MCU_CAN_RX_GPIO_PIN              GPIO_Pin_11
//MCU_P1_CAN_TX OK
#define     mocbox_MCU_CAN_TX_GPIO_PORT             GPIOA
#define     mocbox_MCU_CAN_TX_GPIO_PIN              GPIO_Pin_12

/****************************** POEWR GPIO PORT DEF ***********************************/
//MP1584_EN ctrl OK
#define     mocbox_MP1584_EN_GPIO_PORT              GPIOA
#define     mocbox_MP1584_EN_GPIO_PIN               GPIO_Pin_8
#define     mocbox_MP1584_EN_Enable()               GPIO_SetBits(mocbox_MP1584_EN_GPIO_PORT, mocbox_MP1584_EN_GPIO_PIN)
#define     mocbox_MP1584_EN_Disable()              GPIO_ResetBits(mocbox_MP1584_EN_GPIO_PORT, mocbox_MP1584_EN_GPIO_PIN)

//WD_WDI OK
#define     mocbox_WD_WDI_GPIO_PORT                 GPIOC
#define     mocbox_WD_WDI_GPIO_PIN                  GPIO_Pin_9
#define     mocbox_WD_WDI_OutputH()                 GPIO_SetBits(mocbox_WD_WDI_GPIO_PORT, mocbox_WD_WDI_GPIO_PIN)
#define     mocbox_WD_WDI_OutputL()                 GPIO_ResetBits(mocbox_WD_WDI_GPIO_PORT, mocbox_WD_WDI_GPIO_PIN)

/******************************* LED GPIO PORT DEF ************************************/
#define     mocbox_LED_GPIO_PORT                    GPIOB
//LED_GPSSTATUS ctrl OK
#define     mocbox_LED_GPS_GPIO_PORT                GPIOB
#define     mocbox_LED_GPS_GPIO_PIN                 GPIO_Pin_0
#define     mocbox_LED_GPS_On()                     GPIO_ResetBits(mocbox_LED_GPS_GPIO_PORT, mocbox_LED_GPS_GPIO_PIN)
#define     mocbox_LED_GPS_Off()                    GPIO_SetBits(mocbox_LED_GPS_GPIO_PORT, mocbox_LED_GPS_GPIO_PIN)
//LED_DOORSTATUS ctrl OK
#define     mocbox_LED_DOOR_GPIO_PORT               GPIOB
#define     mocbox_LED_DOOR_GPIO_PIN                GPIO_Pin_1
#define     mocbox_LED_DOOR_On()                    GPIO_ResetBits(mocbox_LED_DOOR_GPIO_PORT, mocbox_LED_DOOR_GPIO_PIN)
#define     mocbox_LED_DOOR_Off()                   GPIO_SetBits(mocbox_LED_DOOR_GPIO_PORT, mocbox_LED_DOOR_GPIO_PIN)
//LED_IMMOSTATUS ctrl OK
#define     mocbox_LED_IMMO_GPIO_PORT               GPIOB
#define     mocbox_LED_IMMO_GPIO_PIN                GPIO_Pin_2
#define     mocbox_LED_IMMO_On()                    GPIO_ResetBits(mocbox_LED_IMMO_GPIO_PORT, mocbox_LED_IMMO_GPIO_PIN)
#define     mocbox_LED_IMMO_Off()                   GPIO_SetBits(mocbox_LED_IMMO_GPIO_PORT, mocbox_LED_IMMO_GPIO_PIN)

/******************************* Holder GPIO PORT DEF ************************************/
//Keyholder
#define     mocbox_KeyHoderIn_GPIO_PORT             GPIOB
#define     mocbox_KeyHoderIn_GPIO_PIN              GPIO_Pin_8
#define     mocbox_KeyHoderIn_OutputL()             GPIO_ResetBits(mocbox_KeyHoderIn_GPIO_PORT, mocbox_KeyHoderIn_GPIO_PIN)
#define     mocbox_KeyHoderIn_OutputH()             GPIO_SetBits(mocbox_KeyHoderIn_GPIO_PORT, mocbox_KeyHoderIn_GPIO_PIN)
#define     mocbox_KeyHoderIn_CHECK_read()          GPIO_ReadInputDataBit(mocbox_KeyHoderIn_GPIO_PORT, mocbox_KeyHoderIn_GPIO_PIN)

//CardHolder
#define     mocbox_CardHolderInA_GPIO_PORT          GPIOE
#define     mocbox_CardHolderInA_GPIO_PIN           GPIO_Pin_2
#define     mocbox_CardHolderInA_OutputL()             GPIO_ResetBits(mocbox_CardHolderInA_GPIO_PORT, mocbox_CardHolderInA_GPIO_PIN)
#define     mocbox_CardHolderInA_OutputH()             GPIO_SetBits(mocbox_CardHolderInA_GPIO_PORT, mocbox_CardHolderInA_GPIO_PIN)
#define     mocbox_CardHolderInA_CHECK_read()       GPIO_ReadInputDataBit(mocbox_CardHolderInA_GPIO_PORT, mocbox_CardHolderInA_GPIO_PIN)

#define     mocbox_CardHolderInB_GPIO_PORT          GPIOE
#define     mocbox_CardHolderInB_GPIO_PIN           GPIO_Pin_0
#define     mocbox_CardHolderInB_OutputL()             GPIO_ResetBits(mocbox_CardHolderInB_GPIO_PORT, mocbox_CardHolderInB_GPIO_PIN)
#define     mocbox_CardHolderInB_OutputH()             GPIO_SetBits(mocbox_CardHolderInB_GPIO_PORT, mocbox_CardHolderInB_GPIO_PIN)
#define     mocbox_CardHolderInB_CHECK_read()       GPIO_ReadInputDataBit(mocbox_CardHolderInB_GPIO_PORT, mocbox_CardHolderInB_GPIO_PIN)

/******************************* ignition GPIO PORT DEF ************************************/
#define     mocbox_IgnitionSens_GPIO_PORT           GPIOD
#define     mocbox_IgnitionSens_GPIO_PIN            GPIO_Pin_3
#define     mocbox_IgnitionSens_OutputL()           GPIO_ResetBits(mocbox_IgnitionSens_GPIO_PORT, mocbox_IgnitionSens_GPIO_PIN)
#define     mocbox_IgnitionSens_OutputH()           GPIO_SetBits(mocbox_IgnitionSens_GPIO_PORT, mocbox_IgnitionSens_GPIO_PIN)

#define     mocbox_VSSSens_GPIO_PORT           GPIOD
#define     mocbox_VSSSens_GPIO_PIN            GPIO_Pin_4
#define     mocbox_VSSSens_OutputL()           GPIO_ResetBits(mocbox_VSSSens_GPIO_PORT, mocbox_VSSSens_GPIO_PIN)
#define     mocbox_VSSSens_OutputH()           GPIO_SetBits(mocbox_VSSSens_GPIO_PORT, mocbox_VSSSens_GPIO_PIN)


/****************************** HCT GPIO PORT DEF **************************************/
#define     mocbox_HCT_GPIO_PORT                    GPIOB
//HCT_2A
#define     mocbox_HCT_2A_GPIO_PORT                 GPIOB
#define     mocbox_HCT_2A_GPIO_PIN                  GPIO_Pin_12
#define     mocbox_HCT_2A_OutputH()                 GPIO_SetBits(mocbox_HCT_2A_GPIO_PORT, mocbox_HCT_2A_GPIO_PIN)
#define     mocbox_HCT_2A_OutputL()                 GPIO_ResetBits(mocbox_HCT_2A_GPIO_PORT, mocbox_HCT_2A_GPIO_PIN)

//HCT_6A
#define     mocbox_HCT_6A_GPIO_PORT                 GPIOB
#define     mocbox_HCT_6A_GPIO_PIN                  GPIO_Pin_13
#define     mocbox_HCT_6A_OutputH()                 GPIO_SetBits(mocbox_HCT_6A_GPIO_PORT, mocbox_HCT_6A_GPIO_PIN)
#define     mocbox_HCT_6A_OutputL()                 GPIO_ResetBits(mocbox_HCT_6A_GPIO_PORT, mocbox_HCT_6A_GPIO_PIN)
//HCT_5A
#define     mocbox_HCT_5A_GPIO_PORT                 GPIOB
#define     mocbox_HCT_5A_GPIO_PIN                  GPIO_Pin_14
#define     mocbox_HCT_5A_OutputH()                 GPIO_SetBits(mocbox_HCT_5A_GPIO_PORT, mocbox_HCT_5A_GPIO_PIN)
#define     mocbox_HCT_5A_OutputL()                 GPIO_ResetBits(mocbox_HCT_5A_GPIO_PORT, mocbox_HCT_5A_GPIO_PIN)
//HCT_4A
#define     mocbox_HCT_4A_GPIO_PORT                 GPIOB
#define     mocbox_HCT_4A_GPIO_PIN                  GPIO_Pin_15
#define     mocbox_HCT_4A_OutputH()                 GPIO_SetBits(mocbox_HCT_4A_GPIO_PORT, mocbox_HCT_4A_GPIO_PIN)
#define     mocbox_HCT_4A_OutputL()                 GPIO_ResetBits(mocbox_HCT_4A_GPIO_PORT, mocbox_HCT_4A_GPIO_PIN)


/****************************** ADC GPIO PORT DEF **************************************/
#define     mocbox_ADC_VBT_GPIO_PORT                GPIOA
#define     mocbox_ADC_VBT_GPIO_PIN                 GPIO_Pin_0

#define     mocbox_ADC_VCC4V2_GPS_GPIO_PORT         GPIOA
#define     mocbox_ADC_VCC4V2_GPS_GPIO_PIN          GPIO_Pin_1

#define     mocbox_ADC_VB_GPIO_PORT                 GPIOA
#define     mocbox_ADC_VB_GPIO_PIN                  GPIO_Pin_2

#define     mocbox_ADC_VCC3V3_0_GPIO_PORT           GPIOA
#define     mocbox_ADC_VCC3V3_0_GPIO_PIN            GPIO_Pin_3

#define     mocbox_ADC_V3G_GPIO_PORT                GPIOF
#define     mocbox_ADC_V3G_GPIO_PIN                 GPIO_Pin_7

#define     mocbox_ADC_VCC4V2_GPIO_PORT             GPIOF
#define     mocbox_ADC_VCC4V2_GPIO_PIN              GPIO_Pin_8

#define     mocbox_ADC_VANG_GPIO_PORT               GPIOF
#define     mocbox_ADC_VANG_GPIO_PIN                GPIO_Pin_9

#define     mocbox_ADC_VCC3V3_KEY_GPIO_PORT         GPIOF
#define     mocbox_ADC_VCC3V3_KEY_GPIO_PIN          GPIO_Pin_10

#define     mocbox_ADC_VCC4V2_O_GPIO_PORT           GPIOC
#define     mocbox_ADC_VCC4V2_O_GPIO_PIN            GPIO_Pin_0

#define     mocbox_ADC_PS_GPIO_PORT                 GPIOC
#define     mocbox_ADC_PS_GPIO_PIN                  GPIO_Pin_1

#define     mocbox_ADC_BS_GPIO_PORT                 GPIOC
#define     mocbox_ADC_BS_GPIO_PIN                  GPIO_Pin_2

#define     mocbox_ADC_VCC12V_O_GPIO_PORT           GPIOC
#define     mocbox_ADC_VCC12V_O_GPIO_PIN            GPIO_Pin_3


/******************************* MCU ********************************/
//MCU_3Y Ignition
#define     mocbox_MCU_3Y_Ignition_GPIO_PORT        GPIOC
#define     mocbox_MCU_3Y_Ignition_GPIO_PIN         GPIO_Pin_4
#define     mocbox_MCU_3Y_Ignition_CHECK_read()     GPIO_ReadInputDataBit(mocbox_MCU_3Y_Ignition_GPIO_PORT, mocbox_MCU_3Y_Ignition_GPIO_PIN)

//MCU_1Y_VSS
#define     mocbox_MCU_1Y_VSS_GPIO_PORT             GPIOC
#define     mocbox_MCU_1Y_VSS_GPIO_PIN              GPIO_Pin_5
#define     mocbox_MCU_1Y_VSS_CHECK_read()          GPIO_ReadInputDataBit(mocbox_MCU_1Y_VSS_GPIO_PORT, mocbox_MCU_1Y_VSS_GPIO_PIN)

/******************************* MCU ********************************/
#define     mocbox_RELAYA_MCUCTRL_GPIO_PORT         GPIOC
#define     mocbox_RELAYA_MCUCTRL_GPIO_PIN          GPIO_Pin_6

#define     mocbox_RELAYA_MCUCTRL_GPIO_PORT         GPIOC
#define     mocbox_RELAYB_MCUCTRL_GPIO_PIN          GPIO_Pin_7

/****************************** PINPAD GPIO PORT DEF **************************************/
#define     mocbox_PINPAD_PWREN_GPIO_PORT           GPIOC
#define     mocbox_PINPAD_PWREN_GPIO_PIN            GPIO_Pin_3
#define     mocbox_PINPAD_PWREN_ON()                GPIO_SetBits(mocbox_PINPAD_PWREN_GPIO_PORT, mocbox_PINPAD_PWREN_GPIO_PIN)
#define     mocbox_PINPAD_PWREN_OFF()               GPIO_ResetBits(mocbox_PINPAD_PWREN_GPIO_PORT, mocbox_PINPAD_PWREN_GPIO_PIN)


/****************************** LED GPIO PORT DEF **************************************/
//????
//VCC_12V_LED
#define     LED_VCC_12V_RED_GPIO_PORT               GPIOF
#define     LED_VCC_12V_RED_GPIO_PIN                GPIO_Pin_15
#define     LED_VCC_12V_RED_OFF()                   GPIO_SetBits(LED_VCC_12V_RED_GPIO_PORT, LED_VCC_12V_RED_GPIO_PIN)
#define     LED_VCC_12V_RED_ON()                    GPIO_ResetBits(LED_VCC_12V_RED_GPIO_PORT, LED_VCC_12V_RED_GPIO_PIN)

#define     LED_VCC_12V_GRE_GPIO_PORT               GPIOF
#define     LED_VCC_12V_GRE_GPIO_PIN                GPIO_Pin_13
#define     LED_VCC_12V_GRE_OFF()                   GPIO_SetBits(LED_VCC_12V_GRE_GPIO_PORT, LED_VCC_12V_GRE_GPIO_PIN)
#define     LED_VCC_12V_GRE_ON()                    GPIO_ResetBits(LED_VCC_12V_GRE_GPIO_PORT, LED_VCC_12V_GRE_GPIO_PIN)

//VCC_4V2_O_LED
#define     LED_VCC_4V2_O_RED_GPIO_PORT             GPIOC
#define     LED_VCC_4V2_O_RED_GPIO_PIN              GPIO_Pin_5
#define     LED_VCC_4V2_O_RED_OFF()                 GPIO_SetBits(LED_VCC_4V2_O_RED_GPIO_PORT, LED_VCC_4V2_O_RED_GPIO_PIN)
#define     LED_VCC_4V2_O_RED_ON()                  GPIO_ResetBits(LED_VCC_4V2_O_RED_GPIO_PORT, LED_VCC_4V2_O_RED_GPIO_PIN)

#define     LED_VCC_4V2_O_GRE_GPIO_PORT             GPIOA
#define     LED_VCC_4V2_O_GRE_GPIO_PIN              GPIO_Pin_7
#define     LED_VCC_4V2_O_GRE_OFF()                 GPIO_SetBits(LED_VCC_4V2_O_GRE_GPIO_PORT, LED_VCC_4V2_O_GRE_GPIO_PIN)
#define     LED_VCC_4V2_O_GRE_ON()                  GPIO_ResetBits(LED_VCC_4V2_O_GRE_GPIO_PORT, LED_VCC_4V2_O_GRE_GPIO_PIN)

//VCC_3V3_O_LED
#define     LED_VCC_3V3_O_RED_GPIO_PORT             GPIOG
#define     LED_VCC_3V3_O_RED_GPIO_PIN              GPIO_Pin_1
#define     LED_VCC_3V3_O_RED_OFF()                 GPIO_SetBits(LED_VCC_3V3_O_RED_GPIO_PORT, LED_VCC_3V3_O_RED_GPIO_PIN)
#define     LED_VCC_3V3_O_RED_ON()                  GPIO_ResetBits(LED_VCC_3V3_O_RED_GPIO_PORT, LED_VCC_3V3_O_RED_GPIO_PIN)

#define     LED_VCC_3V3_O_GRE_GPIO_PORT             GPIOE
#define     LED_VCC_3V3_O_GRE_GPIO_PIN              GPIO_Pin_8
#define     LED_VCC_3V3_O_GRE_OFF()                 GPIO_SetBits(LED_VCC_3V3_O_GRE_GPIO_PORT, LED_VCC_3V3_O_GRE_GPIO_PIN)
#define     LED_VCC_3V3_O_GRE_ON()                  GPIO_ResetBits(LED_VCC_3V3_O_GRE_GPIO_PORT, LED_VCC_3V3_O_GRE_GPIO_PIN)

//????
//VCC_4V2_LED
#define     LED_VCC_4V2_RED_GPIO_PORT               GPIOB
#define     LED_VCC_4V2_RED_GPIO_PIN                GPIO_Pin_14
#define     LED_VCC_4V2_RED_OFF()                   GPIO_SetBits(LED_VCC_4V2_RED_GPIO_PORT, LED_VCC_4V2_RED_GPIO_PIN)
#define     LED_VCC_4V2_RED_ON()                    GPIO_ResetBits(LED_VCC_4V2_RED_GPIO_PORT, LED_VCC_4V2_RED_GPIO_PIN)

#define     LED_VCC_4V2_GRE_GPIO_PORT               GPIOD
#define     LED_VCC_4V2_GRE_GPIO_PIN                GPIO_Pin_8
#define     LED_VCC_4V2_GRE_OFF()                   GPIO_SetBits(LED_VCC_4V2_GRE_GPIO_PORT, LED_VCC_4V2_GRE_GPIO_PIN)
#define     LED_VCC_4V2_GRE_ON()                    GPIO_ResetBits(LED_VCC_4V2_GRE_GPIO_PORT, LED_VCC_4V2_GRE_GPIO_PIN)

//????
//GPS_LED
#define     LED_GPS_RED_GPIO_PORT                   GPIOD
#define     LED_GPS_RED_GPIO_PIN                    GPIO_Pin_10
#define     LED_GPS_RED_OFF()                       GPIO_SetBits(LED_GPS_RED_GPIO_PORT, LED_GPS_RED_GPIO_PIN)
#define     LED_GPS_RED_ON()                        GPIO_ResetBits(LED_GPS_RED_GPIO_PORT, LED_GPS_RED_GPIO_PIN)

#define     LED_GPS_GRE_GPIO_PORT                   GPIOD
#define     LED_GPS_GRE_GPIO_PIN                    GPIO_Pin_12
#define     LED_GPS_GRE_OFF()                       GPIO_SetBits(LED_GPS_GRE_GPIO_PORT, LED_GPS_GRE_GPIO_PIN)
#define     LED_GPS_GRE_ON()                        GPIO_ResetBits(LED_GPS_GRE_GPIO_PORT, LED_GPS_GRE_GPIO_PIN)

//V3G_LED
#define     LED_V3G_RED_GPIO_PORT                   GPIOD
#define     LED_V3G_RED_GPIO_PIN                    GPIO_Pin_14
#define     LED_V3G_RED_OFF()                       GPIO_SetBits(LED_V3G_RED_GPIO_PORT, LED_V3G_RED_GPIO_PIN)
#define     LED_V3G_RED_ON()                        GPIO_ResetBits(LED_V3G_RED_GPIO_PORT, LED_V3G_RED_GPIO_PIN)

#define     LED_V3G_GRE_GPIO_PORT                   GPIOG
#define     LED_V3G_GRE_GPIO_PIN                    GPIO_Pin_2
#define     LED_V3G_GRE_OFF()                       GPIO_SetBits(LED_V3G_GRE_GPIO_PORT, LED_V3G_GRE_GPIO_PIN)
#define     LED_V3G_GRE_ON()                        GPIO_ResetBits(LED_V3G_GRE_GPIO_PORT, LED_V3G_GRE_GPIO_PIN)

//VBT_LED
#define     LED_VBT_RED_GPIO_PORT                   GPIOF
#define     LED_VBT_RED_GPIO_PIN                    GPIO_Pin_11
#define     LED_VBT_RED_OFF()                       GPIO_SetBits(LED_VBT_RED_GPIO_PORT, LED_VBT_RED_GPIO_PIN)
#define     LED_VBT_RED_ON()                        GPIO_ResetBits(LED_VBT_RED_GPIO_PORT, LED_VBT_RED_GPIO_PIN)

#define     LED_VBT_GRE_GPIO_PORT                   GPIOB
#define     LED_VBT_GRE_GPIO_PIN                    GPIO_Pin_1
#define     LED_VBT_GRE_OFF()                       GPIO_SetBits(LED_VBT_GRE_GPIO_PORT, LED_VBT_GRE_GPIO_PIN)
#define     LED_VBT_GRE_ON()                        GPIO_ResetBits(LED_VBT_GRE_GPIO_PORT, LED_VBT_GRE_GPIO_PIN)

//3V3_Key_LED
#define     LED_3V3_Key_RED_GPIO_PORT               GPIOG
#define     LED_3V3_Key_RED_GPIO_PIN                GPIO_Pin_7
#define     LED_3V3_Key_RED_OFF()                   GPIO_SetBits(LED_3V3_Key_RED_GPIO_PORT, LED_3V3_Key_RED_GPIO_PIN)
#define     LED_3V3_Key_RED_ON()                    GPIO_ResetBits(LED_3V3_Key_RED_GPIO_PORT, LED_3V3_Key_RED_GPIO_PIN)

#define     LED_3V3_Key_GRE_GPIO_PORT               GPIOC
#define     LED_3V3_Key_GRE_GPIO_PIN                GPIO_Pin_6
#define     LED_3V3_Key_GRE_OFF()                   GPIO_SetBits(LED_3V3_Key_GRE_GPIO_PORT, LED_3V3_Key_GRE_GPIO_PIN)
#define     LED_3V3_Key_GRE_ON()                    GPIO_ResetBits(LED_3V3_Key_GRE_GPIO_PORT, LED_3V3_Key_GRE_GPIO_PIN)

//?????
//VANG_LED
#define     LED_VANG_GRE_GPIO_PORT                  GPIOE
#define     LED_VANG_GRE_GPIO_PIN                   GPIO_Pin_10
#define     LED_VANG_GRE_OFF()                      GPIO_SetBits(LED_VANG_GRE_GPIO_PORT, LED_VANG_GRE_GPIO_PIN)
#define     LED_VANG_GRE_ON()                       GPIO_ResetBits(LED_VANG_GRE_GPIO_PORT, LED_VANG_GRE_GPIO_PIN)

#define     LED_VANG_RED_GPIO_PORT                  GPIOE
#define     LED_VANG_RED_GPIO_PIN                   GPIO_Pin_12
#define     LED_VANG_RED_OFF()                      GPIO_SetBits(LED_VANG_RED_GPIO_PORT, LED_VANG_RED_GPIO_PIN)
#define     LED_VANG_RED_ON()                       GPIO_ResetBits(LED_VANG_RED_GPIO_PORT, LED_VANG_RED_GPIO_PIN)

//PS_LED
#define     LED_PS_RED_GPIO_PORT                    GPIOE
#define     LED_PS_RED_GPIO_PIN                     GPIO_Pin_14
#define     LED_PS_RED_OFF()                        GPIO_SetBits(LED_PS_RED_GPIO_PORT, LED_PS_RED_GPIO_PIN)
#define     LED_PS_RED_ON()                         GPIO_ResetBits(LED_PS_RED_GPIO_PORT, LED_PS_RED_GPIO_PIN)

#define     LED_PS_GRE_GPIO_PORT                    GPIOB
#define     LED_PS_GRE_GPIO_PIN                     GPIO_Pin_12
#define     LED_PS_GRE_OFF()                        GPIO_SetBits(LED_PS_GRE_GPIO_PORT, LED_PS_GRE_GPIO_PIN)
#define     LED_PS_GRE_ON()                         GPIO_ResetBits(LED_PS_GRE_GPIO_PORT, LED_PS_GRE_GPIO_PIN)

//VB_LED
#define     LED_VB_RED_GPIO_PORT                    GPIOG
#define     LED_VB_RED_GPIO_PIN                     GPIO_Pin_4
#define     LED_VB_RED_OFF()                        GPIO_SetBits(LED_VB_RED_GPIO_PORT, LED_VB_RED_GPIO_PIN)
#define     LED_VB_RED_ON()                         GPIO_ResetBits(LED_VB_RED_GPIO_PORT, LED_VB_RED_GPIO_PIN)

#define     LED_VB_GRE_GPIO_PORT                    GPIOG
#define     LED_VB_GRE_GPIO_PIN                     GPIO_Pin_6
#define     LED_VB_GRE_OFF()                        GPIO_SetBits(LED_VB_GRE_GPIO_PORT, LED_VB_GRE_GPIO_PIN)
#define     LED_VB_GRE_ON()                         GPIO_ResetBits(LED_VB_GRE_GPIO_PORT, LED_VB_GRE_GPIO_PIN)

//BS_LED
#define     LED_BS_RED_GPIO_PORT                    GPIOG
#define     LED_BS_RED_GPIO_PIN                     GPIO_Pin_8
#define     LED_BS_RED_OFF()                        GPIO_SetBits(LED_BS_RED_GPIO_PORT, LED_BS_RED_GPIO_PIN)
#define     LED_BS_RED_ON()                         GPIO_ResetBits(LED_BS_RED_GPIO_PORT, LED_BS_RED_GPIO_PIN)

#define     LED_BS_GRE_GPIO_PORT                    GPIOC
#define     LED_BS_GRE_GPIO_PIN                     GPIO_Pin_7
#define     LED_BS_GRE_OFF()                        GPIO_SetBits(LED_BS_GRE_GPIO_PORT, LED_BS_GRE_GPIO_PIN)
#define     LED_BS_GRE_ON()                         GPIO_ResetBits(LED_BS_GRE_GPIO_PORT, LED_BS_GRE_GPIO_PIN)

//BT_LED
#define     LED_BT_GRE_GPIO_PORT                    GPIOE
#define     LED_BT_GRE_GPIO_PIN                     GPIO_Pin_15
#define     LED_BT_GRE_OFF()                        GPIO_SetBits(LED_BT_GRE_GPIO_PORT, LED_BT_GRE_GPIO_PIN)
#define     LED_BT_GRE_ON()                         GPIO_ResetBits(LED_BT_GRE_GPIO_PORT, LED_BT_GRE_GPIO_PIN)

#define     LED_BC_GRE_GPIO_PORT                    GPIOE
#define     LED_BC_GRE_GPIO_PIN                     GPIO_Pin_13
#define     LED_BC_GRE_OFF()                        GPIO_SetBits(LED_BC_GRE_GPIO_PORT, LED_BC_GRE_GPIO_PIN)
#define     LED_BC_GRE_ON()                         GPIO_ResetBits(LED_BC_GRE_GPIO_PORT, LED_BC_GRE_GPIO_PIN)

//???
#define     LED_MJ_GRE_GPIO_PORT                    GPIOG
#define     LED_MJ_GRE_GPIO_PIN                     GPIO_Pin_14
#define     LED_MJ_GRE_OFF()                        GPIO_SetBits(LED_MJ_GRE_GPIO_PORT, LED_MJ_GRE_GPIO_PIN)
#define     LED_MJ_GRE_ON()                         GPIO_ResetBits(LED_MJ_GRE_GPIO_PORT, LED_MJ_GRE_GPIO_PIN)

#define     LED_MJ_RED_GPIO_PORT                    GPIOG
#define     LED_MJ_RED_GPIO_PIN                     GPIO_Pin_13
#define     LED_MJ_RED_OFF()                        GPIO_SetBits(LED_MJ_RED_GPIO_PORT, LED_MJ_RED_GPIO_PIN)
#define     LED_MJ_RED_ON()                         GPIO_ResetBits(LED_MJ_GRE_GPIO_PORT, LED_MJ_RED_GPIO_PIN)

#define     LED_KB_GRE_GPIO_PORT                    GPIOG
#define     LED_KB_GRE_GPIO_PIN                     GPIO_Pin_12
#define     LED_KB_GRE_OFF()                        GPIO_SetBits(LED_KB_GRE_GPIO_PORT, LED_KB_GRE_GPIO_PIN)
#define     LED_KB_GRE_ON()                         GPIO_ResetBits(LED_KB_GRE_GPIO_PORT, LED_KB_GRE_GPIO_PIN)

#define     LED_KB_RED_GPIO_PORT                    GPIOG
#define     LED_KB_RED_GPIO_PIN                     GPIO_Pin_11
#define     LED_KB_RED_OFF()                        GPIO_SetBits(LED_KB_RED_GPIO_PORT, LED_KB_RED_GPIO_PIN)
#define     LED_KB_RED_ON()                         GPIO_ResetBits(LED_KB_GRE_GPIO_PORT, LED_KB_RED_GPIO_PIN)

#define     LED_KY_GRE_GPIO_PORT                    GPIOG
#define     LED_KY_GRE_GPIO_PIN                     GPIO_Pin_10
#define     LED_KY_GRE_OFF()                        GPIO_SetBits(LED_KY_GRE_GPIO_PORT, LED_KY_GRE_GPIO_PIN)
#define     LED_KY_GRE_ON()                         GPIO_ResetBits(LED_KY_GRE_GPIO_PORT, LED_KY_GRE_GPIO_PIN)

#define     LED_KY_RED_GPIO_PORT                    GPIOG
#define     LED_KY_RED_GPIO_PIN                     GPIO_Pin_9
#define     LED_KY_RED_OFF()                        GPIO_SetBits(LED_KY_RED_GPIO_PORT, LED_KY_RED_GPIO_PIN)
#define     LED_KY_RED_ON()                         GPIO_ResetBits(LED_KY_GRE_GPIO_PORT, LED_KY_RED_GPIO_PIN)

#define     LED_KK_GRE_GPIO_PORT                    GPIOD
#define     LED_KK_GRE_GPIO_PIN                     GPIO_Pin_7
#define     LED_KK_GRE_OFF()                        GPIO_SetBits(LED_KK_GRE_GPIO_PORT, LED_KK_GRE_GPIO_PIN)
#define     LED_KK_GRE_ON()                         GPIO_ResetBits(LED_KK_GRE_GPIO_PORT, LED_KK_GRE_GPIO_PIN)

#define     LED_KK_RED_GPIO_PORT                    GPIOD
#define     LED_KK_RED_GPIO_PIN                     GPIO_Pin_6
#define     LED_KK_RED_OFF()                        GPIO_SetBits(LED_KK_RED_GPIO_PORT, LED_KK_RED_GPIO_PIN)
#define     LED_KK_RED_ON()                         GPIO_ResetBits(LED_KK_GRE_GPIO_PORT, LED_KK_RED_GPIO_PIN)

//??? LED
//RelayA
#define     LED_RelayA_RED_GPIO_PORT                GPIOE
#define     LED_RelayA_RED_GPIO_PIN                 GPIO_Pin_7
#define     LED_RelayA_RED_OFF()                    GPIO_SetBits(LED_RelayA_RED_GPIO_PORT, LED_RelayA_RED_GPIO_PIN)
#define     LED_RelayA_RED_ON()                     GPIO_ResetBits(LED_RelayA_RED_GPIO_PORT, LED_RelayA_RED_GPIO_PIN)

#define     LED_RelayA_GRE_GPIO_PORT                GPIOG
#define     LED_RelayA_GRE_GPIO_PIN                 GPIO_Pin_0
#define     LED_RelayA_GRE_OFF()                    GPIO_SetBits(LED_RelayA_GRE_GPIO_PORT, LED_RelayA_GRE_GPIO_PIN)
#define     LED_RelayA_GRE_ON()                     GPIO_ResetBits(LED_RelayA_GRE_GPIO_PORT, LED_RelayA_GRE_GPIO_PIN)

//RelayB
#define     LED_RelayB_RED_GPIO_PORT                GPIOE
#define     LED_RelayB_RED_GPIO_PIN                 GPIO_Pin_11
#define     LED_RelayB_RED_OFF()                    GPIO_SetBits(LED_RelayB_RED_GPIO_PORT, LED_RelayB_RED_GPIO_PIN)
#define     LED_RelayB_RED_ON()                     GPIO_ResetBits(LED_RelayB_RED_GPIO_PORT, LED_RelayB_RED_GPIO_PIN)

#define     LED_RelayB_GRE_GPIO_PORT                GPIOE
#define     LED_RelayB_GRE_GPIO_PIN                 GPIO_Pin_9
#define     LED_RelayB_GRE_OFF()                    GPIO_SetBits(LED_RelayB_GRE_GPIO_PORT, LED_RelayB_GRE_GPIO_PIN)
#define     LED_RelayB_GRE_ON()                     GPIO_ResetBits(LED_RelayB_GRE_GPIO_PORT, LED_RelayB_GRE_GPIO_PIN)

//CL_Open
#define     LED_Open_RED_GPIO_PORT                  GPIOF
#define     LED_Open_RED_GPIO_PIN                   GPIO_Pin_14
#define     LED_Open_RED_OFF()                      GPIO_SetBits(LED_Open_RED_GPIO_PORT, LED_Open_RED_GPIO_PIN)
#define     LED_Open_RED_ON()                       GPIO_ResetBits(LED_Open_RED_GPIO_PORT, LED_Open_RED_GPIO_PIN)

#define     LED_Open_GRE_GPIO_PORT                  GPIOF
#define     LED_Open_GRE_GPIO_PIN                   GPIO_Pin_12
#define     LED_Open_GRE_OFF()                      GPIO_SetBits(LED_Open_GRE_GPIO_PORT, LED_Open_GRE_GPIO_PIN)
#define     LED_Open_GRE_ON()                       GPIO_ResetBits(LED_Open_GRE_GPIO_PORT, LED_Open_GRE_GPIO_PIN)

//CL_Close
#define     LED_Close_RED_GPIO_PORT                 GPIOB
#define     LED_Close_RED_GPIO_PIN                  GPIO_Pin_2
#define     LED_Close_RED_OFF()                     GPIO_SetBits(LED_Close_RED_GPIO_PORT, LED_Close_RED_GPIO_PIN)
#define     LED_Close_RED_ON()                      GPIO_ResetBits(LED_Close_RED_GPIO_PORT, LED_Close_RED_GPIO_PIN)

#define     LED_Close_GRE_GPIO_PORT                 GPIOB
#define     LED_Close_GRE_GPIO_PIN                  GPIO_Pin_0
#define     LED_Close_GRE_OFF()                     GPIO_SetBits(LED_Close_GRE_GPIO_PORT, LED_Close_GRE_GPIO_PIN)
#define     LED_Close_GRE_ON()                      GPIO_ResetBits(LED_Close_GRE_GPIO_PORT, LED_Close_GRE_GPIO_PIN)

//CANH
#define     LED_CAN_GRE_GPIO_PORT                  GPIOB
#define     LED_CAN_GRE_GPIO_PIN                   GPIO_Pin_15
#define     LED_CAN_GRE_OFF()                      GPIO_SetBits(LED_CAN_GRE_GPIO_PORT, LED_CAN_GRE_GPIO_PIN)
#define     LED_CAN_GRE_ON()                       GPIO_ResetBits(LED_CAN_GRE_GPIO_PORT, LED_CAN_GRE_GPIO_PIN)

#define     LED_CAN_RED_GPIO_PORT                  GPIOB
#define     LED_CAN_RED_GPIO_PIN                   GPIO_Pin_13
#define     LED_CAN_RED_OFF()                      GPIO_SetBits(LED_CAN_RED_GPIO_PORT, LED_CAN_RED_GPIO_PIN)
#define     LED_CAN_RED_ON()                       GPIO_ResetBits(LED_CAN_RED_GPIO_PORT, LED_CAN_RED_GPIO_PIN)


//POTO
#define     LED_POTO_RED_GPIO_PORT                  GPIOD
#define     LED_POTO_RED_GPIO_PIN                   GPIO_Pin_11
#define     LED_POTO_RED_OFF()                      GPIO_SetBits(LED_POTO_RED_GPIO_PORT, LED_POTO_RED_GPIO_PIN)
#define     LED_POTO_RED_ON()                       GPIO_ResetBits(LED_POTO_RED_GPIO_PORT, LED_POTO_RED_GPIO_PIN)

#define     LED_POTO_GRE_GPIO_PORT                  GPIOD
#define     LED_POTO_GRE_GPIO_PIN                   GPIO_Pin_9
#define     LED_POTO_GRE_OFF()                      GPIO_SetBits(LED_POTO_GRE_GPIO_PORT, LED_POTO_GRE_GPIO_PIN)
#define     LED_POTO_GRE_ON()                       GPIO_ResetBits(LED_POTO_GRE_GPIO_PORT, LED_POTO_GRE_GPIO_PIN)

//IO1_OPT
#define     LED_IO1_OPT_RED_GPIO_PORT               GPIOG
#define     LED_IO1_OPT_RED_GPIO_PIN                GPIO_Pin_5
#define     LED_IO1_OPT_RED_OFF()                   GPIO_SetBits(LED_IO1_OPT_RED_GPIO_PORT, LED_IO1_OPT_RED_GPIO_PIN)
#define     LED_IO1_OPT_RED_ON()                    GPIO_ResetBits(LED_IO1_OPT_RED_GPIO_PORT, LED_IO1_OPT_RED_GPIO_PIN)

#define     LED_IO1_OPT_GRE_GPIO_PORT               GPIOG
#define     LED_IO1_OPT_GRE_GPIO_PIN                GPIO_Pin_3
#define     LED_IO1_OPT_GRE_OFF()                   GPIO_SetBits(LED_IO1_OPT_GRE_GPIO_PORT, LED_IO1_OPT_GRE_GPIO_PIN)
#define     LED_IO1_OPT_GRE_ON()                    GPIO_ResetBits(LED_IO1_OPT_GRE_GPIO_PORT, LED_IO1_OPT_GRE_GPIO_PIN)


//IO2_OPT
#define     LED_IO2_OPT_RED_GPIO_PORT               GPIOD
#define     LED_IO2_OPT_RED_GPIO_PIN                GPIO_Pin_15
#define     LED_IO2_OPT_RED_OFF()                   GPIO_SetBits(LED_IO2_OPT_RED_GPIO_PORT, LED_IO2_OPT_RED_GPIO_PIN)
#define     LED_IO2_OPT_RED_ON()                    GPIO_ResetBits(LED_IO2_OPT_RED_GPIO_PORT, LED_IO2_OPT_RED_GPIO_PIN)

#define     LED_IO2_OPT_GRE_GPIO_PORT               GPIOD
#define     LED_IO2_OPT_GRE_GPIO_PIN                GPIO_Pin_13
#define     LED_IO2_OPT_GRE_OFF()                   GPIO_SetBits(LED_IO2_OPT_GRE_GPIO_PORT, LED_IO2_OPT_GRE_GPIO_PIN)
#define     LED_IO2_OPT_GRE_ON()                    GPIO_ResetBits(LED_IO2_OPT_GRE_GPIO_PORT, LED_IO2_OPT_GRE_GPIO_PIN)

/****************************** PWR GPIO PORT DEF **************************************/
//PWR12V_2X12Out_EN
#define     PWR12V_2X12Out_EN_GPIO_PORT             GPIOA
#define     PWR12V_2X12Out_EN_GPIO_PIN              GPIO_Pin_6
#define     PWR12V_2X12Out_EN_ON()                  GPIO_SetBits(PWR12V_2X12Out_EN_GPIO_PORT, PWR12V_2X12Out_EN_GPIO_PIN)
#define     PWR12V_2X12Out_EN_OFF()                 GPIO_ResetBits(PWR12V_2X12Out_EN_GPIO_PORT, PWR12V_2X12Out_EN_GPIO_PIN)

//PWR12V_2X5Out_EN
#define     PWR12V_2X5Out_EN_GPIO_PORT              GPIOA
#define     PWR12V_2X5Out_EN_GPIO_PIN               GPIO_Pin_4
#define     PWR12V_2X5Out_EN_ON()                   GPIO_SetBits(PWR12V_2X5Out_EN_GPIO_PORT, PWR12V_2X5Out_EN_GPIO_PIN)
#define     PWR12V_2X5Out_EN_OFF()                  GPIO_ResetBits(PWR12V_2X5Out_EN_GPIO_PORT, PWR12V_2X5Out_EN_GPIO_PIN)

//PWR12V_RJ45Out_EN
#define     PWR12V_RJ45Out_EN_GPIO_PORT             GPIOA
#define     PWR12V_RJ45Out_EN_GPIO_PIN              GPIO_Pin_5
#define     PWR12V_RJ45Out_EN_ON()                  GPIO_SetBits(PWR12V_RJ45Out_EN_GPIO_PORT, PWR12V_RJ45Out_EN_GPIO_PIN)
#define     PWR12V_RJ45Out_EN_OFF()                 GPIO_ResetBits(PWR12V_RJ45Out_EN_GPIO_PORT, PWR12V_RJ45Out_EN_GPIO_PIN)


/****************************** CAN_Switch GPIO PORT DEF **************************************/
//CANH_2X12
#define     CANH_2X12_GPIO_PORT                     GPIOE
#define     CANH_2X12_GPIO_PIN                      GPIO_Pin_6
#define     CANH_2X12_ON()                          GPIO_SetBits(CANH_2X12_GPIO_PORT, CANH_2X12_GPIO_PIN)
#define     CANH_2X12_OFF()                         GPIO_ResetBits(CANH_2X12_GPIO_PORT, CANH_2X12_GPIO_PIN)
//CANL_2X12
#define     CANL_2X12_GPIO_PORT                     GPIOC
#define     CANL_2X12_GPIO_PIN                      GPIO_Pin_13
#define     CANL_2X12_ON()                          GPIO_SetBits(CANL_2X12_GPIO_PORT, CANL_2X12_GPIO_PIN)
#define     CANL_2X12_OFF()                         GPIO_ResetBits(CANL_2X12_GPIO_PORT, CANL_2X12_GPIO_PIN)

//CANH_2X5
#define     CANH_2X5_GPIO_PORT                      GPIOF
#define     CANH_2X5_GPIO_PIN                       GPIO_Pin_0
#define     CANH_2X5_ON()                           GPIO_SetBits(CANH_2X5_GPIO_PORT, CANH_2X5_GPIO_PIN)
#define     CANH_2X5_OFF()                          GPIO_ResetBits(CANH_2X5_GPIO_PORT, CANH_2X5_GPIO_PIN)
//CANL_2X5
#define     CANL_2X5_GPIO_PORT                      GPIOF
#define     CANL_2X5_GPIO_PIN                       GPIO_Pin_1
#define     CANL_2X5_ON()                           GPIO_SetBits(CANL_2X5_GPIO_PORT, CANL_2X5_GPIO_PIN)
#define     CANL_2X5_OFF()                          GPIO_ResetBits(CANL_2X5_GPIO_PORT, CANL_2X5_GPIO_PIN)

//CANH_RJ45
#define     CANH_RJ45_GPIO_PORT                     GPIOF
#define     CANH_RJ45_GPIO_PIN                      GPIO_Pin_2
#define     CANH_RJ45_ON()                          GPIO_SetBits(CANH_RJ45_GPIO_PORT, CANH_RJ45_GPIO_PIN)
#define     CANH_RJ45_OFF()                         GPIO_ResetBits(CANH_RJ45_GPIO_PORT, CANH_RJ45_GPIO_PIN)
//CANL_RJ45
#define     CANL_RJ45_GPIO_PORT                     GPIOF
#define     CANL_RJ45_GPIO_PIN                      GPIO_Pin_3
#define     CANL_RJ45_ON()                          GPIO_SetBits(CANL_RJ45_GPIO_PORT, CANL_RJ45_GPIO_PIN)
#define     CANL_RJ45_OFF()                         GPIO_ResetBits(CANL_RJ45_GPIO_PORT, CANL_RJ45_GPIO_PIN)

//Ctrl_CAN
#define     Ctrl_CAN_2X12_ON()                      CANH_2X12_OFF();CANL_2X12_ON()  
#define     Ctrl_CAN_2X12_OFF()                     CANH_2X12_ON();CANL_2X12_OFF() 

#define     Ctrl_CAN_2X5_ON()                       CANH_2X5_OFF();CANL_2X5_ON()  
#define     Ctrl_CAN_2X5_OFF()                      CANH_2X5_ON();CANL_2X5_OFF() 

#define     Ctrl_CAN_RJ45_ON()                      CANH_RJ45_OFF();CANL_RJ45_ON()
#define     Ctrl_CAN_RJ45_OFF()                     CANH_RJ45_ON();CANL_RJ45_OFF() 

/****************************** BATTREY_Switch GPIO PORT DEF **************************************/
//BATH_SWITCH
#define     BATH_SWITCH_GPIO_PORT                     GPIOB
#define     BATH_SWITCH_GPIO_PIN                      GPIO_Pin_7
#define     BATH_SWITCH_ON()                          GPIO_SetBits(BATH_SWITCH_GPIO_PORT, BATH_SWITCH_GPIO_PIN)
#define     BATH_SWITCH_OFF()                         GPIO_ResetBits(BATH_SWITCH_GPIO_PORT, BATH_SWITCH_GPIO_PIN)
//BATL_SWITCH
#define     BATL_SWITCH_GPIO_PORT                     GPIOB
#define     BATL_SWITCH_GPIO_PIN                      GPIO_Pin_6
#define     BATL_SWITCH_ON()                          GPIO_SetBits(BATL_SWITCH_GPIO_PORT, BATL_SWITCH_GPIO_PIN)
#define     BATL_SWITCH_OFF()                         GPIO_ResetBits(BATL_SWITCH_GPIO_PORT, BATL_SWITCH_GPIO_PIN)


#define     Ctrl_BAT_SWITCH_ON()                      BATH_SWITCH_OFF();BATL_SWITCH_ON()  
#define     Ctrl_BAT_SWITCH_OFF()                     BATH_SWITCH_ON(); BATL_SWITCH_OFF() 


/****************************** Ignition GPIO PORT DEF **************************************/
//Ignition
#define     Ignition_GPIO_PORT                     GPIOD
#define     Ignition_GPIO_PIN                      GPIO_Pin_3
#define     Ignition_ON()                          GPIO_SetBits(Ignition_GPIO_PORT, Ignition_GPIO_PIN)
#define     Ignition_OFF()                         GPIO_ResetBits(Ignition_GPIO_PORT, Ignition_GPIO_PIN)

/****************************** VSS GPIO PORT DEF **************************************/
//VSS
#define     VSS_GPIO_PORT                     GPIOD
#define     VSS_GPIO_PIN                      GPIO_Pin_4
#define     VSS_ON()                          GPIO_SetBits(VSS_GPIO_PORT, VSS_GPIO_PIN)
#define     VSS_OFF()                         GPIO_ResetBits(VSS_GPIO_PORT, VSS_GPIO_PIN)

/****************************** FuelAIn GPIO PORT DEF **************************************/
//FuelAIn
#define     FuelAIn_GPIO_PORT                     GPIOE
#define     FuelAIn_GPIO_PIN                      GPIO_Pin_1
#define     FuelAIn_ON()                          GPIO_SetBits(FuelAIn_GPIO_PORT, FuelAIn_GPIO_PIN)
#define     FuelAIn_OFF()                         GPIO_ResetBits(FuelAIn_GPIO_PORT, FuelAIn_GPIO_PIN)

/****************************** FuelBIn GPIO PORT DEF **************************************/
//FuelBIn
#define     FuelBIn_GPIO_PORT                     GPIOE
#define     FuelBIn_GPIO_PIN                      GPIO_Pin_3
#define     FuelBIn_ON()                          GPIO_SetBits(FuelBIn_GPIO_PORT, FuelBIn_GPIO_PIN)
#define     FuelBIn_OFF()                         GPIO_ResetBits(FuelBIn_GPIO_PORT, FuelBIn_GPIO_PIN)

/****************************** CL_AIn GPIO PORT DEF **************************************/
//CL_AIn
#define     CL_AIn_GPIO_PORT                     GPIOB
#define     CL_AIn_GPIO_PIN                      GPIO_Pin_7
#define     CL_AIn_ON()                          GPIO_SetBits(CL_AIn_GPIO_PORT, CL_AIn_GPIO_PIN)
#define     CL_AIn_OFF()                         GPIO_ResetBits(CL_AIn_GPIO_PORT, CL_AIn_GPIO_PIN)

/****************************** CL_BIn GPIO PORT DEF **************************************/
//CL_BIn
#define     CL_BIn_GPIO_PORT                     GPIOB
#define     CL_BIn_GPIO_PIN                      GPIO_Pin_7
#define     CL_BIn_ON()                          GPIO_SetBits(CL_BIn_GPIO_PORT, CL_BIn_GPIO_PIN)
#define     CL_BIn_OFF()                         GPIO_ResetBits(CL_BIn_GPIO_PORT, CL_BIn_GPIO_PIN)




/****************************** KEY GPIO PORT DEF **************************************/
//Key_1
#define     Key_1_GPIO_PORT                         GPIOC
#define     Key_1_GPIO_PIN                          GPIO_Pin_8
#define     Key_1_ReadIO()                          GPIO_ReadInputDataBit(Key_1_GPIO_PORT, Key_1_GPIO_PIN)

//Key_2
#define     Key_2_GPIO_PORT                         GPIOC
#define     Key_2_GPIO_PIN                          GPIO_Pin_9
#define     Key_2_EXTI_PORT                         GPIO_PortSourceGPIOC
#define     Key_2_EXTI_PIN                          GPIO_PinSourec9
#define     Key_2                                   GPIO_ReadInputDataBit(Key_2_GPIO_PORT, Key_2_GPIO_PIN)
#define     Key_2_ReadIO                            GPIO_ReadInputDataBit(Key_2_GPIO_PORT, Key_2_GPIO_PIN)

//Key_3
#define     Key_3_GPIO_PORT                         GPIOA
#define     Key_3_GPIO_PIN                          GPIO_Pin_8
#define     Key_3_EXTI_PORT                         GPIO_PortSourceGPIOA
#define     Key_3_EXTI_PIN                          GPIO_PinSourec8
#define     Key_3                                   GPIO_ReadInputDataBit(Key_3_GPIO_PORT, Key_3_GPIO_PIN)
#define     Key_3_ReadIO                            GPIO_ReadInputDataBit(Key_3_GPIO_PORT, Key_3_GPIO_PIN)


#define     Key_1_PRES                              1
#define     Key_2_PRES                              2
#define     Key_3_PRES                              3

/****************************** CL OPEN CLOSE GPIO PORT DEF **************************************/
#define     CHECK_CLOPEN_GPIO_PIN                   GPIO_Pin_4
#define     CHECK_CLOPEN_GPIO_PORT                  GPIOF
#define     CHECK_CLOPEN_CHECK_read()               GPIO_ReadInputDataBit(CHECK_CLOPEN_GPIO_PORT, CHECK_CLOPEN_GPIO_PIN)

#define     CHECK_CLCLOSE_GPIO_PIN                   GPIO_Pin_5
#define     CHECK_CLCLOSE_GPIO_PORT                  GPIOF
#define     CHECK_CLCLOSE_CHECK_read()               GPIO_ReadInputDataBit(CHECK_CLCLOSE_GPIO_PORT, CHECK_CLCLOSE_GPIO_PIN)

#define     CHECK_RelayA_GPIO_PIN                   GPIO_Pin_4
#define     CHECK_RelayA_GPIO_PORT                  GPIOE
#define     CHECK_RelayA_CHECK_read()               GPIO_ReadInputDataBit(CHECK_RelayA_GPIO_PORT, CHECK_RelayA_GPIO_PIN)

#define     CHECK_RelayB_GPIO_PIN                   GPIO_Pin_5
#define     CHECK_RelayB_GPIO_PORT                  GPIOE
#define     CHECK_RelayB_CHECK_read()               GPIO_ReadInputDataBit(CHECK_RelayB_GPIO_PORT, CHECK_RelayB_GPIO_PIN)

#define     CHECK_IO1_GPIO_PIN                      GPIO_Pin_3
#define     CHECK_IO1_GPIO_PORT                     GPIOE
#define     CHECK_IO1_CHECK_read()                  GPIO_ReadInputDataBit(CHECK_IO1_GPIO_PORT, CHECK_IO1_GPIO_PIN)

#define     CHECK_IO2_GPIO_PIN                      GPIO_Pin_1
#define     CHECK_IO2_GPIO_PORT                     GPIOE
#define     CHECK_IO2_CHECK_read()                  GPIO_ReadInputDataBit(CHECK_IO2_GPIO_PORT, CHECK_IO2_GPIO_PIN)

#define     CHECK_IMMO_GPIO_PIN                      GPIO_Pin_9
#define     CHECK_IMMO_GPIO_PORT                     GPIOB
#define     CHECK_IMMO_CHECK_read()                  GPIO_ReadInputDataBit(CHECK_IMMO_GPIO_PORT, CHECK_IMMO_GPIO_PIN)


/*
*********************************************************************************************************
*                                               GLOBAL VARIABLES
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                               GLOBAL PROTOTYPES
*********************************************************************************************************
*/
BSP_MOCBOX_HARDWARE void mocbox_GPIO_Init(void);
BSP_MOCBOX_HARDWARE void mocbox_GPIO_LED_Init(void);
BSP_MOCBOX_HARDWARE void mocbox_Reset_system(void);
BSP_MOCBOX_HARDWARE void mocbox_PowerOn_Sequence(void);
BSP_MOCBOX_HARDWARE void mocbox_PowerOff_Sequence(void);
BSP_MOCBOX_HARDWARE void mocbox_Sleep_ALL(void);
BSP_MOCBOX_HARDWARE void Delay_us(unsigned int nTime);
BSP_MOCBOX_HARDWARE void Delay_ms(unsigned int nTime);
BSP_MOCBOX_HARDWARE void Delay_msNoOS(unsigned int nTime);

BSP_MOCBOX_HARDWARE void Delay_s(unsigned int nTime);
BSP_MOCBOX_HARDWARE void mocbox_WatchDogWDI_Mode(unsigned char mode);
BSP_MOCBOX_HARDWARE void LED_RED_ON_GRE_OFF(void);
BSP_MOCBOX_HARDWARE void LED_RED_OFF_GRE_ON(void);
BSP_MOCBOX_HARDWARE void LED_RED_ON_GRE_ON(void);
BSP_MOCBOX_HARDWARE void LED_RED_OFF_GRE_OFF(void);


/* LOCAL Define -------------------------------------------------------------*/
#ifdef LOCAL_GLOBAL
/*
*********************************************************************************************************
*                                          LOCAL EXCEPTION DEFINES
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                               LOCAL VARIABLES
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                              LOCAL PROTOTYPES
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                              Exception Other PROTOTYPES
*********************************************************************************************************
*/




#endif
#undef LOCAL_GLOBAL
/*********************************END OF FILE**********************************/
#endif
/*********************************END OF FILE**********************************/
