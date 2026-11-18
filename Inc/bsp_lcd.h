#ifndef BSP_LCD_H
#define BSP_LCD_H

#include "stm32f746xx.h"
#include "board.h"

#define BSP_LCD_WIDTH  480
#define BSP_LCD_HEIGHT 272

#define PROTRAIT  0
#define LANDSCAPE 1
#define BSP_LCD_ORIENTATION PROTRAIT

#if (BSP_LCD_ORIENTATION == PROTRAIT)
     #define BSP_LCD_ACTIVE_WIDTH  BSP_LCD_WIDTH
     #define BSP_LCD_ACTIVE_HEIGHT BSP_LCD_HEIGHT
#elif (BSP_LCD_ORIENTATION == LANDSCAPE)
     #define BSP_LCD_ACTIVE_WIDTH  BSP_LCD_HEIGHT
     #define BSP_LCD_ACTIVE_HEIGHT BSP_LCD_WIDTH
#endif

#define BSP_LCD_PIXEL_FMT_L8     1
#define BSP_LCD_PIXEL_FMT_RGB565 2
#define BSP_LCD_PIXEL_FMT_RGB666 3
#define BSP_LCD_PIXEL_FMT_RGB888 4
#define BSP_LCD_PIXEL_FMT        BSP_LCD_PIXEL_FMT_RGB888

#define BSP_HSW 1
#define BSP_HBP 43
#define BSP_HFP 8

#define BSP_VSW 10
#define BSP_VBP 12
#define BSP_VFP 4


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
