/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Timer.c
 *        \brief  Timer Driver
 *
 *      \details  Driver Configure of the Timer.
 *               
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Interrupt.h"
#include "Mcu_Hw.h"


/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/	

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/
void (*USER_CallBack_Fn)(void);
/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/******************************************************************************
* \Syntax          : void SYSTICK_Init (void)
* \Description     : Initialize the SYSTICK timer .
*
* \Sync\Async      : Synchronous   
* \Reentrancy      : Non Reentrant       
* \Parameters (in) : None                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/





void SysTick_Handler(void)
{
	  (*USER_CallBack_Fn)();
}

/******************************************************************************
* \Syntax          : void SYSTICK_usrCallbackFn(void)
* \Description     : Link the user callback function with the systick handler ISR finction .
*
* \Sync\Async      : Synchronous   
* \Reentrancy      : Non Reentrant       
* \Parameters (in) : Pointer to the user function                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
void SYSTICK_usrCallbackFn(void(*UserIsr)(void)){

             USER_CallBack_Fn= UserIsr;

}



/**********************************************************************************************************************
 *  END OF FILE: Timer.c
 *********************************************************************************************************************/