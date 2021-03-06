#ifndef _BT_INTERRUPTS_H_
#define _BT_INTERRUPTS_H_

#include "devman/bt_integrated_device.h"
#include "devman/bt_integrated_driver.h"
#include "bt_module.h"

typedef BT_ERROR (*BT_FN_INTERRUPT_HANDLER)(BT_u32 ulIRQ, void *pParam);

#define BT_INTERRUPT_MAX_LABEL	32

typedef struct _BT_INTERRUPT_VECTOR {
	BT_FN_INTERRUPT_HANDLER		pfnHandler;
	void 				   	   *pParam;
	char						label[BT_INTERRUPT_MAX_LABEL];
} BT_INTERRUPT_VECTOR;

struct bt_interrupt_stat {
	BT_u32			ulIRQ;
	BT_u32			ulHits;
	const BT_i8    *label;
};

BT_ERROR 	BT_RegisterInterruptController	(BT_u32 ulBaseIRQ, BT_u32 ulTotalIRQs, BT_HANDLE hIRQ);
BT_ERROR 	BT_RegisterInterrupt			(BT_u32 ulIRQ, BT_FN_INTERRUPT_HANDLER pfnHandler, void *pParam);
BT_ERROR 	BT_SetInterruptLabel			(BT_u32 ulIRQ, BT_FN_INTERRUPT_HANDLER pfnHandler, void *pParam, const BT_i8 *label);
const BT_i8 *BT_GetInterruptLabel			(BT_u32 ulIRQ);
BT_BOOL 	BT_InterruptRegistered			(BT_u32 ulIRQ);
BT_ERROR 	BT_UnregisterInterrupt			(BT_u32 ulIRQ, BT_FN_INTERRUPT_HANDLER pfnHandler, void *pParam);
BT_ERROR 	BT_SetInterruptPriority			(BT_u32 ulIRQ, BT_u32 ulPriority);
BT_u32 		BT_GetInterruptPriority			(BT_u32 ulIRQ, BT_ERROR *pError);
BT_ERROR	BT_EnableInterrupt				(BT_u32 ulIRQ);
BT_ERROR	BT_DisableInterrupt				(BT_u32 ulIRQ);
BT_u32		BT_GetInterruptCount			(BT_u32 ulIRQ);
BT_ERROR	BT_EnableInterrupts				();
BT_ERROR	BT_DisableInterrupts			();
BT_u32		BT_GetInterruptCount			();

/**
 *	@brief		Controls CPU Interrupt Affinity.
 *
 *	@ulIRQ		Interrupt Number
 *	@ulCPU		CPU Id to set the affinity for. (in range(0..nCPUs)).
 *	@bReceive	BT_TRUE if this CPU should receive the interrupt, BT_FALSE if not.
 *
 *	@return 	BT_ERR_NONE on success.
 **/
BT_ERROR 	BT_SetInterruptAffinity			(BT_u32 ulIRQ, BT_u32 ulCPU, BT_BOOL bReceive);

#endif
