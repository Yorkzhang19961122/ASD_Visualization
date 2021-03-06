#include "led.h"

//////////////////////////////////////////////////////////////////////////////////	 
//STM32F103ZE核心板
//LED驱动代码	   
						  
////////////////////////////////////////////////////////////////////////////////// 	   

//初始化PB5和PE5为输出口.并使能这两个口的时钟		    
//LED IO初始化
void LED_Init(void)
{

 GPIO_InitTypeDef  GPIO_InitStructure;
// RCC_APB2PeriphResetCmd(RCC_APB2Periph_AFIO, ENABLE);	
// GPIO_PinRemapConfig(GPIO_Remap_SWJ_Disable, ENABLE); 
// GPIO_PinRemapConfig(GPIO_Remap_SWJ_JTAGDisable , ENABLE); 


//  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_14|GPIO_Pin_13; 
//  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 
//  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 
//  GPIO_Init(GPIOA, &GPIO_InitStructure);  	
	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOB|RCC_APB2Periph_GPIOC|RCC_APB2Periph_GPIOD|RCC_APB2Periph_GPIOE|RCC_APB2Periph_GPIOF|RCC_APB2Periph_GPIOG, ENABLE);	 //使能PB,PE端口时钟

 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_10|GPIO_Pin_11|GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15;	
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOB, &GPIO_InitStructure);					 //根据设定参数初始化GPIOB.5
// GPIO_SetBits(GPIOB,GPIO_Pin_5);						 //PB.5 输出高		

 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_10|GPIO_Pin_11|GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15;	
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		
 GPIO_Init(GPIOG, &GPIO_InitStructure);	

 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_10|GPIO_Pin_11|GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15;	
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		
 GPIO_Init(GPIOD, &GPIO_InitStructure);		
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_10|GPIO_Pin_11|GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15;	
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		
 GPIO_Init(GPIOC, &GPIO_InitStructure);	

 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8|GPIO_Pin_11|GPIO_Pin_12|GPIO_Pin_14|GPIO_Pin_13|GPIO_Pin_15;	
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		
 GPIO_Init(GPIOA, &GPIO_InitStructure);	

 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_10|GPIO_Pin_11|GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15;	
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		    
 GPIO_Init(GPIOE, &GPIO_InitStructure);	  				
		
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_10|GPIO_Pin_11|GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15;	
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		    
 GPIO_Init(GPIOF, &GPIO_InitStructure);	
 



}



 
