#include <stdio.h>
#include <math.h>
#include "sys/cm4.h"
#include "sys/devices.h"
#include "sys/init.h"
#include "sys/clock.h"
#include "systick.h"
/* #include "led.h" */
/* #include "button.h" */
/* #include "buzzer.h" */
/* #include "musique.h" */


/* Fonction permmetant de jouer une note */

void jouer_note(uint32_t frequence, uint32_t duree);
/* Handler d'interruption systick - a decommenter ci-besoin */
/*
void __attribute__((interrupt)) SysTick_Handler()
{
}
*/


/* Handler d'interruption du bouton sur PB8 - a decommenter ci-besoin */
/*
void __attribute__((interrupt)) EXTI9_5_Handler()
{
	EXTI.PR |= (1<<8);
}
*/


/* Handler d'interruption du bouton sur PC13 - a decommenter ci-besoin */
/*
void __attribute__((interrupt)) EXTI15_10_Handler()
{
	EXTI.PR |= (1<<13);  
}
*/


int main()
{
	/* Initialisation a decommenter en fonction du programme */
	/* enable_GPIOA(); */
	/* enable_GPIOB(); */
	/* enable_GPIOC(); */

	/* led_init(); */

	/* On initialise les IT BP et systick a 1ms */
	/* button_init(); */
	/* button_irq_init(); */
	/* SysTick_init(1000); */
  
	/* On initilise le buzzer pilote par TIM2-CH2 */
	/* enable_TIM2();*/
	/* buzzer_pwm_init(1000);*/
  
	printf("*** Welcome to Nucleo F446 ! ***\r\n");

	while(1);
	
	return 0;
}



