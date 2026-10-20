#ifndef BSP_LCD_H
#define BSP_LCD_H

#include "stm32f746xx.h"


/****************************************************************************
** Public define                                                           **
*****************************************************************************/
#define GPIO_PIN_0   ((uint8_t)  0)
#define GPIO_PIN_1   ((uint8_t)  1)
#define GPIO_PIN_2   ((uint8_t)  2)
#define GPIO_PIN_3   ((uint8_t)  3)
#define GPIO_PIN_4   ((uint8_t)  4)
#define GPIO_PIN_5   ((uint8_t)  5)
#define GPIO_PIN_6   ((uint8_t)  6)
#define GPIO_PIN_7   ((uint8_t)  7)
#define GPIO_PIN_8   ((uint8_t)  8)
#define GPIO_PIN_9   ((uint8_t)  9)
#define GPIO_PIN_10  ((uint8_t) 10)
#define GPIO_PIN_11  ((uint8_t) 11)
#define GPIO_PIN_12  ((uint8_t) 12)
#define GPIO_PIN_13  ((uint8_t) 13)
#define GPIO_PIN_14  ((uint8_t) 14)
#define GPIO_PIN_15  ((uint8_t) 15)

#define LCD_DATA_R0_PIN GPIO_PIN_15
#define LCD_DATA_R1_PIN GPIO_PIN_0
#define LCD_DATA_R2_PIN GPIO_PIN_1
#define LCD_DATA_R3_PIN GPIO_PIN_2
#define LCD_DATA_R4_PIN GPIO_PIN_3
#define LCD_DATA_R5_PIN GPIO_PIN_4
#define LCD_DATA_R6_PIN GPIO_PIN_5
#define LCD_DATA_R7_PIN GPIO_PIN_6

#define LCD_DATA_G0_PIN GPIO_PIN_7
#define LCD_DATA_G1_PIN GPIO_PIN_8
#define LCD_DATA_G2_PIN GPIO_PIN_9
#define LCD_DATA_G3_PIN GPIO_PIN_10
#define LCD_DATA_G4_PIN GPIO_PIN_11
#define LCD_DATA_G5_PIN GPIO_PIN_0
#define LCD_DATA_G6_PIN GPIO_PIN_1
#define LCD_DATA_G7_PIN GPIO_PIN_2

#define LCD_DATA_B0_PIN GPIO_PIN_4
#define LCD_DATA_B1_PIN GPIO_PIN_13
#define LCD_DATA_B2_PIN GPIO_PIN_14
#define LCD_DATA_B3_PIN GPIO_PIN_15
#define LCD_DATA_B4_PIN GPIO_PIN_12
#define LCD_DATA_B5_PIN GPIO_PIN_4
#define LCD_DATA_B6_PIN GPIO_PIN_5
#define LCD_DATA_B7_PIN GPIO_PIN_6

#define LCD_CLK_PIN     GPIO_PIN_14
#define LCD_HSYNC_PIN   GPIO_PIN_10
#define LCD_VSYNC_PIN   GPIO_PIN_9
#define LCD_DE_PIN      GPIO_PIN_7
#define LCD_DISP_PIN    GPIO_PIN_12
#define LCD_BL_CTRL_PIN GPIO_PIN_3

#define LCD_DATA_R0_PORT GPIOI
#define LCD_DATA_R1_PORT GPIOJ
#define LCD_DATA_R2_PORT GPIOJ
#define LCD_DATA_R3_PORT GPIOJ
#define LCD_DATA_R4_PORT GPIOJ
#define LCD_DATA_R5_PORT GPIOJ
#define LCD_DATA_R6_PORT GPIOJ
#define LCD_DATA_R7_PORT GPIOJ

#define LCD_DATA_G0_PORT GPIOJ
#define LCD_DATA_G1_PORT GPIOJ
#define LCD_DATA_G2_PORT GPIOJ
#define LCD_DATA_G3_PORT GPIOJ
#define LCD_DATA_G4_PORT GPIOJ
#define LCD_DATA_G5_PORT GPIOK
#define LCD_DATA_G6_PORT GPIOK
#define LCD_DATA_G7_PORT GPIOK

#define LCD_DATA_B0_PORT GPIOE
#define LCD_DATA_B1_PORT GPIOJ
#define LCD_DATA_B2_PORT GPIOJ
#define LCD_DATA_B3_PORT GPIOJ
#define LCD_DATA_B4_PORT GPIOG
#define LCD_DATA_B5_PORT GPIOK
#define LCD_DATA_B6_PORT GPIOK
#define LCD_DATA_B7_PORT GPIOK

#define LCD_CLK_PORT     GPIOI
#define LCD_HSYNC_PORT   GPIOI
#define LCD_VSYNC_PORT   GPIOI
#define LCD_DE_PORT      GPIOK
#define LCD_DISP_PORT    GPIOI
#define LCD_BL_CTRL_PORT GPIOK


/****************************************************************************
** Public GPIO mapping                                                     **
*****************************************************************************/
extern GPIO_TypeDef * const ltdcIoPorts[];
extern const uint8_t ltdcPins[];


/****************************************************************************
** Public variables                                                        **
*****************************************************************************/
extern const uint8_t totalLtdcPins;


/****************************************************************************
** Public functions                                                        **
*****************************************************************************/
void BSP_lcdInit (void);


#endif /* BSP_LCD_H */
