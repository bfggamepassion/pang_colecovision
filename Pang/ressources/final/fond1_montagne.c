/********************************************/
/*                                          */
/*   GRAPHICS TABLES  -  WIN ICVGM v3.00    */
/*                                          */
/*        WARNING : RLE COMPRESSION         */
/*                                          */
/********************************************/

#include <coleco.h>

byte NAMERLE[] = {
  0x9D, 0x00, 0x02, 0x01, 0x00, 0x02, 0x9D, 0x03, 0x81, 0x02, 0x9D, 0x03, 0x81, 0x02, 0x9D,
  0x03, 0x81, 0x02, 0x9D, 0x03, 0x81, 0x02, 0x9D, 0x03, 0x81, 0x02, 0x9D, 0x03, 0x81, 0x02, 0x9D,
  0x03, 0x81, 0x02, 0x93, 0x03, 0x06, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x82, 0x03, 0x81,
  0x02, 0x8A, 0x03, 0x14, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10, 0x03, 0x04, 0x11, 0x12, 0x13, 0x14,
  0x13, 0x13, 0x15, 0x16, 0x17, 0x18, 0x03, 0x02, 0x02, 0x8A, 0x03, 0x07, 0x19, 0x1A, 0x1B, 0x03,
  0x03, 0x1C, 0x1D, 0x1E, 0x82, 0x13, 0x09, 0x1F, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x02,
  0x02, 0x8C, 0x03, 0x03, 0x27, 0x28, 0x29, 0x2A, 0x84, 0x13, 0x09, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F,
  0x30, 0x31, 0x32, 0x02, 0x02, 0x87, 0x03, 0x17, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x13,
  0x13, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x02, 0x02,
  0x84, 0x03, 0x61, 0x47, 0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 0x50, 0x51, 0x52, 0x53,
  0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F, 0x02, 0x02, 0x03, 0x03,
  0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x13, 0x68, 0x69, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E,
  0x6F, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7A, 0x02, 0x02, 0x7B, 0x7C,
  0x7D, 0x7E, 0x7F, 0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C,
  0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x02, 0x02, 0x99, 0x9A,
  0x9B, 0x9C, 0x9D, 0x9E, 0x9F, 0x82, 0x8F, 0x06, 0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0x86,
  0x8F, 0x01, 0xA7, 0xA8, 0x83, 0x8F, 0x81, 0x02, 0x8E, 0x8F, 0x00, 0xA9, 0x8D, 0x8F, 0x81, 0x02,
  0x9D, 0x8F, 0x81, 0x02, 0x9D, 0x8F, 0x81, 0x02, 0x5E, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0,
  0xB1, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0,
  0xB1, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0x02, 0x02, 0xB2, 0xB3, 0xB4, 0xB5, 0xB2, 0xB6, 0xB7,
  0xB5, 0xB2, 0xB3, 0xB4, 0xB5, 0xB2, 0xB6, 0xB7, 0xB5, 0xB2, 0xB3, 0xB4, 0xB5, 0xB2, 0xB6, 0xB7,
  0xB5, 0xB2, 0xB3, 0xB4, 0xB5, 0xB2, 0xB6, 0x02, 0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF,
  0xC0, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF, 0xC0, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF,
  0xC0, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xB8, 0x9F, 0xFF, 0xFF};

