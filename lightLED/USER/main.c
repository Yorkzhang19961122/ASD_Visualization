#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "usart.h"

 
/************************************************
 //STM32F103ZE���İ�
 
 ����ʵ�� 

************************************************/

int i=0;
 int main(void)
 {		
 	u16 t;  
	u16 len;	
	u16 times=0;
	delay_init();	    	 //��ʱ������ʼ��	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(115200);	 //���ڳ�ʼ��Ϊ115200
 	LED_Init();			     //LED�˿ڳ�ʼ��
	KEY_Init();          //��ʼ���밴�����ӵ�Ӳ���ӿ�
//	GPIO_AFIODeInit();
 	while(1)
	{
//		for(;i<145;i++)
//		{
			
			if(USART_RX_BUF[i] == 'a' && USART_RX_BUF[i+1] == 'b' && USART_RX_BUF[i+143] == 'c' && USART_RX_BUF[i+144] == 'd')
			{
			LED0=!LED0;
				if(USART_RX_BUF[3] == '1')
					GPIO_SetBits(GPIOB,GPIO_Pin_7);	
				else 
					GPIO_SetBits(GPIOB,GPIO_Pin_6); 
				
				if(USART_RX_BUF[6] == '1')
					GPIO_SetBits(GPIOG,GPIO_Pin_14);	
				else if(USART_RX_BUF[6] == '0')			
						GPIO_SetBits(GPIOG,GPIO_Pin_13);				
			
				if(USART_RX_BUF[9] == '1')
					GPIO_SetBits(GPIOG,GPIO_Pin_12);	
				else if(USART_RX_BUF[9] == '0')			
					GPIO_SetBits(GPIOG,GPIO_Pin_11); 
				
				if(USART_RX_BUF[12] == '1')
					GPIO_SetBits(GPIOG,GPIO_Pin_10);	
				else if(USART_RX_BUF[12] == '0')			
					GPIO_SetBits(GPIOG,GPIO_Pin_9); 
					
				if(USART_RX_BUF[15] == '1')
					GPIO_SetBits(GPIOD,GPIO_Pin_7);	
				else if(USART_RX_BUF[15] == '0')			
					GPIO_SetBits(GPIOD,GPIO_Pin_6); 
				if(USART_RX_BUF[18] == '1')
					GPIO_SetBits(GPIOD,GPIO_Pin_5);	
				else if(USART_RX_BUF[18] == '0')			
					GPIO_SetBits(GPIOD,GPIO_Pin_4); 

				if(USART_RX_BUF[21] == '1')
					GPIO_SetBits(GPIOD,GPIO_Pin_3);	
				else if(USART_RX_BUF[21] == '0')			
					GPIO_SetBits(GPIOD,GPIO_Pin_2); 
				if(USART_RX_BUF[24] == '1')
					GPIO_SetBits(GPIOD,GPIO_Pin_1);	
				else if(USART_RX_BUF[24] == '0')			
					GPIO_SetBits(GPIOD,GPIO_Pin_0);				
				
				if(USART_RX_BUF[27] == '1')
					GPIO_SetBits(GPIOC,GPIO_Pin_12);	
				else if(USART_RX_BUF[27] == '0')			
					GPIO_SetBits(GPIOC,GPIO_Pin_11); 
				if(USART_RX_BUF[30] == '1')
					GPIO_SetBits(GPIOA,GPIO_Pin_12);	
				else if(USART_RX_BUF[30] == '0')			
					GPIO_SetBits(GPIOA,GPIO_Pin_11);		

				if(USART_RX_BUF[33] == '1')
					GPIO_SetBits(GPIOA,GPIO_Pin_8);	
				else if(USART_RX_BUF[33] == '0')			
					GPIO_SetBits(GPIOC,GPIO_Pin_9); 
				if(USART_RX_BUF[36] == '1')
					GPIO_SetBits(GPIOC,GPIO_Pin_8);	
				else if(USART_RX_BUF[36] == '0')			
					GPIO_SetBits(GPIOC,GPIO_Pin_7);		

				if(USART_RX_BUF[39] == '1')
					GPIO_SetBits(GPIOC,GPIO_Pin_6);	
				else if(USART_RX_BUF[39] == '0')			
					GPIO_SetBits(GPIOG,GPIO_Pin_8); 

				if(USART_RX_BUF[42] == '1')
					GPIO_SetBits(GPIOG,GPIO_Pin_7);	
				else if(USART_RX_BUF[42] == '0')			
					GPIO_SetBits(GPIOG,GPIO_Pin_6);				

				if(USART_RX_BUF[45] == '1')
					GPIO_SetBits(GPIOG,GPIO_Pin_5);	
				else if(USART_RX_BUF[45] == '0')			
					GPIO_SetBits(GPIOG,GPIO_Pin_4);	

				if(USART_RX_BUF[48] == '1')
					GPIO_SetBits(GPIOG,GPIO_Pin_3);	
				else if(USART_RX_BUF[48] == '0')			
					GPIO_SetBits(GPIOG,GPIO_Pin_2);	
				
				
				if(USART_RX_BUF[51] == '1')
					GPIO_SetBits(GPIOD,GPIO_Pin_15);	
				else if(USART_RX_BUF[51] == '0')			
					GPIO_SetBits(GPIOD,GPIO_Pin_14);			
				
				if(USART_RX_BUF[54] == '1')
					GPIO_SetBits(GPIOD,GPIO_Pin_13);	
				else if(USART_RX_BUF[54] == '0')			
					GPIO_SetBits(GPIOD,GPIO_Pin_12);	
///////				
				if(USART_RX_BUF[57] == '1')
					GPIO_SetBits(GPIOD,GPIO_Pin_11);	
				else if(USART_RX_BUF[57] == '0')			
					GPIO_SetBits(GPIOD,GPIO_Pin_10);		
				
				if(USART_RX_BUF[60] == '1')
					GPIO_SetBits(GPIOD,GPIO_Pin_9);	
				else if(USART_RX_BUF[60] == '0')			
					GPIO_SetBits(GPIOD,GPIO_Pin_8);	
				
				if(USART_RX_BUF[63] == '1')
					GPIO_SetBits(GPIOB,GPIO_Pin_15);	
				else if(USART_RX_BUF[63] == '0')			
					GPIO_SetBits(GPIOB,GPIO_Pin_14);	
				
				if(USART_RX_BUF[66] == '1')
					GPIO_SetBits(GPIOB,GPIO_Pin_13);	
				else if(USART_RX_BUF[66] == '0')			
					GPIO_SetBits(GPIOB,GPIO_Pin_12);	
				
				if(USART_RX_BUF[69] == '1')
					GPIO_SetBits(GPIOC,GPIO_Pin_13);	
				else if(USART_RX_BUF[69] == '0')			
					GPIO_SetBits(GPIOE,GPIO_Pin_6);		
				
				if(USART_RX_BUF[72] == '1')
					GPIO_SetBits(GPIOF,GPIO_Pin_1);	
				else if(USART_RX_BUF[72] == '0')			
					GPIO_SetBits(GPIOF,GPIO_Pin_0);	
				
				if(USART_RX_BUF[75] == '1')
					GPIO_SetBits(GPIOF,GPIO_Pin_3);	
				else if(USART_RX_BUF[75] == '0')			
					GPIO_SetBits(GPIOF,GPIO_Pin_2);		
				
				if(USART_RX_BUF[78] == '1')
					GPIO_SetBits(GPIOF,GPIO_Pin_5);	
				else if(USART_RX_BUF[78] == '0')			
					GPIO_SetBits(GPIOF,GPIO_Pin_4);	
				
				if(USART_RX_BUF[81] == '1')
					GPIO_SetBits(GPIOF,GPIO_Pin_7);	
				else if(USART_RX_BUF[81] == '0')			
					GPIO_SetBits(GPIOF,GPIO_Pin_6);		
				
				if(USART_RX_BUF[84] == '1')
					GPIO_SetBits(GPIOF,GPIO_Pin_9);	
				else if(USART_RX_BUF[84] == '0')			
					GPIO_SetBits(GPIOF,GPIO_Pin_8);	
								
				if(USART_RX_BUF[87] == '1')
					GPIO_SetBits(GPIOC,GPIO_Pin_0);	
				else if(USART_RX_BUF[87] == '0')			
					GPIO_SetBits(GPIOF,GPIO_Pin_10);	

				
				if(USART_RX_BUF[90] == '1')
					GPIO_SetBits(GPIOC,GPIO_Pin_2);	
				else if(USART_RX_BUF[90] == '0')			
					GPIO_SetBits(GPIOC,GPIO_Pin_1);	
////PIN				
				if(USART_RX_BUF[93] == '1')
					GPIO_SetBits(GPIOE,GPIO_Pin_0);	
				else if(USART_RX_BUF[93] == '0')			
					GPIO_SetBits(GPIOE,GPIO_Pin_2);	
				
					if(USART_RX_BUF[96] == '1')
					GPIO_SetBits(GPIOA,GPIO_Pin_2);	
				else if(USART_RX_BUF[96] == '0')			
					GPIO_SetBits(GPIOA,GPIO_Pin_1);	
				
				if(USART_RX_BUF[99] == '1')
					GPIO_SetBits(GPIOA,GPIO_Pin_4);	
				else if(USART_RX_BUF[99] == '0')			
					GPIO_SetBits(GPIOA,GPIO_Pin_3);	
				
				if(USART_RX_BUF[102] == '1')
					GPIO_SetBits(GPIOA,GPIO_Pin_6);	
				else if(USART_RX_BUF[102] == '0')			
					GPIO_SetBits(GPIOA,GPIO_Pin_5);	
				
				if(USART_RX_BUF[105] == '1')
					GPIO_SetBits(GPIOC,GPIO_Pin_4);	
				else if(USART_RX_BUF[105] == '0')			
					GPIO_SetBits(GPIOA,GPIO_Pin_7);	

				if(USART_RX_BUF[108] == '1')
					GPIO_SetBits(GPIOB,GPIO_Pin_0);	
				else if(USART_RX_BUF[108] == '0')			
					GPIO_SetBits(GPIOC,GPIO_Pin_5);	
				
				if(USART_RX_BUF[111] == '1')
					GPIO_SetBits(GPIOB,GPIO_Pin_2);	
				else if(USART_RX_BUF[111] == '0')			
					GPIO_SetBits(GPIOB,GPIO_Pin_1);	
				
				if(USART_RX_BUF[114] == '1')
					GPIO_SetBits(GPIOF,GPIO_Pin_12);	
				else if(USART_RX_BUF[114] == '0')			
					GPIO_SetBits(GPIOF,GPIO_Pin_11);
				
				if(USART_RX_BUF[117] == '1')
					GPIO_SetBits(GPIOF,GPIO_Pin_14);	
				else if(USART_RX_BUF[117] == '0')			
					GPIO_SetBits(GPIOF,GPIO_Pin_13);	
				
				if(USART_RX_BUF[120] == '1')
					GPIO_SetBits(GPIOE,GPIO_Pin_7);	
				else if(USART_RX_BUF[120] == '0')			
					GPIO_SetBits(GPIOG,GPIO_Pin_1);	
				
				if(USART_RX_BUF[123] == '1')
					GPIO_SetBits(GPIOE,GPIO_Pin_9);	
				else if(USART_RX_BUF[123] == '0')			
					GPIO_SetBits(GPIOE,GPIO_Pin_8);	
				
				if(USART_RX_BUF[126] == '1')
					GPIO_SetBits(GPIOE,GPIO_Pin_11);	
				else if(USART_RX_BUF[126] == '0')			
					GPIO_SetBits(GPIOE,GPIO_Pin_10);	
				
				if(USART_RX_BUF[129] == '1')
					GPIO_SetBits(GPIOE,GPIO_Pin_13);	
				else if(USART_RX_BUF[129] == '0')			
					GPIO_SetBits(GPIOE,GPIO_Pin_12);
				
				if(USART_RX_BUF[132] == '1')
					GPIO_SetBits(GPIOE,GPIO_Pin_15);	
				else if(USART_RX_BUF[132] == '0')			
					GPIO_SetBits(GPIOE,GPIO_Pin_14);	
				
				if(USART_RX_BUF[135] == '1')
					GPIO_SetBits(GPIOB,GPIO_Pin_11);	
				else if(USART_RX_BUF[135] == '0')						
					GPIO_SetBits(GPIOB,GPIO_Pin_10);
				
				
				
				
//Pin
				
				if(USART_RX_BUF[138] == '1')
					GPIO_SetBits(GPIOE,GPIO_Pin_5);	
				else if(USART_RX_BUF[138] == '0')			
					GPIO_SetBits(GPIOF,GPIO_Pin_15);
				
				if(USART_RX_BUF[141] == '1')
					GPIO_SetBits(GPIOB,GPIO_Pin_9);	
				else if(USART_RX_BUF[141] == '0')			
					GPIO_SetBits(GPIOB,GPIO_Pin_5);

//				if(USART_RX_BUF[138] == '1')
//					GPIO_SetBits(GPIOE,GPIO_Pin_0);	
//				else if(USART_RX_BUF[138] == '0')			
//					GPIO_SetBits(GPIOE,GPIO_Pin_2);				
			}
	//	}
			delay_ms(10);
		if(i == 144)
		{i=0;}
//		if(USART_RX_STA&0x8000)
//		{					   
//			len=USART_RX_STA&0x3fff;//�õ��˴ν��յ������ݳ���
//			printf("\r\n���͵���ϢΪ:\r\n\r\n");
//			for(t=0;t<len;t++)
//			{
//				USART_SendData(USART1, USART_RX_BUF[t]);//�򴮿�1��������
//				while(USART_GetFlagStatus(USART1,USART_FLAG_TC)!=SET);//�ȴ����ͽ���
//			}
//			printf("\r\n\r\n");//���뻻��
//			USART_RX_STA=0;
////			if(USART_RX_BUF[i-2] == 'a' && USART_RX_BUF[i-1] == 'b' && USART_RX_BUF[i] == 'c')
////			{
////			LED0=!LED0;
////			}
////			delay_ms(10);
//		}
//		else
//		{
//			times++;
//			if(times%5000==0)
//			{
//				printf("\r\n STM32F103ZE���İ� ����ʵ��\r\n");
//				printf("mcudev.taobao.com \r\n\r\n");
//			}
//			if(times%200==0)printf("����������,�Իس�������\n");  
//			//if(times%30==0)LED0=!LED0;//��˸LED,��ʾϵͳ��������.
//			delay_ms(10);   
//		}
	}	 
 }

