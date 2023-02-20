/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Interrupt.h
 *       Module:  Interrupt Module
 *
 *  Description:  File description
 *  
 *********************************************************************************************************************/
#ifndef Interrupt_H
#define Interrupt_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
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
void SysTick_Handler(void);
 
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
void SYSTICK_usrCallbackFn(void(*UserIsr)(void)); 



#endif  /* Interrupt_H */

/**********************************************************************************************************************
 *  END OF FILE: Interrupt.h
 *********************************************************************************************************************/
