/* Hand-written replacement for the Vitis BSP-generated xlwipconfig.h.
 * Pynq-Z2: single PS GEM (GEM0), FreeRTOS, SDMA descriptors. */
#ifndef __XLWIPCONFIG_H_
#define __XLWIPCONFIG_H_

#define XLWIP_CONFIG_INCLUDE_GEM 1
#define XLWIP_CONFIG_N_TX_DESC   64
#define XLWIP_CONFIG_N_RX_DESC   64
#define XLWIP_CONFIG_EMAC_NUMBER 0

/* No PL PCS/PMA cores in this design (pure PS GEM over RGMII). */
#define XPAR_GIGE_PCS_PMA_1000BASEX_CORE_PRESENT 0
#define XPAR_GIGE_PCS_PMA_SGMII_CORE_PRESENT     0

#endif
