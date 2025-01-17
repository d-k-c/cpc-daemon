/***************************************************************************//**
 * @file
 * @brief Co-Processor Communication Protocol(CPC) - Board Controller
 * @version 3.2.0
 *******************************************************************************
 * # License
 * <b>Copyright 2021 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

#ifndef BOARD_CONTROLLER_H
#define BOARD_CONTROLLER_H

#include <stdbool.h>

void board_controller_get_config_vcom(const char *ip_address, unsigned int *baudrate, bool *flowcontrol);

#endif //BOARD_CONTROLLER_H
