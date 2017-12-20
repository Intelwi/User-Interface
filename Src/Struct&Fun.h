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

extern volatile uint16_t pulse_count; // Licznik impulsow TRZEBA PODPI¥Æ D8 (A) i D7 (B)
extern volatile uint16_t positions; //licznik enkodera
extern bool isPressed; //czy guzik wcisniety

//------------------------Menu--------------------------------------

struct menu {
   void (*zaprogram)(LCD_PCF8574_HandleTypeDef* lcd);
   void (*zatrzymaj)(LCD_PCF8574_HandleTypeDef* lcd);
   void (*tryb)(LCD_PCF8574_HandleTypeDef* lcd);
 };
typedef struct menu menu;

menu stworz (void);

//---------------------SubMenu1------------------------------------------------------

struct submenu1 {
   void (*manual)(LCD_PCF8574_HandleTypeDef* lcd);
   void (*automat)(LCD_PCF8574_HandleTypeDef* lcd);
 };
typedef struct submenu1 submenu1;

submenu1 stworzSubMenu1 (void);

#endif /* STRUCT_FUN_H_ */
