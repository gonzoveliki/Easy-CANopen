/*
 * Enum_Error_Codes.h
 *
 *  Created on: 16 okt. 2021
 *      Author: Daniel Mårtensson
 */

#ifndef CANOPEN_GLOBAL_ENUMS_ENUM_ERROR_CODES_H_
#define CANOPEN_GLOBAL_ENUMS_ENUM_ERROR_CODES_H_

enum{
	/* Error registers */
	ERROR_REGISTER_GENERIC_ERROR = 0x1,
	ERROR_REGISTER_CURRENT_ERROR = 0x2,
	ERROR_REGISTER_VOLTAGE_ERROR = 0x4,
	ERROR_REGISTER_TEMPERATURE_ERROR = 0x8,
	ERROR_REGISTER_COMMUNICATION_ERROR = 0x10,
	ERROR_REGISTER_DEVICE_PROFILE_SPECIFIC = 0x20,
	ERROR_REGISTER_BIT_6_RESERVED = 0x0,
	ERROR_REGISTER_MANUFACTURER_SPECIFIC = 0x80,

	/* Error codes */
	ERROR_CODE_NO_ERROR = 0x0,
	ERROR_CODE_GENERIC_ERROR = 0x1000,
	ERROR_CODE_CURRENT_GENERTIC = 0x2000,
	ERROR_CODE_CURRENT_INPUT_SIDE = 0x2100,
	ERROR_CODE_CURRENT_DEVICE = 0x2200,
	ERROR_CODE_CURRENT_OUTUT_SIDE = 0x2300,
	ERROR_CODE_VOLTAGE_GENERTIC = 0x3000,
	ERROR_CODE_MAINS_VOLTAGE = 0x3100,
	ERROR_CODE_VOLTAGE_DEVICE = 0x3200,
	ERROR_CODE_OUTPUT_VOLTAGE = 0x3300,
	ERROR_CODE_TEMPERATURE = 0x4000,
	ERROR_CODE_AMBIENT_TEMPERATURE = 0x4100,
	ERROR_CODE_DEVICE_TEMPERATURE = 0x4200,
	ERROR_CODE_DEVICE_HARDWARE = 0x5000,
	ERROR_CODE_DEVICE_SOFTWARE = 0x6000,
	ERROR_CODE_INTERNAL_SOFTWARE = 0x6100,
	ERROR_CODE_USER_SOFTWARE = 0x6200,
	ERROR_CODE_DATA_SET = 0x6300,
	ERROR_CODE_ADDITIONAL_MODULES = 0x7000,
	ERROR_CODE_MONITORING = 0x8000,
	ERROR_CODE_COMMUNICATION = 0x8100,
	ERROR_CODE_CAN_OVERRUN = 0x8110,
	ERROR_CODE_CAN_PASSIVE_MODE = 0x8120,
	ERROR_CODE_GUARD_HARTBEAT = 0x8130,
	ERROR_CODE_RECOVER_FROM_BUS = 0x8140,
	ERROR_CODE_CAN_ID_COLLISION = 0x8150,
	ERROR_CODE_PROTOCOL_ERROR = 0x8200,
	ERROR_CODE_PDO_LENGTH = 0x8210,
	ERROR_CODE_PDO_TO_LONG = 0x8220,
	ERROR_CODE_DAM_MPDO_NOT_PROCEED = 0x8230,
	ERROR_CODE_SYNC_DATA_LENGTH = 0x8240,
	ERROR_CODE_RECEIVE_PDO_TIMEOUT = 0x8250,
	ERROR_CODE_EXTERNAL_ERROR = 0x9000,
	ERROR_CODE_ADDITIONAL_FUNCTIONS = 0xF000,
	ERROR_CODE_DEVICE_SPECIFIC = 0xFF00

	,ABORT_SDO_CODE_T_NOT_CHANGED        = 0x05030000  ///< the Toggle bit has not changed
	,ABORT_SDO_CODE_INVALID_COMMAND      = 0x05040001  ///< Invalid SDO Command specifier
	,ABORT_SDO_CODE_INVALID_ACCESS0      = 0x06010000  ///< unsupported object access
	,ABORT_SDO_CODE_INVALID_ACCESS1      = 0x06010001  ///< unsupported object access
	,ABORT_SDO_CODE_INVALID_ACCESS_WRITE = 0x06010002  ///< write is not allowed
	,ABORT_SDO_CODE_INVALID_ACCESS2      = 0x06010003  ///< unsupported object access	
	,ABORT_SDO_CODE_INVALID_OBJECT       = 0x06020000  ///< the object does not exist in the object dictionary
	,ABORT_SDO_CODE_ERROR_DATA_TYPE0     = 0x06070010  ///< does not match the data type
	,ABORT_SDO_CODE_ERROR_DATA_TYPE1     = 0x06070011  ///< does not match the data type
	,ABORT_SDO_CODE_ERROR_DATA_TYPE2     = 0x06070012  ///< does not match the data type
	,ABORT_SDO_CODE_ERROR_DATA_TYPE3     = 0x06070013  ///< does not match the data type
	,ABORT_SDO_CODE_ERROR_SUBINDEX       = 0x06090011  ///< The sub-index does not exist
	,ABORT_SDO_CODE_ERROR_COMMON         = 0x08000000  ///< common error
};

#endif /* CANOPEN_GLOBAL_ENUMS_ENUM_ERROR_CODES_H_ */
