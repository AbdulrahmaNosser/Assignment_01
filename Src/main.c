#include<STD_TYPES.h>
#include<BIT_MATH.h>

#include<stm32f103xx.h>

#include<RCC_interface.h>
#include<GPIO_interface.h>
#include<STK_interface.h>

int main(void)
{
//  RCC_u8ClockInit();
  RCC_u8EnablePeripheralBus(GPIOA_u8Bus, IOPAEN);
  RCC_u8EnablePeripheralBus(GPIOB_u8Bus, IOPBEN);
  RCC_u8EnablePeripheralBus(GPIOC_u8Bus, IOPCEN);

  GPIO_PinMode(GPIOC, GPIO_u8Pin13, GPIO_u8OutGnrPushPull2MHz);
  GPIO_PinMode(GPIOA, GPIO_u8Pin0, GPIO_u8OutGnrPushPull2MHz);
  GPIO_PinMode(GPIOA, GPIO_u8Pin2, GPIO_u8OutGnrPushPull2MHz);
  GPIO_PinMode(GPIOA, GPIO_u8Pin4, GPIO_u8OutGnrPushPull2MHz);
  GPIO_PinMode(GPIOA, GPIO_u8Pin6, GPIO_u8OutGnrPushPull2MHz);
  GPIO_PinMode(GPIOB, GPIO_u8Pin0, GPIO_u8OutGnrPushPull2MHz);
  GPIO_PinMode(GPIOB, GPIO_u8Pin10, GPIO_u8OutGnrPushPull2MHz);
  GPIO_PinMode(GPIOB, GPIO_u8Pin11, GPIO_u8OutGnrPushPull2MHz);

  STK_Init();
  while(1)
  {
    for (u8 i = 0; i < 4; i++)
    {
      GPIO_PinToggle(GPIOC, GPIO_u8Pin13);
      STK_SetBusyWait(1600000);
      GPIO_PinToggle(GPIOC, GPIO_u8Pin13);

      GPIO_PinToggle(GPIOA, GPIO_u8Pin0);
      STK_SetBusyWait(1600000);
      GPIO_PinToggle(GPIOA, GPIO_u8Pin0);

      GPIO_PinToggle(GPIOA, GPIO_u8Pin2);
      STK_SetBusyWait(1600000);
      GPIO_PinToggle(GPIOA, GPIO_u8Pin2);

      GPIO_PinToggle(GPIOA, GPIO_u8Pin4);
      STK_SetBusyWait(1600000);
      GPIO_PinToggle(GPIOA, GPIO_u8Pin4);


      GPIO_PinToggle(GPIOA, GPIO_u8Pin6);
      STK_SetBusyWait(1600000);
      GPIO_PinToggle(GPIOA, GPIO_u8Pin6);

      GPIO_PinToggle(GPIOB, GPIO_u8Pin0);
      STK_SetBusyWait(1600000);
      GPIO_PinToggle(GPIOB, GPIO_u8Pin0);

      GPIO_PinToggle(GPIOB, GPIO_u8Pin10);
      STK_SetBusyWait(1600000);
      GPIO_PinToggle(GPIOB, GPIO_u8Pin10);

      GPIO_PinToggle(GPIOB, GPIO_u8Pin11);
      STK_SetBusyWait(1600000);
      GPIO_PinToggle(GPIOB, GPIO_u8Pin11);
//////////////////////////////////////////////

      GPIO_PinToggle(GPIOB, GPIO_u8Pin10);
      STK_SetBusyWait(1600000);
      GPIO_PinToggle(GPIOB, GPIO_u8Pin10);

      GPIO_PinToggle(GPIOB, GPIO_u8Pin0);
      STK_SetBusyWait(1600000);
      GPIO_PinToggle(GPIOB, GPIO_u8Pin0);

      GPIO_PinToggle(GPIOA, GPIO_u8Pin6);
      STK_SetBusyWait(1600000);
      GPIO_PinToggle(GPIOA, GPIO_u8Pin6);

      GPIO_PinToggle(GPIOA, GPIO_u8Pin4);
      STK_SetBusyWait(1600000);
      GPIO_PinToggle(GPIOA, GPIO_u8Pin4);

      GPIO_PinToggle(GPIOA, GPIO_u8Pin2);
      STK_SetBusyWait(1600000);
      GPIO_PinToggle(GPIOA, GPIO_u8Pin2);

      GPIO_PinToggle(GPIOA, GPIO_u8Pin0);
      STK_SetBusyWait(1600000);
      GPIO_PinToggle(GPIOA, GPIO_u8Pin0);
    }
    
    for (u8 i = 0; i < 4; i++)
    {
      GPIO_PinToggle(GPIOC, GPIO_u8Pin13);
      GPIO_PinToggle(GPIOB, GPIO_u8Pin11);
      STK_SetBusyWait(1600000);
      GPIO_PinToggle(GPIOC, GPIO_u8Pin13);
      GPIO_PinToggle(GPIOB, GPIO_u8Pin11);

      GPIO_PinToggle(GPIOA, GPIO_u8Pin0);
      GPIO_PinToggle(GPIOB, GPIO_u8Pin10);
      STK_SetBusyWait(1600000);
      GPIO_PinToggle(GPIOA, GPIO_u8Pin0);
      GPIO_PinToggle(GPIOB, GPIO_u8Pin10);

      GPIO_PinToggle(GPIOA, GPIO_u8Pin2);
      GPIO_PinToggle(GPIOB, GPIO_u8Pin0);
      STK_SetBusyWait(1600000);
      GPIO_PinToggle(GPIOA, GPIO_u8Pin2);
      GPIO_PinToggle(GPIOB, GPIO_u8Pin0);

      GPIO_PinToggle(GPIOA, GPIO_u8Pin4);
      GPIO_PinToggle(GPIOA, GPIO_u8Pin6);
      STK_SetBusyWait(1600000);
      GPIO_PinToggle(GPIOA, GPIO_u8Pin4);
      GPIO_PinToggle(GPIOA, GPIO_u8Pin6);

//////////////////////////////////////////////

      GPIO_PinToggle(GPIOA, GPIO_u8Pin2);
      GPIO_PinToggle(GPIOB, GPIO_u8Pin0);
      STK_SetBusyWait(1600000);
      GPIO_PinToggle(GPIOA, GPIO_u8Pin2);
      GPIO_PinToggle(GPIOB, GPIO_u8Pin0);

      GPIO_PinToggle(GPIOA, GPIO_u8Pin0);
      GPIO_PinToggle(GPIOB, GPIO_u8Pin10);
      STK_SetBusyWait(1600000);
      GPIO_PinToggle(GPIOA, GPIO_u8Pin0);
      GPIO_PinToggle(GPIOB, GPIO_u8Pin10);
    }

    for (u8 i = 0; i < 17; i++)
    {
      GPIO_PinToggle(GPIOA, GPIO_u8Pin0);
      GPIO_PinToggle(GPIOA, GPIO_u8Pin2);
      GPIO_PinToggle(GPIOA, GPIO_u8Pin4);
      GPIO_PinToggle(GPIOA, GPIO_u8Pin6);
      GPIO_PinToggle(GPIOB, GPIO_u8Pin0);
      GPIO_PinToggle(GPIOC, GPIO_u8Pin13);
      GPIO_PinToggle(GPIOB, GPIO_u8Pin10);
      GPIO_PinToggle(GPIOB, GPIO_u8Pin11);
      STK_SetBusyWait(4000000);
    }
      GPIO_PinWrite(GPIOA, GPIO_u8Pin0, STD_TYPES_LOW);
      GPIO_PinWrite(GPIOA, GPIO_u8Pin2, STD_TYPES_LOW);
      GPIO_PinWrite(GPIOA, GPIO_u8Pin4, STD_TYPES_LOW);
      GPIO_PinWrite(GPIOA, GPIO_u8Pin6, STD_TYPES_LOW);
      GPIO_PinWrite(GPIOB, GPIO_u8Pin0, STD_TYPES_LOW);
      GPIO_PinWrite(GPIOC, GPIO_u8Pin13, STD_TYPES_LOW);
      GPIO_PinWrite(GPIOB, GPIO_u8Pin10, STD_TYPES_LOW);
      GPIO_PinWrite(GPIOB, GPIO_u8Pin11, STD_TYPES_LOW);
  }

  return 0;
}
