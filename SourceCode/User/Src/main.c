//#include "stm32f10x.h" // Device header
//#include "stm32f10x_gpio.h"

//#include "math.h"
//#include "delay.h"
//#include "DirectionData.h"
//#include "UART_Driver.h"
//#include "SSD1306.h"

//#define EARTH_RADIUS 6378.137
//#define PI 3.14159265359
//#define MESSAGE_DELIMITERS_STRING "()	, "

//#define MPU9250_I2C I2C2
//#define MPU9250_I2C_SCL_Pin GPIO_Pin_10
//#define MPU9250_I2C_SDA_Pin GPIO_Pin_11
//#define MPU9250_I2C_Speed 100000 // 100kHz standard mode
//#define MPU9250_I2C_Port GPIOB

//static DirectionDataListT list;
//char s[70] = "";
//char pos = 0;
//int ilat, ilon, ilatM,ilonM;
//unsigned int nextDirectionM; 
//bool daQua = true, sapQua = false;

//uint8_t messageToDirectionData(char *message, int len, uint8_t *nextDirection, uint32_t *longtitude, uint32_t *latetidude);
//void UART2_ReceiveMessage(char *message, uint8_t length);
//float coordinatesToMeters(float lat1, float long1, float lat2, float long2);
//void myI2C_Init(void);
//void led_toggle(void);
//void getLatLon(char *s);
//float convertNmeaToDec(double nmea);

////ngat()
////{
////	DirectionDataT *ptr = DirectionDataList_Get(&list);
////	ptr->
////	free(ptr);
////}
//void led_toggle(void)
//		{
//				/* Read LED output (GPIOA PIN8) status */
//				uint8_t led_bit = GPIO_ReadOutputDataBit(GPIOC, GPIO_Pin_13);
//			 
//				/* If LED output set, clear it */
//				if(led_bit == (uint8_t)Bit_SET)
//				{
//						GPIO_ResetBits(GPIOC, GPIO_Pin_13);
//				}
//				/* If LED output clear, set it */
//				else
//				{
//						GPIO_SetBits(GPIOC, GPIO_Pin_13);
//				}
//		}

//void CreateL()
//{
//		DirectionDataT *ptr = DirectionDataList_Get(&list);
//		ptr->nextDirection=0;
//		ptr->latetitude=0;
//		ptr->longtitude=0;
//		DirectionDataList_Clear(&list);
//}
//int main(void)
//{
///***********************************************************************************************
//*											GPIO_Init						
//***********************************************************************************************/
//	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
//	/* Set Led */
//		GPIO_InitTypeDef GPIOled;
//		GPIOled.GPIO_Pin = GPIO_Pin_13;
//	  GPIOled.GPIO_Speed = GPIO_Speed_50MHz;
//	  GPIOled.GPIO_Mode = GPIO_Mode_Out_PP;
//	  GPIO_Init(GPIOC, &GPIOled);
//		
//		GPIO_SetBits(GPIOC, GPIO_Pin_13);
//		//GPIO_ResetBits(GPIOB, GPIO_Pin_13);

///*************************************************************************************
//*************************************************************************************
//*																	USART_Init_1                                       *
//**************************************************************************************/
//	  GPIO_InitTypeDef GPIOtx;
//	  USART_InitTypeDef USART;
//		RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1 | RCC_APB2Periph_GPIOA, ENABLE);
//		USART.USART_Mode = USART_Mode_Tx | USART_Mode_Rx;
//	  USART.USART_StopBits = USART_StopBits_1;
//   	USART.USART_WordLength = USART_WordLength_8b;
//	  USART.USART_Parity = USART_Parity_No;
//	  USART.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
//	  USART.USART_BaudRate = 9600;
//		USART_Init(USART1, &USART);
//	  USART_ITConfig(USART1, USART_IT_RXNE, ENABLE);
//	  USART_Cmd(USART1, ENABLE);
//	  NVIC_EnableIRQ(USART1_IRQn);
//	/*------ TX-Pin PA9 & RX-Pin PA10 -----*/
//			
//	/* TX - PA9 */
//	GPIOtx.GPIO_Pin = GPIO_Pin_9;
//	GPIOtx.GPIO_Speed = GPIO_Speed_50MHz;
//	GPIOtx.GPIO_Mode = GPIO_Mode_AF_PP;
//	GPIO_Init(GPIOA, &GPIOtx);
//	
//	/* RX - PA10 */
//	GPIOtx.GPIO_Pin = GPIO_Pin_10;
//	GPIOtx.GPIO_Speed = GPIO_Speed_50MHz;
//	GPIOtx.GPIO_Mode = GPIO_Mode_IN_FLOATING;
//	GPIO_Init(GPIOA, &GPIOtx);
//			
////************************************************************************************
//		RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
//		/* Set Led */
//		GPIO_InitTypeDef GPIO_InitStruct,GPIO_InitStructure,GPIO;
//		GPIO_InitStruct.GPIO_Pin = GPIO_Pin_5|GPIO_Pin_15|GPIO_Pin_0|GPIO_Pin_7;
//	  GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
//	  GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
//	  GPIO_Init(GPIOB, &GPIO_InitStruct);
//		GPIO_ResetBits(GPIOB, GPIO_Pin_5);
//		GPIO_ResetBits(GPIOB, GPIO_Pin_15);
//		GPIO_ResetBits(GPIOA, GPIO_Pin_0);
//		GPIO_ResetBits(GPIOA, GPIO_Pin_7);
//	
//	delay_Init();
//	UART_Init(UART2_ReceiveMessage);
//	myI2C_Init();

