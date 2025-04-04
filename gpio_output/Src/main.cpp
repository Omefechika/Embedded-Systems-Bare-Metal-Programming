/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2025 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include "stm32f407xx.h"

#define GPIODENR (4U<<0)
#define PIN5 (1U<<13)
#define LED_PIN PIN5

int main(){
	RCC->AHB1ENR |= GPIODENR;
	GPIOD->MODER |= 1U << 13;
	GPIOD->MODER &=~ 1U << 13;

	while(1){
		GPIOD->ODR ^= LED_PIN;
		// setting a delay
		for (int ii{0}; ii < 1000; ++ii) {
			// empty body
		}
	}
}
