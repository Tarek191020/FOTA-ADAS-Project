/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.h
 * @brief          : Header for main.c file.
 *                   This file contains the common defines of the application.
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LCD_E_Pin GPIO_PIN_14
#define LCD_E_GPIO_Port GPIOC
#define LCD_RS_Pin GPIO_PIN_15
#define LCD_RS_GPIO_Port GPIOC
#define LM35_Pin GPIO_PIN_0
#define LM35_GPIO_Port GPIOA
#define LDR_Pin GPIO_PIN_1
#define LDR_GPIO_Port GPIOA
#define BLU_TX_Pin GPIO_PIN_2
#define BLU_TX_GPIO_Port GPIOA
#define BLU_RX_Pin GPIO_PIN_3
#define BLU_RX_GPIO_Port GPIOA
#define BUZZER_Pin GPIO_PIN_4
#define BUZZER_GPIO_Port GPIOA
#define LED_Pin GPIO_PIN_5
#define LED_GPIO_Port GPIOA
#define LCD_4_Pin GPIO_PIN_0
#define LCD_4_GPIO_Port GPIOB
#define MOTOR_FWD1_Pin GPIO_PIN_1
#define MOTOR_FWD1_GPIO_Port GPIOB
#define IR1_Pin GPIO_PIN_10
#define IR1_GPIO_Port GPIOB
#define IR2_Pin GPIO_PIN_11
#define IR2_GPIO_Port GPIOB
#define LCD_6_Pin GPIO_PIN_12
#define LCD_6_GPIO_Port GPIOB
#define LCD_7_Pin GPIO_PIN_13
#define LCD_7_GPIO_Port GPIOB
#define MOTOR_FWD2_Pin GPIO_PIN_12
#define MOTOR_FWD2_GPIO_Port GPIOA
#define MOTOR_PWM_Pin GPIO_PIN_15
#define MOTOR_PWM_GPIO_Port GPIOA
#define MOTOR_Back1_Pin GPIO_PIN_3
#define MOTOR_Back1_GPIO_Port GPIOB
#define MOTOR_Back2_Pin GPIO_PIN_4
#define MOTOR_Back2_GPIO_Port GPIOB
#define LCD_5_Pin GPIO_PIN_5
#define LCD_5_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
