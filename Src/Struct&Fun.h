/*
 * Struct&Fun.h
 *
 *  Created on: 30.11.2017
 *      Author: Michal
 */

#ifndef STRUCT_FUN_H_
#define STRUCT_FUN_H_
#include <stdbool.h>
#include "stm32f4xx_hal.h"
#include "HD44780-master\\hd44780.h"
#include "PCF8574-master\\pcf8574.h"

extern volatile uint16_t positions; //licznik enkodera

//------------------------Menu--------------------------------------

struct menu {
   void (*zaprogram)(LCD_PCF8574_HandleTypeDef* lcd, bool isPressed);
   void (*zamknij)(LCD_PCF8574_HandleTypeDef* lcd, bool isPressed);
   void (*tryb)(LCD_PCF8574_HandleTypeDef* lcd, bool isPressed);
 };
typedef struct menu menu;

menu stworz (void);

//---------------------SubMenu1------------------------------------------------------

struct submenu1 {
   void (*manual)(LCD_PCF8574_HandleTypeDef* lcd, bool isPressed);
   void (*automat)(LCD_PCF8574_HandleTypeDef* lcd, bool isPressed);
 };
typedef struct submenu1 submenu1;

submenu1 stworzSubMenu1 (void);

#endif /* STRUCT_FUN_H_ */