//	DirectionDataList_Init(&list);

//	init(0x3C);

//	delay_us(50000); // 50ms

//	UART_SendStr("SmartGo\n\0");

//	display();

//	while (1)
//	{
//	}
//}

//uint8_t messageToDirectionData(char *message, int len, uint8_t *nextDirection, uint32_t *longtitude, uint32_t *latetidude)
//{
//	char *tokenPointer;

//	if (message != NULL && message[0] == '(' && message[len - 2] == ')')
//	{
//		tokenPointer = strtok(message, MESSAGE_DELIMITERS_STRING);
//		*nextDirection = atoi(tokenPointer);
//		tokenPointer = strtok(NULL, MESSAGE_DELIMITERS_STRING);
//		if (tokenPointer != NULL)
//		{
//			*longtitude = atoi(tokenPointer);
//		}
//		else
//		{
//			return 0;
//		}

//		tokenPointer = strtok(NULL, MESSAGE_DELIMITERS_STRING);
//		if (tokenPointer != NULL)
//		{
//			*latetidude = atoi(tokenPointer);
//		}
//		else
//		{
//			return 0;
//		}

//		tokenPointer = strtok(NULL, MESSAGE_DELIMITERS_STRING);
//		if (tokenPointer == NULL)
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	else
//	{
//		*nextDirection = 0;
//		*longtitude = 0;
//		*latetidude = 0;

//		return 0;
//	}
//}

// void USART1_IRQHandler(void)
//{
//		/* RXNE handler */
//    if(USART_GetITStatus(USART1, USART_IT_RXNE) != RESET)
//    {
//			s[pos] = (char)USART_ReceiveData(USART1);
//			pos++;
//			if (s[pos - 1] == '\n')
//			{
//				//led_toggle();
//				if (strstr(s, "$GNGLL") != NULL)
//				{
//					//led_toggle();
//					GPIO_ResetBits(GPIOC, GPIO_Pin_13);
//				//	getLatLon(s);
//				}
//				pos = 0;
//				strcpy(s, "");
//			}
//		}
//    /* ------------------------------------------------------------ */
//    /* Other USART1 interrupts handler can go here ...             */
//		//U_Print_Char(USART2, "End");
//}  

//void UART2_ReceiveMessage(char *message, uint8_t length)
//{
//	uint8_t nextDi;
//	uint32_t longtitude, latetitude;
//	int result;

//	UART_SendStr(message);

//	if (messageToDirectionData(message, length, &nextDi, &longtitude, &latetitude) == 1)
//	{
//  		result = DirectionDataList_Put(&list, nextDi, longtitude, latetitude);
//		if (result == STATUS_OK)
//		{
//			GPIO_ResetBits(GPIOB, GPIO_Pin_5);
//			GPIO_ResetBits(GPIOB, GPIO_Pin_15);
//			GPIO_ResetBits(GPIOA, GPIO_Pin_0);
//			GPIO_ResetBits(GPIOA, GPIO_Pin_7);
//	
//		}
//		else if (result == STATUS_EXCEED_LIMIT)
//		{
//			GPIO_SetBits(GPIOB, GPIO_Pin_5);
//			GPIO_SetBits(GPIOA, GPIO_Pin_7);
//		
//		}
//		else if (result == STATUS_NOT_ENOUGH_MEMORY)
//		{
//			GPIO_SetBits(GPIOB, GPIO_Pin_5);
//			GPIO_SetBits(GPIOB, GPIO_Pin_15);
//			GPIO_SetBits(GPIOA, GPIO_Pin_0);
//			GPIO_SetBits(GPIOA, GPIO_Pin_7);
//		}
//		else
//		{
//			GPIO_ResetBits(GPIOB, GPIO_Pin_5);
//			GPIO_ResetBits(GPIOB, GPIO_Pin_15);
//			GPIO_ResetBits(GPIOA, GPIO_Pin_0);
//			GPIO_ResetBits(GPIOA, GPIO_Pin_7);
//		}
//	}
//}