byte PATTERNRLE[] = {
  0x16, 0x60, 0x20, 0x20, 0x00, 0x06, 0x01, 0x02, 0x02, 0x60, 0x20, 0x20, 0x00, 0x06, 0x00,
  0x02, 0x02, 0x30, 0x10, 0x10, 0x00, 0x03, 0x00, 0x01, 0x8F, 0x00, 0x00, 0x01, 0x82, 0x00, 0x81,
  0x07, 0x11, 0x1F, 0x3E, 0x00, 0x00, 0x07, 0x1F, 0x0E, 0x1C, 0x41, 0x03, 0x07, 0x00, 0x1F, 0x00,
  0x1B, 0x3B, 0x3B, 0x3F, 0x82, 0x00, 0x05, 0x3F, 0x0F, 0x67, 0x07, 0x43, 0x01, 0x82, 0x00, 0x04,
  0x3F, 0x70, 0x0C, 0x07, 0x19, 0x85, 0x00, 0x81, 0x1F, 0x86, 0x00, 0x00, 0x03, 0x84, 0x00, 0x02,
  0x0F, 0x04, 0x3F, 0x85, 0x00, 0x00, 0x3F, 0x85, 0x00, 0x02, 0x7F, 0x10, 0x01, 0x84, 0x00, 0x02,
  0x0C, 0x0F, 0x07, 0x84, 0x00, 0x01, 0x07, 0x7F, 0x83, 0x00, 0x07, 0x01, 0x03, 0x0F, 0x3F, 0x00,
  0x03, 0x0F, 0x3F, 0x8C, 0x00, 0x1F, 0x07, 0x06, 0x0C, 0x0C, 0x08, 0x08, 0x00, 0x00, 0x06, 0x7E,
  0x3F, 0x0F, 0x07, 0x73, 0x3F, 0x07, 0x3C, 0x0E, 0x7F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x7F,
  0x1F, 0x1F, 0x0F, 0x03, 0x01, 0x7F, 0x84, 0x00, 0x03, 0x7F, 0x1F, 0x07, 0x3F, 0x86, 0x00, 0x00,
  0x03, 0x86, 0x00, 0x00, 0x1F, 0x8C, 0x00, 0x0B, 0x01, 0x03, 0x00, 0x00, 0x01, 0x03, 0x0F, 0x3F,
  0x00, 0x00, 0x07, 0x1F, 0x88, 0x00, 0x83, 0x01, 0x08, 0x00, 0x40, 0x3F, 0x7F, 0x3F, 0x7F, 0x5F,
  0x0F, 0x1F, 0x83, 0x00, 0x04, 0x01, 0x00, 0x02, 0x02, 0x01, 0x83, 0x00, 0x0E, 0x3F, 0x60, 0x30,
  0x00, 0x3F, 0x1F, 0x07, 0x03, 0x01, 0x02, 0x01, 0x3F, 0x17, 0x03, 0x01, 0x83, 0x00, 0x0F, 0x1F,
  0x0F, 0x03, 0x03, 0x3F, 0x0F, 0x1F, 0x0F, 0x00, 0x3F, 0x0F, 0x07, 0x01, 0x7F, 0x3F, 0x0F, 0x85,
  0x00, 0x01, 0x01, 0x03, 0x84, 0x00, 0x07, 0x1F, 0x06, 0x2C, 0x00, 0x00, 0x03, 0x1F, 0x1F, 0x82,
  0x00, 0x01, 0x07, 0x3F, 0x85, 0x00, 0x82, 0x01, 0x81, 0x03, 0x81, 0x07, 0x38, 0x3F, 0x0B, 0x07,
  0x38, 0x45, 0x4C, 0x35, 0x7F, 0x40, 0x01, 0x09, 0x08, 0x04, 0x02, 0x09, 0x2C, 0x68, 0x18, 0x73,
  0x39, 0x61, 0x20, 0x10, 0x77, 0x03, 0x01, 0x00, 0x00, 0x7F, 0x3F, 0x20, 0x18, 0x04, 0x00, 0x00,
  0x40, 0x20, 0x20, 0x3F, 0x3F, 0x1F, 0x07, 0x03, 0x01, 0x01, 0x08, 0x06, 0x13, 0x0F, 0x37, 0x03,
  0x15, 0x0F, 0x7C, 0x1E, 0x0F, 0x1C, 0x85, 0x00, 0x01, 0x07, 0x1E, 0x83, 0x00, 0x08, 0x1B, 0x07,
  0x5F, 0x1F, 0x00, 0x0F, 0x60, 0x66, 0x48, 0x82, 0x00, 0x14, 0x03, 0x00, 0x60, 0x01, 0x03, 0x0F,
  0x3F, 0x00, 0x01, 0x00, 0x05, 0x50, 0x00, 0x00, 0x0B, 0x3F, 0x03, 0x1F, 0x01, 0x0F, 0x7F, 0x82,
  0x00, 0x01, 0x0F, 0x40, 0x8C, 0x00, 0x00, 0x03, 0x85, 0x00, 0x01, 0x0F, 0x0E, 0x84, 0x00, 0x02,
  0x04, 0x70, 0x60, 0x84, 0x00, 0x4A, 0x01, 0x03, 0x03, 0x00, 0x01, 0x03, 0x1F, 0x1F, 0x02, 0x03,
  0x0F, 0x7F, 0x00, 0x06, 0x08, 0x37, 0x3F, 0x40, 0x20, 0x30, 0x1E, 0x61, 0x00, 0x00, 0x04, 0x06,
  0x27, 0x00, 0x00, 0x60, 0x7F, 0x40, 0x00, 0x00, 0x01, 0x01, 0x00, 0x02, 0x23, 0x60, 0x18, 0x04,
  0x02, 0x00, 0x7F, 0x1F, 0x02, 0x7F, 0x1F, 0x07, 0x00, 0x06, 0x03, 0x01, 0x1F, 0x0F, 0x07, 0x01,
  0x3F, 0x06, 0x03, 0x60, 0x00, 0x3F, 0x60, 0x05, 0x03, 0x78, 0x3E, 0x70, 0x63, 0x38, 0x1C, 0x7F,
  0x70, 0x84, 0x00, 0x02, 0x01, 0x0F, 0x3F, 0x82, 0x00, 0x01, 0x03, 0x3F, 0x83, 0x00, 0x01, 0x0F,
  0x7F, 0x82, 0x00, 0x16, 0x05, 0x5A, 0x16, 0x5B, 0x08, 0x00, 0x00, 0x01, 0x17, 0x00, 0x40, 0x6E,
  0x00, 0x00, 0x01, 0x57, 0x00, 0x00, 0x17, 0x7F, 0x05, 0x15, 0x7F, 0x82, 0x00, 0x02, 0x05, 0x2F,
  0x7F, 0x84, 0x00, 0x00, 0x7F, 0x8C, 0x00, 0x01, 0x07, 0x1C, 0x82, 0x00, 0x08, 0x01, 0x06, 0x38,
  0x40, 0x00, 0x00, 0x02, 0x75, 0x1F, 0x82, 0x00, 0x2E, 0x01, 0x00, 0x7D, 0x00, 0x04, 0x0F, 0x1F,
  0x3D, 0x14, 0x03, 0x37, 0x7E, 0x7B, 0x38, 0x03, 0x1F, 0x00, 0x70, 0x07, 0x14, 0x30, 0x70, 0x1F,
  0x3C, 0x10, 0x7F, 0x00, 0x03, 0x1F, 0x0F, 0x7F, 0x00, 0x03, 0x1F, 0x00, 0x1F, 0x00, 0x0F, 0x3F,
  0x0F, 0x1E, 0x7F, 0x00, 0x7F, 0x03, 0x7E, 0x07, 0x84, 0x00, 0x0E, 0x3F, 0x07, 0x04, 0x77, 0x00,
  0x17, 0x57, 0x7F, 0x7F, 0x3F, 0x20, 0x00, 0x00, 0x0F, 0x03, 0x85, 0x00, 0x02, 0x1F, 0x38, 0x3E,
  0x84, 0x00, 0x1F, 0x0A, 0x07, 0x07, 0x7E, 0x1F, 0x07, 0x01, 0x00, 0x0F, 0x03, 0x1F, 0x07, 0x7E,
  0x3F, 0x0F, 0x7C, 0x1F, 0x03, 0x3C, 0x3F, 0x0F, 0x07, 0x03, 0x07, 0x03, 0x00, 0x2C, 0x1F, 0x07,
  0x3F, 0x0F, 0x3C, 0x85, 0x00, 0x01, 0x01, 0x07, 0x82, 0x00, 0x17, 0x03, 0x0F, 0x3F, 0x01, 0x20,
  0x01, 0x0F, 0x1F, 0x00, 0x00, 0x3F, 0x03, 0x1F, 0x38, 0x14, 0x7F, 0x0E, 0x07, 0x3F, 0x00, 0x00,
  0x50, 0x16, 0x1F, 0x84, 0x00, 0x01, 0x5F, 0x7F, 0x8C, 0x00, 0x00, 0x02, 0x84, 0x00, 0x01, 0x02,
  0x03, 0x82, 0x00, 0x2C, 0x01, 0x1F, 0x1F, 0x00, 0x05, 0x07, 0x05, 0x1E, 0x01, 0x0F, 0x03, 0x7F,
  0x01, 0x06, 0x40, 0x1F, 0x00, 0x1F, 0x00, 0x07, 0x3F, 0x00, 0x00, 0x02, 0x5D, 0x07, 0x40, 0x04,
  0x08, 0x00, 0x0F, 0x41, 0x3E, 0x03, 0x20, 0x00, 0x00, 0x07, 0x01, 0x07, 0x7F, 0x00, 0x00, 0x0F,
  0x1F, 0x82, 0x00, 0x2D, 0x03, 0x1F, 0x00, 0x00, 0x03, 0x3F, 0x01, 0x3F, 0x07, 0x03, 0x0F, 0x3F,
  0x00, 0x0D, 0x00, 0x00, 0x02, 0x00, 0x1F, 0x7F, 0x40, 0x00, 0x3C, 0x0F, 0x01, 0x01, 0x1E, 0x07,
  0x00, 0x00, 0x3F, 0x7C, 0x07, 0x5F, 0x38, 0x3F, 0x3F, 0x10, 0x00, 0x00, 0x7F, 0x03, 0x3F, 0x70,
  0x17, 0x0F, 0x85, 0x00, 0x00, 0x2F, 0x84, 0x00, 0x00, 0x02, 0x87, 0x00, 0x00, 0x0F, 0x86, 0x00,
  0x42, 0x03, 0x00, 0x00, 0x1E, 0x07, 0x01, 0x04, 0x02, 0x07, 0x00, 0x0E, 0x01, 0x7F, 0x1F, 0x70,
  0x3C, 0x03, 0x00, 0x3F, 0x0E, 0x7F, 0x1F, 0x01, 0x00, 0x04, 0x7F, 0x03, 0x00, 0x7F, 0x0B, 0x07,
  0x1F, 0x4A, 0x04, 0x00, 0x00, 0x07, 0x5F, 0x00, 0x00, 0x02, 0x10, 0x7D, 0x7F, 0x00, 0x01, 0x37,
  0x40, 0x1B, 0x7E, 0x02, 0x01, 0x68, 0x7F, 0x01, 0x5E, 0x51, 0x3C, 0x01, 0x00, 0x00, 0x18, 0x60,
  0x7F, 0x00, 0x38, 0x04, 0x85, 0x00, 0x01, 0x7C, 0x1F, 0x84, 0x00, 0x09, 0x01, 0x00, 0x00, 0x07,
  0x24, 0x00, 0x00, 0x05, 0x00, 0x04, 0x83, 0x00, 0x03, 0x03, 0x00, 0x1D, 0x5F, 0x82, 0x00, 0x2E,
  0x3F, 0x00, 0x68, 0x03, 0x0F, 0x00, 0x00, 0x7F, 0x0B, 0x03, 0x3F, 0x3F, 0x12, 0x00, 0x0C, 0x1F,
  0x00, 0x20, 0x0F, 0x0B, 0x00, 0x00, 0x3F, 0x07, 0x03, 0x18, 0x1F, 0x00, 0x00, 0x01, 0x03, 0x20,
  0x00, 0x03, 0x02, 0x1F, 0x70, 0x00, 0x03, 0x3F, 0x2F, 0x1F, 0x7F, 0x5F, 0x00, 0x00, 0x1F, 0x82,
  0x00, 0x15, 0x5D, 0x08, 0x3B, 0x01, 0x0F, 0x1F, 0x01, 0x5F, 0x7F, 0x04, 0x07, 0x5C, 0x00, 0x1F,
  0x07, 0x0F, 0x40, 0x2F, 0x0B, 0x7F, 0x5F, 0x07, 0x85, 0x00, 0x00, 0x0F, 0x8E, 0x00, 0x00, 0x04,
  0x82, 0x00, 0x00, 0x02, 0x82, 0x00, 0x12, 0x01, 0x7F, 0x07, 0x00, 0x03, 0x01, 0x00, 0x00, 0x1F,
  0x1F, 0x01, 0x3F, 0x07, 0x1F, 0x00, 0x00, 0x47, 0x1F, 0x03, 0x85, 0x00, 0x24, 0x07, 0x70, 0x01,
  0x0F, 0x3F, 0x2F, 0x01, 0x0A, 0x3F, 0x1E, 0x0B, 0x07, 0x1F, 0x03, 0x38, 0x7B, 0x00, 0x30, 0x6C,
  0x38, 0x30, 0x40, 0x7F, 0x03, 0x7D, 0x38, 0x07, 0x01, 0x07, 0x08, 0x00, 0x50, 0x05, 0x30, 0x2D,
  0x05, 0x7E, 0x82, 0x00, 0x23, 0x5F, 0x02, 0x20, 0x02, 0x2F, 0x7F, 0x01, 0x00, 0x02, 0x00, 0x00,
  0x07, 0x7F, 0x10, 0x3A, 0x16, 0x40, 0x00, 0x3F, 0x0C, 0x0E, 0x3F, 0x00, 0x54, 0x07, 0x7F, 0x03,
  0x2B, 0x7F, 0x00, 0x00, 0x78, 0x00, 0x2B, 0x1B, 0x03, 0x83, 0x00, 0x03, 0x02, 0x63, 0x3F, 0x1F,
  0x82, 0x00, 0x01, 0x03, 0x1F, 0x86, 0x00, 0x02, 0x01, 0x3F, 0x07, 0x84, 0x00, 0x03, 0x20, 0x03,
  0x00, 0x1D, 0x83, 0x00, 0x04, 0x1C, 0x00, 0x00, 0x14, 0x03, 0x82, 0x00, 0x0E, 0x1A, 0x6F, 0x00,
  0x1F, 0x01, 0x18, 0x07, 0x00, 0x7F, 0x7F, 0x40, 0x00, 0x7E, 0x67, 0x0A, 0x83, 0x00, 0x04, 0x1F,
  0x7F, 0x03, 0x7F, 0x6C, 0x86, 0x00, 0x00, 0x01, 0x86, 0x00, 0x00, 0x7F, 0x86, 0x00, 0x00, 0x1F,
  0x89, 0x00, 0x02, 0x20, 0x7A, 0x14, 0x84, 0x00, 0x01, 0x60, 0x4B, 0x85, 0x00, 0x01, 0x20, 0x7D,
  0x86, 0x00, 0x01, 0x3F, 0x10, 0x84, 0x00, 0x01, 0x0C, 0x79, 0x85, 0x00, 0x02, 0x78, 0x34, 0x0E,
  0x86, 0x00, 0x00, 0x1C, 0x84, 0x00, 0x01, 0x02, 0x58, 0x82, 0x00, 0x77, 0x7D, 0x75, 0x17, 0x1F,
  0x5F, 0x5F, 0x00, 0x28, 0x40, 0x40, 0x44, 0x45, 0x5D, 0x2D, 0x16, 0x3E, 0x28, 0x2A, 0x3A, 0x72,
  0x58, 0x2F, 0x10, 0x10, 0x0A, 0x35, 0x53, 0x54, 0x01, 0x00, 0x00, 0x14, 0x40, 0x40, 0x44, 0x45,
  0x5D, 0x2D, 0x16, 0x3E, 0x08, 0x2A, 0x3A, 0x72, 0x58, 0x2F, 0x10, 0x10, 0x30, 0x10, 0x10, 0x00,
  0x03, 0x00, 0x01, 0x7E, 0x29, 0x4C, 0x44, 0x1B, 0x18, 0x61, 0x74, 0x25, 0x40, 0x40, 0x08, 0x54,
  0x59, 0x10, 0x04, 0x0E, 0x18, 0x3C, 0x0C, 0x4F, 0x7F, 0x7F, 0x5F, 0x52, 0x7F, 0x38, 0x6C, 0x6C,
  0x40, 0x0E, 0x0C, 0x1A, 0x29, 0x4C, 0x44, 0x6B, 0x73, 0x73, 0x30, 0x21, 0x40, 0x40, 0x0E, 0x54,
  0x59, 0x10, 0x00, 0x0A, 0x18, 0x3C, 0x0D, 0x4E, 0x7F, 0x7F, 0x5F, 0x52, 0x7F, 0x38, 0x7C, 0x17,
  0x1F, 0x3E, 0x41, 0x01, 0xFE, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0xD2, 0x00, 0x82, 0xC0, 0x81, 0xFF,
  0x82, 0xC0, 0x82, 0x03, 0x81, 0xFF, 0x82, 0x03, 0x15, 0x07, 0x0F, 0x1F, 0x7E, 0xF8, 0xFC, 0x7F,
  0x1F, 0x60, 0x20, 0x20, 0x00, 0x06, 0x01, 0x02, 0x02, 0x60, 0x20, 0x20, 0x00, 0x06, 0x01, 0x81,
  0x02, 0xFF};

