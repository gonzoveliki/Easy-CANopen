/*
 * CANopen_Server_SDO_Receive.c
 *
 *  Created on: 24 okt. 2021
 *      Author: Daniel Mårtensson
 */

#include "SDO_Internal.h"

/* Layers */
#include "SDO_Protocol/SDO_Protocol.h"

void CANopen_Server_SDO_Receive_Request(CANopen *canopen, uint8_t node_ID, uint8_t data[]){
	/* Read command specifier */
	uint8_t cs = data[0] >> 5;

	/* Make a choice */
	switch(cs){
	case CS_SDO_INITIATE_DOWNLOAD_REQUEST:
		return CANopen_SDO_Protocol_Initiate_Response(canopen, CS_SDO_INITIATE_DOWNLOAD_RESPONSE, node_ID, data);
	case CS_SDO_SEGMENT_DOWNLOAD_REQUEST:
		return CANopen_SDO_Protocol_Segment_Response(canopen, CS_SDO_SEGMENT_DOWNLOAD_RESPONSE, node_ID, data);
	case CS_SDO_INITIATE_UPLOAD_REQUEST:
		return CANopen_SDO_Protocol_Initiate_Response(canopen, CS_SDO_INITIATE_UPLOAD_RESPONSE, node_ID, data);
	case CS_SDO_SEGMENT_UPLOAD_REQUEST:
		return CANopen_SDO_Protocol_Initiate_Response(canopen, CS_SDO_SEGMENT_UPLOAD_RESPONSE, node_ID, data);
	}
}
