#include<STD_TYPES.h>
#include<BIT_MATH.h>

#include<stm32f103xx.h>

#include<RCC_interface.h>
#include<GPIO_interface.h>
#include<STK_interface.h>

int main(void)
{
//  RCC_u8ClockInit();
  RCC_u8EnablePeripheralBus(GPIOC_u8Bus, IOPCEN);

  GPIO_PinMode(GPIOC, GPIO_u8Pin13, GPIO_u8OutGnrPushPull2MHz);

  STK_Init();
  while(1)
  {
    GPIO_PinToggle(GPIOC, GPIO_u8Pin13);
    STK_SetBusyWait(1000000);
  }

  return 0;
}