//float coordinatesToMeters(float lat1, float long1, float lat2, float long2)
//{
//	float dLat = lat2 * PI / 180 - lat1 * PI / 180;
//	float dLon = long2 * PI / 180 - long1 * PI / 180;
//	float a = sin(dLat / 2) * sin(dLat / 2) + cos(lat1 * PI / 180) * cos(lat2 * PI / 180) * sin(dLon / 2) * sin(dLon / 2);
//	float c = 2 * atan2(sqrt(a), sqrt(1 - a));
//	float d = EARTH_RADIUS * c;
//	return d * 1000;
//}

//void myI2C_Init(void)
//{
//	I2C_InitTypeDef I2C_InitStructure;
//	GPIO_InitTypeDef GPIO_InitStructure;

//	/* Configure I2C pins: SCL and SDA */
//	GPIO_InitStructure.GPIO_Pin = MPU9250_I2C_SCL_Pin | MPU9250_I2C_SDA_Pin;
//	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
//	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_OD;
//	GPIO_Init(MPU9250_I2C_Port, &GPIO_InitStructure);

//	/* I2C configuration */
//	I2C_InitStructure.I2C_Mode = I2C_Mode_I2C;
//	I2C_InitStructure.I2C_DutyCycle = I2C_DutyCycle_2;
//	I2C_InitStructure.I2C_OwnAddress1 = 0x00; // MPU6050 7-bit adress = 0x68, 8-bit adress = 0xD0;
//	I2C_InitStructure.I2C_Ack = I2C_Ack_Enable;
//	I2C_InitStructure.I2C_AcknowledgedAddress = I2C_AcknowledgedAddress_7bit;
//	I2C_InitStructure.I2C_ClockSpeed = MPU9250_I2C_Speed;

//	/* Apply I2C configuration after enabling it */
//	I2C_Init(MPU9250_I2C, &I2C_InitStructure);
//	/* I2C Peripheral Enable */
//	I2C_Cmd(MPU9250_I2C, ENABLE);
//	
//	
//}
//void getLatLon(char *mess)
//{
//	float flat, flon;
//	int i = 0, length = 0, lat_index = 0, lon_index = 0;
//	char lat[11], lon[12];
//	while (mess[i] != NULL)
//	{
//		i++;
//		length++;
//	}

//	int count_comma = 1;
//	i = 7;

//	while (count_comma != 5)
//	{
//		if (mess[i] == ',')
//		{
//			i++;
//			count_comma++;
//		}
//		else
//		{
//			switch (count_comma)
//			{
//			case 1:
//			case 2:
//				lat[lat_index] = mess[i];
//				i++;
//				lat_index++;
//				break;
//			case 3:
//			case 4:
//				lon[lon_index] = mess[i];
//				i++;
//				lon_index++;
//				break;
//			}
//		}
//	}

//	lat[lat_index-1] = '\0';
//	lon[lon_index-1] = '\0';
//	float lat_temp = atof(lat);//1052.17481
//	float lon_temp = atof(lon);//10648.16668;
//	/*float lat_temp = 1052.17481;
//	float lon_temp = 10648.16668;*/
//	/*printf("%6f", lat_temp);
//	cout << endl;
//	printf("%6f", lon_temp);*/
//	flat = convertNmeaToDec(lat_temp)-10;
//	flon = convertNmeaToDec(lon_temp)-106;
//	flat *= 1000000;
//	flon *= 1000000;
//	ilat = (int)flat;
//	ilon = (int)flon;
//}
//float convertNmeaToDec(double nmea) {
//	int deg = ((int)nmea / 100);
//	float decPos = deg + ((nmea - (deg * 100)) / 60);
//	return decPos;
//}
