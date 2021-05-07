////////////////////////////////////////////////////////////////////////////////
//  2D Redstone Simulator for the TI-84 Plus CE
//  Authors: TimmyTurner51 (TimmyCraft)
//  License: ??
//  Description: A Redstone Simulator (v1.0.0a)
////////////////////////////////////////////////////////////////////////////////

#define usb_callback_data_t usb_device_t

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <tice.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <debug.h>

#include <graphx.h>
#include <keypadc.h>
#include <fileioc.h>

#include <srldrvce.h>
#include <usbdrvce.h>

#include "setupvars.h"
#include "render.h"

void quitAll();

int main(void) {

	setup();
	menu();
	renderScreen();
	quitAll();

}

void quitAll(void) {

	gfx_End();

}