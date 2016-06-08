#ifndef SMARTRF_SETTINGS_H
#define SMARTRF_SETTINGS_H


//*********************************************************************************
// These settings has been ported for use with TI-RTOS RF driver and cc26xxware
//
// If successful, should be added as feature in samrtRFStudio to export for BLE.
//
// Generated by Eirik
// Tested with TI-RTOS version tirtos_simplelink_2_16_00_08
//
//*********************************************************************************
#include <driverlib/rf_mailbox.h>
#include <driverlib/rf_common_cmd.h>
#include <driverlib/rf_ble_cmd.h>
#include <ti/drivers/rf/RF.h>


// TI-RTOS RF Mode Object
extern RF_Mode RF_ble;


// RF Core API commands
extern rfc_CMD_RADIO_SETUP_t RF_cmdBleRadioSetup;
extern rfc_CMD_BLE_ADV_NC_t RF_cmdAdvNc0; // Non connectable advertising ch. 37
extern rfc_CMD_BLE_ADV_NC_t RF_cmdAdvNc1; // Non connectable advertising ch. 38
extern rfc_CMD_BLE_ADV_NC_t RF_cmdAdvNc2; // Non connectable advertising ch. 39



#endif // SMARTRF_SETTINGS_H