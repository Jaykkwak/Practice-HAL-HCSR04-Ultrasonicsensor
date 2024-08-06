/*
 * i2c-lcd.h
 *
 *  Created on: Aug 4, 2024
 *      Author: sungjeakwak
 */

#ifndef INC_I2C_LCD_H_
#define INC_I2C_LCD_H_
#include "stm32f4xx_hal.h"


void lcd_init (void);   // initialize lcd

void lcd_send_cmd (char cmd);  // send command to the lcd

void lcd_send_data (char data);  // send data to the lcd

void lcd_send_string (char *str);  // send string to the lcd

void lcd_clear (void);

void lcd_put_cur(int row, int col);


#endif /* INC_I2C_LCD_H_ */

