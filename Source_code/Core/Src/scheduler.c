/*
 * scheduler.c
 *
 *  Created on: Nov 25, 2023
 *      Author: Minh Hieu
 */

#include "scheduler.h"

void redToggle(){
	HAL_GPIO_TogglePin(red_led_GPIO_Port, red_led_Pin);
}
void yellowToggle(){
	HAL_GPIO_TogglePin(yellow_led_GPIO_Port, yellow_led_Pin);
}
void greenToggle(){
	HAL_GPIO_TogglePin(green_led_GPIO_Port, green_led_Pin);
}
void blueToggle(){
	HAL_GPIO_TogglePin(blue_led_GPIO_Port, blue_led_Pin);
}
void whiteToggle(){
	HAL_GPIO_TogglePin(white_led_GPIO_Port, white_led_Pin);
}











void SCH_Init(void){

}
void SCH_Dispatch_Tasks(){

}
//uint32_t SCH_Add_Task(void (* pFunction)(),
//		uint32_t DELAY, uint32_t PERIOD){
//
//}
uint8_t SCH_Delete_Task(uint32_t taskID){

}
void SCH_Update(){

}





















