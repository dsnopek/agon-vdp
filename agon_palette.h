//
// Title:	        Agon Video BIOS - Palette data
// Author:        	Dean Belfield
// Created:       	25/02/2023
// Last Updated:	04/03/2023
//
// Modinfo:
// 04/03/2023:		Now uses the same level values as FabGL

#pragma once

// Colour lookup table
// The four FabGL levels are 0x00, 0x55, 0xAA and 0xFF
//
const RGB888 colourLookup[80] = {
    //
    // First a standard set of half and full bright colours in BBC BASIC ordering for backwards compatibility
    //
	RGB888(0x00, 0x00, 0x00), // Black
	RGB888(0xAA, 0x00, 0x00), // Red
	RGB888(0x00, 0xAA, 0x00), // Green
	RGB888(0xAA, 0xAA, 0x00), // Yellow
	RGB888(0x00, 0x00, 0xAA), // Blue
	RGB888(0xAA, 0x00, 0xAA), // Magenta
	RGB888(0x00, 0xAA, 0xAA), // Cyan
	RGB888(0xAA, 0xAA, 0xAA), // White 
	RGB888(0x55, 0x55, 0x55), // Bright Black (Grey)
	RGB888(0xFF, 0x00, 0x00), // Bright Red
	RGB888(0x00, 0xFF, 0x00), // Bright Green
	RGB888(0xFF, 0xFF, 0x00), // Bright Yellow
	RGB888(0x00, 0x00, 0xFF), // Bright Blue
	RGB888(0xFF, 0x00, 0xFF), // Bright Magenta
	RGB888(0x00, 0xFF, 0xFF), // Bright Cyan
	RGB888(0xFF, 0xFF, 0xFF), // Bright White
	//
    // Then the full set of colours available to FabGL
    //
	RGB888(0x00, 0x00, 0x00), RGB888(0x00, 0x00, 0x55), RGB888(0x00, 0x00, 0xAA), RGB888(0x00, 0x00, 0xFF),
	RGB888(0x00, 0x55, 0x00), RGB888(0x00, 0x55, 0x55), RGB888(0x00, 0x55, 0xAA), RGB888(0x00, 0x55, 0xFF),
	RGB888(0x00, 0xAA, 0x00), RGB888(0x00, 0xAA, 0x55), RGB888(0x00, 0xAA, 0xAA), RGB888(0x00, 0xAA, 0xFF),
	RGB888(0x00, 0xFF, 0x00), RGB888(0x00, 0xFF, 0x55), RGB888(0x00, 0xFF, 0xAA), RGB888(0x00, 0xFF, 0xFF),
	RGB888(0x55, 0x00, 0x00), RGB888(0x55, 0x00, 0x55), RGB888(0x55, 0x00, 0xAA), RGB888(0x55, 0x00, 0xFF),
	RGB888(0x55, 0x55, 0x00), RGB888(0x55, 0x55, 0x55), RGB888(0x55, 0x55, 0xAA), RGB888(0x55, 0x55, 0xFF),
	RGB888(0x55, 0xAA, 0x00), RGB888(0x55, 0xAA, 0x55), RGB888(0x55, 0xAA, 0xAA), RGB888(0x55, 0xAA, 0xFF),
	RGB888(0x55, 0xFF, 0x00), RGB888(0x55, 0xFF, 0x55), RGB888(0x55, 0xFF, 0xAA), RGB888(0x55, 0xFF, 0xFF),
	RGB888(0xAA, 0x00, 0x00), RGB888(0xAA, 0x00, 0x55), RGB888(0xAA, 0x00, 0xAA), RGB888(0xAA, 0x00, 0xFF),
	RGB888(0xAA, 0x55, 0x00), RGB888(0xAA, 0x55, 0x55), RGB888(0xAA, 0x55, 0xAA), RGB888(0xAA, 0x55, 0xFF),
	RGB888(0xAA, 0xAA, 0x00), RGB888(0xAA, 0xAA, 0x55), RGB888(0xAA, 0xAA, 0xAA), RGB888(0xAA, 0xAA, 0xFF),
	RGB888(0xAA, 0xFF, 0x00), RGB888(0xAA, 0xFF, 0x55), RGB888(0xAA, 0xFF, 0xAA), RGB888(0xAA, 0xFF, 0xFF),
	RGB888(0xFF, 0x00, 0x00), RGB888(0xFF, 0x00, 0x55), RGB888(0xFF, 0x00, 0xAA), RGB888(0xFF, 0x00, 0xFF),
	RGB888(0xFF, 0x55, 0x00), RGB888(0xFF, 0x55, 0x55), RGB888(0xFF, 0x55, 0xAA), RGB888(0xFF, 0x55, 0xFF),
	RGB888(0xFF, 0xAA, 0x00), RGB888(0xFF, 0xAA, 0x55), RGB888(0xFF, 0xAA, 0xAA), RGB888(0xFF, 0xAA, 0xFF),
	RGB888(0xFF, 0xFF, 0x00), RGB888(0xFF, 0xFF, 0x55), RGB888(0xFF, 0xFF, 0xAA), RGB888(0xFF, 0xFF, 0xFF),	
};