byte COLORRLE[] = {
  0x0C, 0x5F, 0x05, 0x05, 0x00, 0x5F, 0xF5, 0x05, 0x05, 0x5F, 0x05, 0x05, 0x00, 0x5F, 0x82,
  0x05, 0x07, 0x5F, 0x05, 0x05, 0x00, 0x5F, 0x05, 0x05, 0x00, 0x8E, 0x05, 0x00, 0xE5, 0x82, 0x05,
  0x09, 0xE5, 0xF5, 0xF5, 0xFE, 0x0F, 0x05, 0xE5, 0xE5, 0xFE, 0xFE, 0x82, 0xEF, 0x02, 0x05, 0x5E,
  0x0E, 0x83, 0xFE, 0x04, 0x0F, 0x05, 0x05, 0x5E, 0x5E, 0x83, 0xEF, 0x82, 0x05, 0x01, 0x5F, 0xF7,
  0x82, 0xFE, 0x85, 0x05, 0x01, 0x5E, 0xEF, 0x86, 0x05, 0x00, 0xE5, 0x84, 0x05, 0x02, 0xE5, 0xFE,
  0xFE, 0x84, 0x05, 0x02, 0x0E, 0xFE, 0x0F, 0x84, 0x05, 0x82, 0xEF, 0x84, 0x05, 0x02, 0xFE, 0xEF,
  0x5E, 0x84, 0x05, 0x81, 0x5E, 0x83, 0x05, 0x00, 0xE5, 0x82, 0xF5, 0x00, 0x0F, 0x82, 0xF5, 0x8C,
  0x0F, 0x85, 0xEF, 0x81, 0x0F, 0x00, 0xFE, 0x86, 0xEF, 0x86, 0xFE, 0x04, 0x0E, 0x05, 0x5E, 0x5E,
  0x5F, 0x82, 0xEF, 0x00, 0xFE, 0x84, 0x05, 0x82, 0x5E, 0x00, 0xE5, 0x86, 0x05, 0x00, 0xFE, 0x86,
  0x05, 0x00, 0xEF, 0x8C, 0x05, 0x04, 0xE5, 0xF5, 0x05, 0x05, 0xE5, 0x82, 0xF5, 0x81, 0x0F, 0x81,
  0xF5, 0x88, 0x0F, 0x83, 0xEF, 0x01, 0x0F, 0xEF, 0x86, 0xFE, 0x83, 0x0F, 0x01, 0xEF, 0x0F, 0x82,
  0xEF, 0x83, 0x0F, 0x03, 0xFE, 0xEF, 0xEF, 0x0E, 0x86, 0xEF, 0x83, 0xFE, 0x83, 0x0E, 0x83, 0xEF,
  0x83, 0xFE, 0x00, 0x05, 0x83, 0x5E, 0x82, 0xEF, 0x85, 0x05, 0x01, 0xE5, 0xFE, 0x84, 0x05, 0x07,
  0xE5, 0xFE, 0xEF, 0x05, 0x05, 0xE5, 0xB5, 0xFE, 0x82, 0x0F, 0x01, 0xF5, 0xFE, 0x85, 0x0F, 0x87,
  0xEF, 0x81, 0xFE, 0x05, 0xEF, 0xFE, 0xEF, 0xFE, 0xE5, 0x5E, 0x86, 0xEF, 0x03, 0xFE, 0xEF, 0xFE,
  0xFE, 0x82, 0xEF, 0x81, 0xFE, 0x04, 0xEF, 0x0F, 0x0F, 0xFE, 0xFE, 0x82, 0xEF, 0x81, 0x0E, 0x82,
  0x5E, 0x82, 0xEF, 0x87, 0xFE, 0x83, 0xEF, 0x82, 0xFE, 0x00, 0xEF, 0x85, 0x05, 0x81, 0xE5, 0x83,
  0x05, 0x00, 0xE5, 0x82, 0x5E, 0x04, 0x05, 0xF5, 0x5F, 0xF5, 0xB5, 0x82, 0x05, 0x03, 0xE5, 0x0F,
  0xEF, 0xFE, 0x82, 0xE5, 0x0A, 0x0E, 0xFE, 0x0F, 0xEF, 0xFE, 0x0E, 0x0E, 0xFE, 0xFE, 0xEF, 0xEF,
  0x82, 0xFE, 0x82, 0x0F, 0x01, 0xFE, 0xEF, 0x8C, 0x0F, 0x00, 0xEF, 0x85, 0x0F, 0x81, 0xFE, 0x84,
  0x0F, 0x81, 0xEF, 0x00, 0x5F, 0x84, 0x0F, 0x82, 0xEF, 0x00, 0x0F, 0x83, 0xEF, 0x82, 0x5E, 0x01,
  0xEF, 0x0E, 0x83, 0x5E, 0x81, 0xE5, 0x81, 0x5E, 0x02, 0xE5, 0x05, 0x05, 0x82, 0xC5, 0x81, 0x0E,
  0x81, 0x5E, 0x07, 0xE5, 0x05, 0x05, 0xC5, 0xFE, 0x0E, 0x5E, 0x5E, 0x83, 0xE5, 0x00, 0x0F, 0x82,
  0xFE, 0x82, 0xE5, 0x03, 0x05, 0x5B, 0x5F, 0xEF, 0x83, 0xFE, 0x0B, 0xE5, 0xFE, 0xFE, 0x5E, 0x0E,
  0xEF, 0xFE, 0x5E, 0x5B, 0xFE, 0xFE, 0xEF, 0x82, 0xFE, 0x01, 0xE5, 0x5E, 0x84, 0x05, 0x82, 0xE5,
  0x82, 0x05, 0x81, 0xE5, 0x82, 0x0E, 0x02, 0x05, 0xE5, 0xE5, 0x82, 0x0E, 0x01, 0xFE, 0xEF, 0x82,
  0x5E, 0x81, 0x0E, 0x81, 0xFE, 0x0A, 0x0F, 0xE5, 0x5E, 0x0E, 0x0E, 0xFE, 0xFE, 0x0F, 0x0F, 0xE5,
  0xE5, 0x82, 0xFE, 0x82, 0x0F, 0x82, 0xFE, 0x84, 0x0F, 0x00, 0xFE, 0x8C, 0x0F, 0x81, 0xEF, 0x82,
  0x0F, 0x83, 0xEF, 0x81, 0x0F, 0x81, 0xEF, 0x00, 0xFE, 0x82, 0x0F, 0x03, 0xEF, 0x0F, 0xFE, 0x0F,
  0x83, 0xEF, 0x00, 0xFE, 0x83, 0xEF, 0x08, 0xFE, 0x5B, 0x5E, 0x05, 0xFE, 0x5B, 0x5E, 0x5B, 0x5B,
  0x82, 0xE5, 0x0B, 0xF5, 0x0F, 0xEF, 0xEF, 0x5E, 0x5E, 0x05, 0xC5, 0xEF, 0x0E, 0x5E, 0x05, 0x82,
  0xC5, 0x08, 0x5C, 0x5E, 0x05, 0x5E, 0xC5, 0x5C, 0x5C, 0x0C, 0x0C, 0x82, 0x05, 0x82, 0x5C, 0x01,
  0xC5, 0x0C, 0x84, 0xC5, 0x04, 0x5C, 0x0C, 0x0C, 0x5C, 0x5C, 0x85, 0x0C, 0x02, 0x5C, 0xC5, 0xC5,
  0x84, 0x0C, 0x82, 0xC5, 0x83, 0x5C, 0x04, 0x0C, 0xE5, 0xE5, 0x5C, 0x5C, 0x82, 0xC5, 0x0A, 0x5C,
  0x5F, 0x5B, 0xFE, 0xB5, 0xF5, 0xF5, 0xE5, 0x5C, 0xE5, 0x05, 0x82, 0xC5, 0x81, 0x5B, 0x00, 0xB5,
  0x85, 0x05, 0x01, 0xE5, 0xF5, 0x82, 0x05, 0x0A, 0xE5, 0xF5, 0xF5, 0xEF, 0xFE, 0xE5, 0xB5, 0xFE,
  0x0F, 0x0F, 0xEF, 0x82, 0xFE, 0x09, 0xEF, 0xFE, 0xEF, 0xFE, 0xFE, 0x0F, 0x0F, 0xFE, 0xEF, 0xFE,
  0x84, 0x0F, 0x81, 0xFE, 0x8C, 0x0F, 0x00, 0xEF, 0x84, 0x0F, 0x01, 0xEF, 0xFE, 0x82, 0x0F, 0x81,
  0xEF, 0x01, 0xFE, 0x0F, 0x83, 0xEF, 0x81, 0xFE, 0x81, 0xEF, 0x81, 0x5E, 0x29, 0xEF, 0xFE, 0x0F,
  0xEF, 0x0E, 0x5E, 0x5E, 0x05, 0x0F, 0xEF, 0xEF, 0xFE, 0x5E, 0xE5, 0xE5, 0x05, 0xEF, 0xFE, 0xFE,
  0x5B, 0xE5, 0x05, 0x05, 0xB5, 0x5E, 0x5B, 0x5E, 0x05, 0x05, 0xB5, 0xFE, 0x0F, 0x05, 0x05, 0xE5,
  0xB5, 0x0F, 0x0F, 0xEF, 0xEF, 0xE5, 0xE5, 0x83, 0xEF, 0x21, 0x0E, 0x5E, 0x0E, 0x0E, 0x5E, 0x05,
  0x5E, 0x5E, 0xE5, 0x05, 0xC5, 0xCE, 0x5E, 0xFE, 0xE5, 0xE5, 0x05, 0x05, 0xC5, 0x5C, 0x5C, 0x5E,
  0xE5, 0x5E, 0x5E, 0xE5, 0x0C, 0x0C, 0xC5, 0xC5, 0x5C, 0xC5, 0xE5, 0xE5, 0x83, 0x0C, 0x81, 0x05,
  0x01, 0x5E, 0x0E, 0x83, 0x0C, 0x03, 0x5C, 0x05, 0x05, 0x0E, 0x84, 0x0C, 0x02, 0xC5, 0x05, 0x05,
  0x84, 0x0C, 0x02, 0x5C, 0x05, 0x05, 0x85, 0x5C, 0x0A, 0x05, 0xE5, 0x5C, 0xC5, 0xC5, 0x5C, 0x5C,
  0xC5, 0x05, 0x5E, 0xB5, 0x82, 0x5C, 0x05, 0x0C, 0x5C, 0xC5, 0xC5, 0x05, 0xE5, 0x82, 0xEF, 0x81,
  0xFE, 0x0C, 0x0E, 0x05, 0xE5, 0xE5, 0x0E, 0x0E, 0xFE, 0xFE, 0xEF, 0xE5, 0x0E, 0xFE, 0xFE, 0x82,
  0xEF, 0x81, 0xFE, 0x0E, 0xEF, 0xFE, 0xEF, 0xEF, 0xFE, 0xFE, 0xEF, 0x0F, 0x0F, 0xEF, 0xEF, 0xFE,
  0x0F, 0xFE, 0x5E, 0x85, 0x0F, 0x01, 0xFE, 0xEF, 0x84, 0x0F, 0x0A, 0xEF, 0x0E, 0x05, 0xEF, 0xEF,
  0x0F, 0x0F, 0xEF, 0x0E, 0x5E, 0x0C, 0x82, 0x0F, 0x2C, 0xEF, 0x0E, 0x5E, 0x5E, 0x0C, 0x0F, 0x0F,
  0xEF, 0x0E, 0xE5, 0xC5, 0x5C, 0x0C, 0x0F, 0xEF, 0x5E, 0xC5, 0xC5, 0x5C, 0xC5, 0x0C, 0x5E, 0x5E,
  0x05, 0x5C, 0x5C, 0xC5, 0x0C, 0x0C, 0x5E, 0xC5, 0xC5, 0xE5, 0xC5, 0x0C, 0x0C, 0x5C, 0xC5, 0x5C,
  0x0C, 0x5C, 0xEC, 0x5C, 0x5C, 0x0C, 0x82, 0xEC, 0x81, 0xE5, 0x0C, 0x5E, 0x0C, 0x0C, 0xFE, 0x0F,
  0x0E, 0x0E, 0x5E, 0xE5, 0x5C, 0x5C, 0xEF, 0xEF, 0x82, 0x5E, 0x07, 0xC5, 0xE5, 0xE5, 0x0E, 0x5E,
  0xC5, 0xC5, 0x5C, 0x82, 0xC5, 0x01, 0x5E, 0xC5, 0x85, 0x0C, 0x00, 0xC5, 0x8E, 0x0C, 0x00, 0x5C,
  0x82, 0x0C, 0x00, 0x5C, 0x82, 0x0C, 0x14, 0xE5, 0x5C, 0x5C, 0x0C, 0x5C, 0xEC, 0x0C, 0x0C, 0xFE,
  0xB5, 0xE5, 0xE5, 0x5E, 0x5E, 0x0C, 0x0C, 0xEF, 0x5F, 0x5E, 0x05, 0x05, 0x82, 0x0C, 0x02, 0x0E,
  0x5E, 0x5C, 0x83, 0xE5, 0x03, 0xC5, 0x5E, 0xE5, 0xE5, 0x82, 0x5E, 0x04, 0xC5, 0x5C, 0xE5, 0x0E,
  0xE5, 0x83, 0x5C, 0x09, 0xC5, 0x5E, 0x5E, 0xC5, 0x5C, 0xEC, 0x5C, 0x5C, 0x0C, 0xE5, 0x82, 0x5E,
  0x81, 0xC5, 0x81, 0x0C, 0x01, 0x0E, 0xEF, 0x84, 0x5E, 0x13, 0xC5, 0x0E, 0xFE, 0x0E, 0x0E, 0x5E,
  0x5E, 0xC5, 0x5C, 0xFE, 0xFE, 0x0E, 0x5E, 0xC5, 0xE5, 0x5E, 0x0C, 0xFE, 0x5E, 0x5E, 0x82, 0xC5,
  0x81, 0x0C, 0x01, 0x5E, 0x05, 0x82, 0x5C, 0x82, 0x0C, 0x04, 0x05, 0xE5, 0x5E, 0xCE, 0xC5, 0x82,
  0x0C, 0x81, 0xC5, 0x86, 0x0C, 0x82, 0x5C, 0x84, 0x0C, 0x03, 0xC5, 0xE5, 0x0E, 0xE5, 0x83, 0x0C,
  0x04, 0xC5, 0x0E, 0x0E, 0xC5, 0x5C, 0x82, 0x0C, 0x0E, 0xE5, 0x5E, 0x0E, 0xE5, 0x5C, 0xE5, 0x5C,
  0x0C, 0xC5, 0xC5, 0xE5, 0x0E, 0xE5, 0x5E, 0xE5, 0x83, 0x0C, 0x00, 0xCE, 0x82, 0xC5, 0x00, 0x5C,
  0x86, 0x0C, 0x00, 0x5C, 0x86, 0x0C, 0x00, 0xC5, 0x86, 0x0C, 0x00, 0xC5, 0x89, 0x0C, 0x04, 0x2C,
  0xC2, 0xC2, 0x02, 0x02, 0x82, 0x0C, 0x01, 0x2C, 0xC2, 0x82, 0x02, 0x82, 0x0C, 0x81, 0x2C, 0x82,
  0x02, 0x83, 0x0C, 0x03, 0x2C, 0xC2, 0x02, 0x02, 0x82, 0x0C, 0x01, 0x2C, 0xC2, 0x82, 0x02, 0x82,
  0x0C, 0x82, 0xC2, 0x81, 0x02, 0x84, 0x0C, 0x02, 0xC2, 0x02, 0x02, 0x82, 0x0C, 0x01, 0x2C, 0xC2,
  0x82, 0x02, 0x85, 0x2A, 0x00, 0x02, 0x86, 0xA2, 0x01, 0xCA, 0x2A, 0x84, 0xA2, 0x00, 0x2A, 0x82,
  0xA2, 0x05, 0x2A, 0xCA, 0x2A, 0xA2, 0x02, 0x02, 0x86, 0xA2, 0x81, 0x2A, 0x84, 0xA2, 0x0A, 0x2A,
  0xA2, 0xA2, 0x5F, 0x05, 0x05, 0x00, 0x5F, 0x05, 0x05, 0x50, 0x82, 0xA2, 0x81, 0xC2, 0x84, 0xA2,
  0x00, 0xC2, 0x87, 0xA2, 0x84, 0x2A, 0x00, 0x2C, 0x83, 0xA2, 0x82, 0xC2, 0x82, 0xA2, 0x82, 0xC2,
  0x83, 0xA2, 0x00, 0xC2, 0x82, 0xA2, 0x00, 0x02, 0x83, 0xA2, 0x84, 0x2A, 0x02, 0x2C, 0xA2, 0xA2,
  0x82, 0x2A, 0x81, 0xA2, 0xFE, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0xD2, 0x00, 0x8F, 0xF0, 0x87, 0xA2,
  0x0D, 0x6F, 0x06, 0x06, 0x00, 0x6F, 0xF6, 0x06, 0x06, 0x5F, 0x05, 0x05, 0x00, 0x5F, 0xF5, 0x81,
  0x05, 0xFF};