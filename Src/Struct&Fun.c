/*
 * Struct&Fun.c
 *
 *  Created on: 30.11.2017
 *      Author: Michal
 */

#include <stdbool.h>
#include "Struct&Fun.h"

//------------------------Menu--------------------------------------

 void moje_urzadzenie_zamknij (LCD_PCF8574_HandleTypeDef* lcd)
 {
	 LCD_SetLocation(lcd, 0, 1);
	 LCD_WriteString(lcd, "3. Exit   ");

	 /* sth to do */
 }

 void moje_urzadzenie_tryb_pracy (LCD_PCF8574_HandleTypeDef* lcd)
 {
	 LCD_SetLocation(lcd, 0, 1);
	 LCD_WriteString(lcd, "2. Mode   ");
	 submenu1 trybPracy = stworzSubMenu1();

	 if (isPressed)
	 {
		 isPressed = false;
		 bool isRunning = true;
		while(isRunning)
		{
			pulse_count = TIM1->CNT; // przepisanie wartosci z rejestru timera
			positions = pulse_count/4; // zeskalowanie impulsow do liczby stabilnych pozycji walu enkodera
		 switch( positions % 3)
		 	 {
		  	  case 2 :
		  		  trybPracy.manual(lcd);
		  		  break;

		  	  case 1 :
		  		  trybPracy.automat(lcd);
		  		  break;

		  	  case 0 :
		  		LCD_SetLocation(lcd, 0, 1);
		  		LCD_WriteString(lcd, "3. Exit    ");
		  		if(isPressed)
		  		{
		  			isRunning = false;
		  			isPressed = false;
		  		}
		  		break;
		 	 }
		}
 	 }


	 /* sth to do */
 }

 void moje_urzadzenie_zaprogram(LCD_PCF8574_HandleTypeDef* lcd)
 {
	 LCD_SetLocation(lcd, 0, 1);
	 LCD_WriteString(lcd, "1. Program    ");


	 /* sth to do */
 }

 menu stworz (void)
 {
   menu moje_menu;
   moje_menu.zaprogram = moje_urzadzenie_zaprogram;
   moje_menu.zamknij = moje_urzadzenie_zamknij;
   moje_menu.tryb = moje_urzadzenie_tryb_pracy;
   return moje_menu;
 }

 //---------------------SubMenu1------------------------------------------------------

 void tryb_manual (LCD_PCF8574_HandleTypeDef* lcd)
  {
 	 LCD_SetLocation(lcd, 0, 1);
 	 LCD_WriteString(lcd, "1. Manual   ");
 	 if (isPressed)
 	 {
 		 /* sth to do */
 	 }
  }

  void tryb_automat (LCD_PCF8574_HandleTypeDef* lcd)
  {
 	 LCD_SetLocation(lcd, 0, 1);
 	 LCD_WriteString(lcd, "2. Automat   ");
 	if (isPressed)
 	 	 {
 	 		 /* sth to do */
 	 	 }
  }

  submenu1 stworzSubMenu1 (void)
  {
    submenu1 moje_submenu1;
    moje_submenu1.manual = tryb_manual;
    moje_submenu1.automat = tryb_automat;
    return moje_submenu1;
  }

