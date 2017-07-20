#pragma once
const unsigned char myBitmapBitmap[] PROGMEM = {
	// 'tapOpen10x16'
	0x00, 0x00, 0x00, 0x81, 0xfc, 0x08, 0x07, 0x0f, 0x22, 0x04, 0xfd, 0x01, 0x40, 0x70, 0x08, 0x05,
	0x02, 0xa1, 0x24, 0x02
};

const GFXbitmapGlyph myBitmapGlyphs[] PROGMEM = {
	{ 0, 10, 16, 0, '0' } // 'tapOpen10x16'
};

const GFXbitmapFont myBitmapFont PROGMEM = {
	(uint8_t *)myBitmapBitmap,
	(GFXbitmapGlyph *)myBitmapGlyphs,
	1
};