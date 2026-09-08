/* Hand-written replacement for the BSP-generated xtopology_g.c.
 * One EMAC: PS GEM0 on the Pynq-Z2. */
#include "netif/xtopology.h"
#include "xparameters.h"

struct xtopology_t xtopology[] = {
	{
		XPAR_XEMACPS_0_BASEADDR,       /* 0xE000B000 */
		xemac_type_emacps,
#ifndef SDT
		0x0,                           /* intc_baseaddr   (emaclite only) */
		0x0,                           /* intc_emac_intr  (emaclite only) */
		XPAR_SCUGIC_0_CPU_BASEADDR,    /* scugic_baseaddr */
		XPAR_XEMACPS_0_INTR,           /* scugic_emac_intr: GEM0 = IRQ 54 */
#endif
	},
};

int xtopology_n_emacs = 1;
