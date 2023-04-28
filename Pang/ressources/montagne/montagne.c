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
  0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x03, 0x02, 0x02, 0x8A, 0x03, 0x0B, 0x1B, 0x1C, 0x1D, 0x03,
  0x03, 0x1E, 0x1F, 0x20, 0x21, 0x22, 0x23, 0x24, 0x82, 0x15, 0x05, 0x25, 0x26, 0x27, 0x28, 0x02,
  0x02, 0x8C, 0x03, 0x12, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 0x30, 0x31, 0x32, 0x33, 0x15,
  0x15, 0x34, 0x35, 0x36, 0x37, 0x02, 0x02, 0x87, 0x03, 0x05, 0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D,
  0x82, 0x15, 0x0E, 0x3E, 0x3F, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A,
  0x02, 0x02, 0x84, 0x03, 0x06, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 0x50, 0x51, 0x83, 0x15, 0x15, 0x52,
  0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F, 0x02, 0x02, 0x03,
  0x03, 0x60, 0x61, 0x62, 0x63, 0x82, 0x15, 0x68, 0x64, 0x15, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6A,
  0x6B, 0x6C, 0x6D, 0x6E, 0x6F, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x02, 0x02, 0x78,
  0x79, 0x7A, 0x7B, 0x7C, 0x7D, 0x7E, 0x7F, 0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88,
  0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x02, 0x02, 0x96,
  0x97, 0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F, 0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6,
  0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAE, 0xAF, 0xAA, 0xB0, 0xB1, 0x02, 0x02, 0xB2,
  0xB3, 0xB4, 0xB5, 0xB6, 0xB7, 0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF, 0xC0, 0xC1, 0xC2,
  0xC3, 0x8B, 0xC4, 0x81, 0x02, 0x0D, 0xC5, 0x59, 0x59, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0x59, 0xCB,
  0x59, 0xCC, 0x59, 0xCB, 0x82, 0x59, 0x0E, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0xD5,
  0xD6, 0xD3, 0xD7, 0xD8, 0x02, 0x02, 0x97, 0x59, 0x01, 0xD9, 0xDA, 0x83, 0x59, 0x81, 0x02, 0x5E,
  0xDB, 0xDC, 0xDD, 0xDE, 0xDF, 0xE0, 0xE1, 0xE2, 0xDB, 0xDC, 0xDD, 0xDE, 0xDF, 0xE0, 0xE1, 0xE2,
  0xDB, 0xDC, 0xDD, 0xDE, 0xDF, 0xE0, 0xE1, 0xE2, 0xDB, 0xDC, 0xDD, 0xDE, 0xDF, 0xE0, 0x02, 0x02,
  0xE3, 0xE4, 0xE5, 0xE6, 0xE3, 0xE7, 0xE8, 0xE6, 0xE3, 0xE4, 0xE5, 0xE6, 0xE3, 0xE7, 0xE8, 0xE6,
  0xE3, 0xE4, 0xE5, 0xE6, 0xE3, 0xE7, 0xE8, 0xE6, 0xE3, 0xE4, 0xE5, 0xE6, 0xE3, 0xE7, 0x02, 0xE9,
  0xEA, 0xEB, 0xEC, 0xED, 0xEE, 0xEF, 0xF0, 0xF1, 0xEA, 0xEB, 0xEC, 0xED, 0xEE, 0xEF, 0xF0, 0xF1,
  0xEA, 0xEB, 0xEC, 0xED, 0xEE, 0xEF, 0xF0, 0xF1, 0xEA, 0xEB, 0xEC, 0xED, 0xEE, 0xEF, 0xE9, 0x9F,
  0xFF, 0xFF};

byte PATTERNRLE[] = {
  0x16, 0x60, 0x20, 0x20, 0x00, 0x06, 0x01, 0x02, 0x02, 0x60, 0x20, 0x20, 0x00, 0x06, 0x00,
  0x02, 0x02, 0x30, 0x10, 0x10, 0x00, 0x03, 0x00, 0x01, 0x8F, 0x00, 0x00, 0x01, 0x82, 0x00, 0x11,
  0x07, 0x0F, 0x3F, 0x7F, 0x38, 0x00, 0x07, 0x1F, 0x7F, 0x7F, 0x14, 0x08, 0x08, 0x00, 0x1F, 0x38,
  0x7F, 0x7F, 0x84, 0x00, 0x05, 0x3F, 0x0F, 0x08, 0x03, 0x04, 0x04, 0x82, 0x00, 0x04, 0x1F, 0x07,
  0x40, 0x7F, 0x7F, 0x85, 0x00, 0x01, 0x1F, 0x07, 0x86, 0x00, 0x00, 0x03, 0x84, 0x00, 0x01, 0x0F,
  0x7F, 0x85, 0x00, 0x00, 0x1F, 0x86, 0x00, 0x00, 0x0F, 0x87, 0x00, 0x81, 0x07, 0x84, 0x00, 0x01,
  0x3F, 0x7F, 0x83, 0x00, 0x1C, 0x01, 0x07, 0x1F, 0x7F, 0x39, 0x07, 0x1F, 0x7F, 0x07, 0x1F, 0x7F,
  0x01, 0x07, 0x73, 0x18, 0x04, 0x38, 0x70, 0x1F, 0x3F, 0x00, 0x2F, 0x2F, 0x1F, 0x3F, 0x5F, 0x60,
  0x1F, 0x3F, 0x87, 0x00, 0x02, 0x06, 0x07, 0x07, 0x82, 0x03, 0x18, 0x02, 0x00, 0x1F, 0x30, 0x7F,
  0x3F, 0x07, 0x03, 0x05, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x3F, 0x1F, 0x1F, 0x00, 0x7F, 0x3F,
  0x7F, 0x60, 0x30, 0x0C, 0x85, 0x00, 0x81, 0x7F, 0x01, 0x1F, 0x3F, 0x86, 0x00, 0x00, 0x7F, 0x86,
  0x00, 0x00, 0x03, 0x8C, 0x00, 0x1E, 0x01, 0x03, 0x00, 0x00, 0x01, 0x07, 0x1F, 0x7F, 0x3F, 0x20,
  0x0F, 0x3F, 0x1E, 0x03, 0x0C, 0x38, 0x70, 0x3F, 0x18, 0x60, 0x7F, 0x00, 0x01, 0x02, 0x04, 0x18,
  0x08, 0x30, 0x60, 0x3F, 0x7F, 0x89, 0x00, 0x28, 0x20, 0x79, 0x63, 0x63, 0x47, 0x07, 0x07, 0x13,
  0x23, 0x32, 0x0D, 0x04, 0x02, 0x01, 0x00, 0x02, 0x01, 0x02, 0x7F, 0x40, 0x30, 0x73, 0x3C, 0x20,
  0x18, 0x0F, 0x03, 0x3F, 0x20, 0x00, 0x00, 0x3F, 0x20, 0x00, 0x3F, 0x0F, 0x03, 0x0F, 0x13, 0x08,
  0x04, 0x85, 0x00, 0x01, 0x01, 0x7F, 0x84, 0x00, 0x01, 0x1F, 0x7F, 0x82, 0x00, 0x02, 0x03, 0x1F,
  0x7F, 0x82, 0x00, 0x01, 0x0F, 0x7F, 0x83, 0x00, 0x3A, 0x03, 0x04, 0x4F, 0x24, 0x2C, 0x3F, 0x78,
  0x1C, 0x7C, 0x1E, 0x02, 0x18, 0x60, 0x7F, 0x00, 0x10, 0x20, 0x3C, 0x20, 0x00, 0x02, 0x04, 0x05,
  0x3A, 0x16, 0x0D, 0x00, 0x20, 0x43, 0x7D, 0x0C, 0x18, 0x4F, 0x40, 0x00, 0x7F, 0x01, 0x06, 0x0C,
  0x18, 0x71, 0x04, 0x43, 0x78, 0x07, 0x1F, 0x7F, 0x01, 0x01, 0x00, 0x00, 0x20, 0x10, 0x08, 0x00,
  0x00, 0x3F, 0x0F, 0x01, 0x86, 0x00, 0x15, 0x7B, 0x3D, 0x41, 0x20, 0x30, 0x10, 0x18, 0x0C, 0x18,
  0x04, 0x00, 0x3F, 0x60, 0x18, 0x0C, 0x00, 0x07, 0x00, 0x05, 0x05, 0x00, 0x01, 0x87, 0x00, 0x01,
  0x07, 0x1F, 0x82, 0x00, 0x01, 0x03, 0x1F, 0x83, 0x00, 0x03, 0x3F, 0x1F, 0x66, 0x48, 0x82, 0x00,
  0x14, 0x03, 0x0F, 0x7D, 0x03, 0x02, 0x00, 0x00, 0x2B, 0x07, 0x01, 0x40, 0x2B, 0x22, 0x0F, 0x7F,
  0x00, 0x7F, 0x3F, 0x60, 0x7F, 0x7F, 0x82, 0x00, 0x02, 0x01, 0x03, 0x02, 0x83, 0x00, 0x2E, 0x01,
  0x1F, 0x3F, 0x00, 0x02, 0x00, 0x00, 0x70, 0x40, 0x13, 0x2B, 0x05, 0x18, 0x20, 0x00, 0x10, 0x60,
  0x4C, 0x67, 0x10, 0x23, 0x62, 0x77, 0x73, 0x10, 0x1C, 0x0C, 0x3B, 0x60, 0x20, 0x1F, 0x00, 0x00,
  0x05, 0x65, 0x6E, 0x11, 0x01, 0x01, 0x09, 0x1E, 0x7C, 0x41, 0x20, 0x06, 0x0F, 0x6F, 0x82, 0x00,
  0x0E, 0x1C, 0x00, 0x20, 0x18, 0x1E, 0x70, 0x08, 0x2C, 0x61, 0x10, 0x00, 0x00, 0x01, 0x3F, 0x07,
  0x82, 0x00, 0x14, 0x7F, 0x07, 0x7F, 0x1F, 0x78, 0x07, 0x03, 0x00, 0x00, 0x60, 0x20, 0x18, 0x39,
  0x00, 0x3F, 0x0F, 0x1B, 0x07, 0x01, 0x27, 0x1F, 0x82, 0x00, 0x04, 0x04, 0x7F, 0x1F, 0x0E, 0x03,
  0x84, 0x00, 0x02, 0x01, 0x0F, 0x3F, 0x82, 0x00, 0x0A, 0x03, 0x3F, 0x0B, 0x7F, 0x00, 0x00, 0x0F,
  0x7F, 0x11, 0x55, 0x0A, 0x84, 0x00, 0x81, 0x52, 0x00, 0x28, 0x84, 0x00, 0x00, 0x68, 0x84, 0x00,
  0x01, 0x05, 0x57, 0x84, 0x00, 0x00, 0x5F, 0x8A, 0x00, 0x20, 0x01, 0x06, 0x00, 0x00, 0x02, 0x15,
  0x70, 0x40, 0x7C, 0x0B, 0x3F, 0x0E, 0x02, 0x3F, 0x7F, 0x10, 0x20, 0x60, 0x7F, 0x7C, 0x3F, 0x00,
  0x00, 0x07, 0x1F, 0x0F, 0x7F, 0x7C, 0x20, 0x0F, 0x00, 0x1F, 0x7F, 0x82, 0x00, 0x03, 0x07, 0x1F,
  0x3F, 0x70, 0x83, 0x00, 0x07, 0x0F, 0x10, 0x00, 0x01, 0x00, 0x30, 0x10, 0x70, 0x87, 0x00, 0x01,
  0x06, 0x01, 0x85, 0x00, 0x00, 0x01, 0x86, 0x00, 0x01, 0x3F, 0x60, 0x85, 0x00, 0x02, 0x7F, 0x0F,
  0x03, 0x84, 0x00, 0x0F, 0x3F, 0x0F, 0x03, 0x3C, 0x7F, 0x1F, 0x07, 0x00, 0x2F, 0x00, 0x00, 0x7F,
  0x3F, 0x7F, 0x1F, 0x3C, 0x85, 0x00, 0x01, 0x01, 0x07, 0x82, 0x00, 0x0C, 0x03, 0x0F, 0x7F, 0x00,
  0x08, 0x01, 0x0F, 0x7F, 0x00, 0x00, 0x05, 0x30, 0x7F, 0x83, 0x00, 0x00, 0x30, 0x88, 0x00, 0x00,
  0x40, 0x83, 0x00, 0x0C, 0x15, 0x60, 0x00, 0x00, 0x01, 0x00, 0x0C, 0x40, 0x7F, 0x00, 0x00, 0x0F,
  0x40, 0x83, 0x00, 0x03, 0x03, 0x7F, 0x04, 0x2C, 0x83, 0x00, 0x3E, 0x40, 0x7F, 0x07, 0x7F, 0x0F,
  0x38, 0x00, 0x1F, 0x03, 0x3F, 0x00, 0x07, 0x07, 0x0F, 0x0F, 0x00, 0x00, 0x0F, 0x1E, 0x1F, 0x3F,
  0x03, 0x07, 0x3F, 0x3E, 0x1F, 0x00, 0x01, 0x0F, 0x7F, 0x02, 0x3F, 0x02, 0x03, 0x1F, 0x00, 0x08,
  0x7F, 0x7E, 0x1C, 0x07, 0x5F, 0x1F, 0x07, 0x00, 0x3F, 0x1F, 0x3F, 0x7F, 0x1F, 0x07, 0x01, 0x00,
  0x04, 0x00, 0x7F, 0x03, 0x7F, 0x0F, 0x7C, 0x40, 0x3C, 0x03, 0x87, 0x00, 0x04, 0x07, 0x00, 0x00,
  0x03, 0x0B, 0x86, 0x00, 0x00, 0x0F, 0x86, 0x00, 0x00, 0x07, 0x86, 0x00, 0x00, 0x03, 0x85, 0x00,
  0x00, 0x1C, 0x87, 0x00, 0x02, 0x15, 0x3E, 0x0C, 0x84, 0x00, 0x12, 0x78, 0x00, 0x78, 0x01, 0x01,
  0x02, 0x00, 0x01, 0x4B, 0x00, 0x07, 0x02, 0x2B, 0x5F, 0x00, 0x40, 0x00, 0x74, 0x15, 0x83, 0x00,
  0x02, 0x04, 0x30, 0x40, 0x85, 0x00, 0x00, 0x01, 0x85, 0x00, 0x01, 0x01, 0x5C, 0x86, 0x00, 0x00,
  0x1F, 0x85, 0x00, 0x81, 0x03, 0x8B, 0x00, 0x01, 0x03, 0x7F, 0x84, 0x00, 0x1D, 0x7F, 0x00, 0x0F,
  0x02, 0x00, 0x00, 0x03, 0x3F, 0x03, 0x3F, 0x11, 0x13, 0x00, 0x1E, 0x00, 0x3F, 0x00, 0x03, 0x60,
  0x00, 0x00, 0x15, 0x3F, 0x04, 0x42, 0x1F, 0x00, 0x00, 0x01, 0x70, 0x82, 0x00, 0x28, 0x03, 0x1F,
  0x70, 0x00, 0x03, 0x3F, 0x3F, 0x08, 0x00, 0x5C, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x7F, 0x01, 0x70,
  0x3B, 0x01, 0x00, 0x01, 0x7F, 0x03, 0x0F, 0x7E, 0x40, 0x00, 0x1F, 0x01, 0x7F, 0x01, 0x01, 0x50,
  0x0B, 0x7F, 0x00, 0x00, 0x07, 0x00, 0x0F, 0x83, 0x00, 0x04, 0x04, 0x03, 0x1F, 0x01, 0x0F, 0x86,
  0x00, 0x03, 0x7F, 0x60, 0x1C, 0x04, 0x86, 0x00, 0x0D, 0x1F, 0x03, 0x00, 0x00, 0x03, 0x03, 0x00,
  0x00, 0x7F, 0x07, 0x3F, 0x7F, 0x0F, 0x40, 0x82, 0x00, 0x02, 0x3F, 0x70, 0x0D, 0x83, 0x00, 0x4C,
  0x43, 0x10, 0x70, 0x0F, 0x40, 0x7F, 0x00, 0x0D, 0x5F, 0x00, 0x7F, 0x20, 0x3F, 0x13, 0x0F, 0x20,
  0x00, 0x05, 0x00, 0x6C, 0x38, 0x30, 0x40, 0x7F, 0x20, 0x00, 0x38, 0x07, 0x03, 0x07, 0x08, 0x00,
  0x01, 0x08, 0x40, 0x00, 0x4D, 0x7E, 0x00, 0x00, 0x2F, 0x00, 0x1F, 0x04, 0x31, 0x3F, 0x01, 0x03,
  0x06, 0x78, 0x7F, 0x3C, 0x00, 0x45, 0x21, 0x3A, 0x7F, 0x00, 0x6F, 0x01, 0x0C, 0x7F, 0x05, 0x00,
  0x03, 0x1F, 0x08, 0x7F, 0x2B, 0x7F, 0x5F, 0x5F, 0x20, 0x0F, 0x2B, 0x5B, 0x7D, 0x82, 0x00, 0x05,
  0x2C, 0x2A, 0x01, 0x1F, 0x02, 0x0E, 0x82, 0x00, 0x35, 0x20, 0x00, 0x28, 0x00, 0x60, 0x1E, 0x14,
  0x00, 0x33, 0x40, 0x04, 0x34, 0x50, 0x21, 0x00, 0x00, 0x40, 0x0F, 0x1F, 0x04, 0x04, 0x7F, 0x15,
  0x00, 0x07, 0x00, 0x3F, 0x07, 0x00, 0x08, 0x00, 0x74, 0x01, 0x20, 0x06, 0x00, 0x7F, 0x41, 0x4F,
  0x00, 0x2B, 0x13, 0x41, 0x1F, 0x00, 0x7F, 0x07, 0x00, 0x5F, 0x43, 0x07, 0x14, 0x7B, 0x1F, 0x82,
  0x00, 0x05, 0x7F, 0x1F, 0x01, 0x01, 0x42, 0x07, 0x82, 0x7F, 0x09, 0x01, 0x3E, 0x49, 0x7F, 0x7F,
  0x00, 0x3F, 0x00, 0x00, 0x07, 0x82, 0x7F, 0x02, 0x60, 0x00, 0x0F, 0x8F, 0x00, 0x00, 0x03, 0x87,
  0x00, 0x00, 0x01, 0x8F, 0x00, 0x00, 0x3F, 0x86, 0x00, 0x00, 0x0B, 0x85, 0x00, 0x00, 0x0F, 0x8E,
  0x00, 0x00, 0x03, 0x87, 0x00, 0x00, 0x03, 0x85, 0x00, 0x01, 0x21, 0x0B, 0x82, 0x00, 0x1E, 0x6F,
  0x03, 0x00, 0x7F, 0x0F, 0x07, 0x78, 0x04, 0x00, 0x00, 0x77, 0x0F, 0x01, 0x00, 0x00, 0x03, 0x3F,
  0x01, 0x00, 0x0F, 0x0F, 0x7D, 0x03, 0x00, 0x60, 0x1F, 0x7F, 0x00, 0x0E, 0x7D, 0x28, 0x84, 0x00,
  0x43, 0x3F, 0x01, 0x70, 0x00, 0x01, 0x03, 0x0F, 0x3D, 0x00, 0x04, 0x18, 0x30, 0x39, 0x16, 0x0D,
  0x03, 0x27, 0x01, 0x28, 0x7F, 0x78, 0x40, 0x20, 0x6F, 0x48, 0x60, 0x54, 0x33, 0x0C, 0x07, 0x28,
  0x06, 0x07, 0x01, 0x00, 0x73, 0x03, 0x01, 0x1F, 0x1B, 0x71, 0x38, 0x0C, 0x04, 0x10, 0x07, 0x6F,
  0x1B, 0x01, 0x7D, 0x0F, 0x60, 0x60, 0x4F, 0x7F, 0x40, 0x00, 0x7F, 0x62, 0x7F, 0x6E, 0x00, 0x0C,
  0x03, 0x01, 0x00, 0x00, 0x05, 0x82, 0x00, 0x07, 0x10, 0x37, 0x31, 0x0C, 0x00, 0x0F, 0x03, 0x0B,
  0x82, 0x00, 0x01, 0x7F, 0x1F, 0x82, 0x00, 0x00, 0x0F, 0x88, 0x00, 0x01, 0x0B, 0x01, 0x86, 0x00,
  0x00, 0x7F, 0x87, 0x00, 0x00, 0x0C, 0x86, 0x00, 0x01, 0x43, 0x0C, 0x85, 0x00, 0x12, 0x3F, 0x7F,
  0x01, 0x04, 0x62, 0x32, 0x0B, 0x01, 0x08, 0x04, 0x00, 0x11, 0x1E, 0x1F, 0x3F, 0x00, 0x4E, 0x60,
  0x3F, 0x84, 0x00, 0x02, 0x22, 0x5C, 0x36, 0x84, 0x00, 0x00, 0x03, 0x86, 0x00, 0x00, 0x1F, 0x86,
  0x00, 0x01, 0x0F, 0x03, 0x86, 0x00, 0x05, 0x3C, 0x00, 0x01, 0x00, 0x00, 0x03, 0x82, 0x00, 0x02,
  0x0F, 0x71, 0x17, 0x85, 0x00, 0x02, 0x5F, 0x70, 0x38, 0x86, 0x00, 0x00, 0x3D, 0x86, 0x00, 0x02,
  0x04, 0x7F, 0x17, 0x86, 0x00, 0x00, 0x40, 0x85, 0x00, 0x01, 0x04, 0x77, 0x8E, 0x00, 0x00, 0x1F,
  0x85, 0x00, 0x01, 0x04, 0x74, 0x85, 0x00, 0x02, 0x04, 0x76, 0x0B, 0x86, 0x00, 0x00, 0x77, 0x89,
  0x00, 0x02, 0x20, 0x7A, 0x14, 0x84, 0x00, 0x01, 0x60, 0x4B, 0x85, 0x00, 0x01, 0x20, 0x7D, 0x86,
  0x00, 0x01, 0x3F, 0x10, 0x84, 0x00, 0x01, 0x0C, 0x79, 0x85, 0x00, 0x02, 0x78, 0x34, 0x0E, 0x86,
  0x00, 0x00, 0x1C, 0x84, 0x00, 0x01, 0x02, 0x58, 0x82, 0x00, 0x77, 0x7D, 0x75, 0x17, 0x1F, 0x5F,
  0x5F, 0x00, 0x28, 0x40, 0x40, 0x44, 0x45, 0x5D, 0x2D, 0x16, 0x3E, 0x28, 0x2A, 0x3A, 0x72, 0x58,
  0x2F, 0x10, 0x10, 0x0A, 0x35, 0x53, 0x54, 0x01, 0x00, 0x00, 0x14, 0x40, 0x40, 0x44, 0x45, 0x5D,
  0x2D, 0x16, 0x3E, 0x08, 0x2A, 0x3A, 0x72, 0x58, 0x2F, 0x10, 0x10, 0x30, 0x10, 0x10, 0x00, 0x03,
  0x00, 0x01, 0x7E, 0x29, 0x4C, 0x44, 0x1B, 0x18, 0x61, 0x74, 0x25, 0x40, 0x40, 0x08, 0x54, 0x59,
  0x10, 0x04, 0x0E, 0x18, 0x3C, 0x0C, 0x4F, 0x7F, 0x7F, 0x5F, 0x52, 0x7F, 0x38, 0x6C, 0x6C, 0x40,
  0x0E, 0x0C, 0x1A, 0x29, 0x4C, 0x44, 0x6B, 0x73, 0x73, 0x30, 0x21, 0x40, 0x40, 0x0E, 0x54, 0x59,
  0x10, 0x00, 0x0A, 0x18, 0x3C, 0x0D, 0x4E, 0x7F, 0x7F, 0x5F, 0x52, 0x7F, 0x38, 0x7C, 0x17, 0x1F,
  0x3E, 0x41, 0x01, 0xC7, 0x00, 0x82, 0xC0, 0x81, 0xFF, 0x82, 0xC0, 0x82, 0x03, 0x81, 0xFF, 0x82,
  0x03, 0x87, 0x3C, 0x0D, 0x60, 0x20, 0x20, 0x00, 0x06, 0x01, 0x02, 0x02, 0x60, 0x20, 0x20, 0x00,
  0x06, 0x01, 0x81, 0x02, 0xFF};

byte COLORRLE[] = {
  0x0C, 0x5F, 0x05, 0x05, 0x00, 0x5F, 0xF5, 0x05, 0x05, 0x5F, 0x05, 0x05, 0x00, 0x5F, 0x82,
  0x05, 0x07, 0x5F, 0x05, 0x05, 0x00, 0x5F, 0x05, 0x05, 0x00, 0x8E, 0x04, 0x00, 0xE4, 0x82, 0x04,
  0x00, 0x54, 0x82, 0xE4, 0x01, 0xFE, 0x04, 0x82, 0x54, 0x00, 0xE5, 0x82, 0xFE, 0x01, 0x04, 0x45,
  0x82, 0xE5, 0x82, 0x0E, 0x81, 0x04, 0x05, 0x45, 0x4E, 0xFE, 0x5E, 0xFE, 0xFE, 0x82, 0x04, 0x81,
  0x4E, 0x02, 0x5E, 0xE5, 0xE5, 0x85, 0x04, 0x01, 0x4E, 0x5E, 0x86, 0x04, 0x00, 0x54, 0x84, 0x04,
  0x81, 0x54, 0x00, 0x0E, 0x84, 0x04, 0x02, 0xE5, 0x0E, 0x0E, 0x84, 0x04, 0x02, 0x5E, 0x0E, 0x0E,
  0x84, 0x04, 0x02, 0x0E, 0x4E, 0x45, 0x84, 0x04, 0x01, 0x5E, 0x45, 0x83, 0x04, 0x83, 0xE4, 0x00,
  0xFE, 0x82, 0xE4, 0x82, 0xFE, 0x81, 0xEF, 0x00, 0xFE, 0x83, 0xEF, 0x81, 0xFE, 0x00, 0x0F, 0x84,
  0xEF, 0x02, 0xFE, 0xEF, 0xEF, 0x87, 0x0E, 0x86, 0xFE, 0x04, 0x0E, 0xE5, 0x5E, 0xEF, 0xEF, 0x82,
  0x5E, 0x05, 0x0E, 0x4E, 0x0E, 0xFE, 0x0E, 0x0E, 0x82, 0xE5, 0x03, 0x04, 0x45, 0x5E, 0xEF, 0x82,
  0xFE, 0x00, 0x0E, 0x84, 0x04, 0x03, 0x45, 0x5E, 0x5E, 0x54, 0x86, 0x04, 0x00, 0xE5, 0x86, 0x04,
  0x00, 0x4E, 0x8C, 0x04, 0x81, 0xE4, 0x81, 0x04, 0x83, 0xE4, 0x04, 0xFE, 0xEF, 0xE4, 0xE4, 0xFE,
  0x83, 0xEF, 0x04, 0xFE, 0xEF, 0xEF, 0xFE, 0x0F, 0x86, 0xEF, 0x81, 0xFE, 0x89, 0x0F, 0x88, 0xEF,
  0x84, 0x5E, 0x08, 0x0E, 0x5E, 0x5E, 0xFE, 0xE5, 0x5E, 0x5E, 0xE5, 0xE5, 0x83, 0x5E, 0x06, 0xEF,
  0xFE, 0x0E, 0x0E, 0xE5, 0x5E, 0x04, 0x82, 0x45, 0x83, 0x5E, 0x85, 0x04, 0x81, 0x54, 0x84, 0x04,
  0x07, 0x54, 0xE5, 0x0E, 0x04, 0x04, 0x54, 0x54, 0xE5, 0x82, 0x0E, 0x01, 0xE4, 0xE5, 0x83, 0x0E,
  0x81, 0xFE, 0x07, 0xEF, 0xFE, 0xEF, 0xFE, 0xFE, 0xEF, 0xEF, 0xFE, 0x82, 0xEF, 0x06, 0xFE, 0x0F,
  0xEF, 0xEF, 0xFE, 0xEF, 0x0F, 0x83, 0xEF, 0x81, 0xFE, 0x09, 0x0F, 0xEF, 0xEF, 0xFE, 0xEF, 0xEF,
  0xFE, 0xEF, 0x0F, 0xFE, 0x84, 0xEF, 0x02, 0xFE, 0xEF, 0xFE, 0x82, 0xEF, 0x81, 0x5E, 0x81, 0x0E,
  0x82, 0x5E, 0x81, 0x0E, 0x81, 0xE5, 0x00, 0x5E, 0x86, 0x0E, 0x81, 0xE5, 0x87, 0x5E, 0x01, 0x0E,
  0xE5, 0x82, 0x5E, 0x08, 0x0E, 0x5E, 0x0E, 0x5E, 0x5E, 0x0E, 0x5E, 0x0E, 0x0E, 0x85, 0x04, 0x81,
  0x54, 0x82, 0x04, 0x81, 0x54, 0x82, 0x05, 0x01, 0x04, 0x54, 0x82, 0xE5, 0x82, 0x05, 0x14, 0x54,
  0xEF, 0xEF, 0xE5, 0xE5, 0x05, 0x05, 0xE5, 0xE5, 0xFE, 0xFE, 0x5E, 0x5E, 0xE5, 0xE5, 0x0E, 0xEF,
  0xEF, 0x5E, 0xE5, 0xE5, 0x82, 0x0E, 0x82, 0xFE, 0x83, 0x0E, 0x08, 0x5E, 0xEF, 0xEF, 0x0E, 0xFE,
  0x0E, 0x0E, 0x5E, 0x5E, 0x84, 0xFE, 0x04, 0x0E, 0x5E, 0x5E, 0xFE, 0xEF, 0x82, 0xFE, 0x81, 0xEF,
  0x82, 0xFE, 0x05, 0xEF, 0xFE, 0xFE, 0x5E, 0x05, 0x05, 0x82, 0x5E, 0x00, 0xE5, 0x83, 0xC5, 0x02,
  0x5E, 0xE5, 0xE5, 0x82, 0xC5, 0x81, 0x0C, 0x02, 0x0E, 0xE5, 0x05, 0x82, 0xC5, 0x81, 0x5C, 0x07,
  0x5E, 0xE5, 0xE5, 0x05, 0x05, 0xC5, 0x5C, 0x5C, 0x82, 0x0E, 0x81, 0xE5, 0x81, 0x5C, 0x04, 0xC5,
  0x5E, 0x5E, 0x0E, 0x0E, 0x82, 0x5E, 0x03, 0xE5, 0x0E, 0xE5, 0xE5, 0x84, 0x5E, 0x82, 0x0E, 0x00,
  0x5E, 0x83, 0xE5, 0x84, 0x04, 0x82, 0x54, 0x82, 0x04, 0x81, 0x54, 0x81, 0xE5, 0x08, 0x0E, 0x04,
  0x54, 0x54, 0xE5, 0x5E, 0x5E, 0x0E, 0x0E, 0x82, 0x05, 0x04, 0xE5, 0x5E, 0x5E, 0x0E, 0x0E, 0x82,
  0x05, 0x00, 0x5E, 0x83, 0x0E, 0x02, 0x05, 0xE5, 0xE5, 0x84, 0x0E, 0x00, 0xE5, 0x8A, 0x0E, 0x81,
  0x5E, 0x81, 0x0E, 0x83, 0x5E, 0x03, 0xE5, 0x5E, 0x5E, 0xC5, 0x82, 0x5E, 0x82, 0xC5, 0x81, 0x5C,
  0x0C, 0xE5, 0x0E, 0x0E, 0x5E, 0x5E, 0xC5, 0xC5, 0x5C, 0xFE, 0x5E, 0x05, 0xC5, 0xC5, 0x82, 0x0C,
  0x82, 0xC5, 0x00, 0x5C, 0x83, 0x0C, 0x04, 0xC5, 0x5C, 0x0C, 0x5C, 0x0C, 0x82, 0x6C, 0x87, 0x0C,
  0x81, 0x5C, 0x85, 0x0C, 0x00, 0x5C, 0x86, 0x0C, 0x01, 0xC5, 0x5C, 0x85, 0x0C, 0x82, 0x5C, 0x84,
  0x0C, 0x82, 0x5E, 0x00, 0xE5, 0x82, 0x5C, 0x08, 0x0C, 0x5C, 0x0C, 0x0C, 0xC5, 0xC5, 0x5E, 0x5E,
  0xE5, 0x85, 0x04, 0x81, 0xE4, 0x82, 0x04, 0x82, 0xE4, 0x01, 0x0E, 0x5E, 0x82, 0x54, 0x81, 0x0E,
  0x81, 0x5E, 0x00, 0xE5, 0x83, 0x0E, 0x00, 0x5E, 0x88, 0x0E, 0x00, 0x5E, 0x83, 0x0E, 0x81, 0x5E,
  0x81, 0x0E, 0x08, 0x5E, 0x0E, 0x5E, 0x5E, 0xE5, 0x0E, 0x0E, 0x5E, 0xE5, 0x83, 0x0E, 0x81, 0x5E,
  0x81, 0xC5, 0x83, 0x0E, 0x14, 0xC5, 0x5C, 0xC5, 0xC5, 0x5E, 0x5E, 0x0E, 0x5E, 0xC5, 0xC5, 0x0C,
  0xEC, 0x5E, 0x5E, 0xC5, 0x0C, 0x0C, 0xEC, 0xFE, 0xEF, 0xC5, 0x82, 0x5C, 0x07, 0xFE, 0xEF, 0x0E,
  0x5E, 0x5C, 0x5C, 0x5E, 0xEF, 0x82, 0x5E, 0x03, 0x05, 0xE5, 0xE5, 0x5E, 0x84, 0xC5, 0x03, 0x0C,
  0x5E, 0x5E, 0xE5, 0x83, 0x5C, 0x07, 0x0C, 0x5C, 0x0C, 0x5E, 0xC5, 0x5E, 0xC5, 0x5C, 0x82, 0x6C,
  0x82, 0x0C, 0x81, 0x05, 0x82, 0x0C, 0x04, 0xC6, 0x0C, 0x0C, 0xC5, 0x5E, 0x86, 0x0C, 0x00, 0x5E,
  0x86, 0x0C, 0x00, 0xC5, 0x86, 0x0C, 0x00, 0x5C, 0x85, 0x0C, 0x01, 0x5C, 0x05, 0x86, 0x0C, 0x02,
  0xC5, 0x5C, 0x5C, 0x84, 0x0C, 0x02, 0x5C, 0x04, 0xE4, 0x82, 0x5E, 0x04, 0x0E, 0x5E, 0xE5, 0x04,
  0x54, 0x82, 0xE5, 0x04, 0x0E, 0x5E, 0x0E, 0xE4, 0xE5, 0x83, 0x0E, 0x82, 0x5E, 0x85, 0x0E, 0x00,
  0x5E, 0x85, 0x0E, 0x81, 0x5E, 0x86, 0x0E, 0x00, 0x5E, 0x85, 0x0E, 0x01, 0x5E, 0xC5, 0x85, 0x0E,
  0x01, 0x05, 0x0C, 0x83, 0x0E, 0x81, 0x5E, 0x01, 0x05, 0x0C, 0x82, 0x0E, 0x1D, 0x5E, 0x05, 0xC5,
  0x5C, 0x0C, 0x0E, 0x5E, 0x5E, 0xC5, 0xC5, 0x5C, 0xC5, 0x0C, 0x5E, 0x05, 0xC5, 0x0C, 0x5C, 0x5C,
  0x0C, 0x0C, 0xC5, 0xC5, 0x5C, 0xC5, 0xC5, 0x0C, 0x0C, 0x5C, 0x5C, 0x82, 0x0C, 0x82, 0x5C, 0x00,
  0x0C, 0x82, 0x5C, 0x0F, 0xE5, 0x05, 0xC5, 0x0C, 0x0C, 0xE5, 0x0E, 0x0E, 0x5E, 0xC5, 0xC5, 0x5C,
  0x5C, 0x0E, 0x5E, 0x5E, 0x83, 0xC5, 0x0D, 0x05, 0x5E, 0xC5, 0xC5, 0x6C, 0x6C, 0x5C, 0xC5, 0xC5,
  0x05, 0x0C, 0x6C, 0x06, 0xC6, 0x83, 0x0C, 0x00, 0x6C, 0x82, 0xC6, 0x00, 0x6C, 0x86, 0x0C, 0x03,
  0xC6, 0x6C, 0x6C, 0x5C, 0x86, 0x0C, 0x81, 0x5C, 0x81, 0x0C, 0x81, 0x5C, 0x81, 0x0C, 0x81, 0xE5,
  0x81, 0x5C, 0x08, 0x5E, 0xE5, 0x0C, 0x0C, 0x0E, 0x5E, 0xE5, 0xC5, 0x05, 0x82, 0x0C, 0x81, 0xE5,
  0x81, 0x5C, 0x0E, 0xC5, 0x5C, 0x05, 0xC5, 0x5E, 0x05, 0x5C, 0xE5, 0x5E, 0xC5, 0xC5, 0x5C, 0x05,
  0xE5, 0x05, 0x83, 0x5C, 0x03, 0xC5, 0xE5, 0x05, 0xC5, 0x83, 0x5C, 0x22, 0x0C, 0xC5, 0xE5, 0xE5,
  0x05, 0xC5, 0xC5, 0x0C, 0x0C, 0xE5, 0x0E, 0x5E, 0xE5, 0xE5, 0x5E, 0xC5, 0xC5, 0x5E, 0x5E, 0xE5,
  0xE5, 0x05, 0xC5, 0x5C, 0x56, 0xE5, 0x0E, 0x5E, 0xC5, 0xC5, 0x5C, 0x65, 0x06, 0x5E, 0x5E, 0x82,
  0xC5, 0x07, 0x65, 0xC6, 0xC6, 0xC5, 0xC5, 0x5C, 0x6C, 0xC6, 0x82, 0x0C, 0x05, 0xC5, 0x5C, 0x65,
  0x65, 0x6C, 0x6C, 0x82, 0x0C, 0x07, 0x5C, 0x06, 0xC6, 0x06, 0xC6, 0x6C, 0x6C, 0x0C, 0x85, 0xC6,
  0x43, 0x06, 0x0C, 0x6C, 0xC6, 0x6C, 0xC6, 0xC6, 0x6C, 0x6C, 0x0C, 0x6C, 0x0C, 0xC6, 0xC6, 0x06,
  0xC6, 0x06, 0xC6, 0x56, 0x56, 0x5C, 0x0C, 0xC6, 0x6C, 0xC6, 0x06, 0x65, 0x5C, 0x5E, 0x5C, 0x0C,
  0xC6, 0xC6, 0x06, 0xC5, 0xE5, 0xE5, 0x65, 0x6C, 0x6C, 0x0C, 0x06, 0x05, 0x5E, 0x5E, 0xE5, 0x56,
  0x65, 0x56, 0xC6, 0x65, 0x6C, 0x65, 0x5E, 0xE5, 0x5E, 0x5C, 0x0C, 0xC6, 0x06, 0x06, 0x65, 0x65,
  0xC5, 0x65, 0x5C, 0x0C, 0xC6, 0x84, 0x06, 0x82, 0x0C, 0x84, 0x06, 0x82, 0x0C, 0x00, 0xC6, 0x83,
  0x06, 0x83, 0x0C, 0x00, 0xC6, 0x82, 0x06, 0x84, 0x0C, 0x82, 0x06, 0x84, 0x0C, 0x02, 0xC6, 0x06,
  0x06, 0x84, 0x0C, 0x02, 0x6C, 0x06, 0x06, 0x83, 0x0C, 0x00, 0x6C, 0x82, 0x06, 0x83, 0x0C, 0x83,
  0x06, 0x83, 0x0C, 0x00, 0xC6, 0x82, 0x06, 0x84, 0x0C, 0x02, 0xC6, 0x06, 0x06, 0x83, 0x0C, 0x81,
  0x6C, 0x82, 0x06, 0x81, 0x6C, 0x00, 0x0C, 0x82, 0xC6, 0x03, 0x6C, 0xC6, 0x06, 0x06, 0x82, 0x6C,
  0x81, 0x0C, 0x81, 0xC6, 0x0D, 0x6C, 0x06, 0xC6, 0xC6, 0x6C, 0x6C, 0x0C, 0x6C, 0xC6, 0xC6, 0x0C,
  0x6C, 0x6C, 0xC6, 0x84, 0x0C, 0x03, 0xC6, 0x6C, 0xC6, 0x0C, 0x83, 0x6C, 0x03, 0x06, 0xC6, 0xC6,
  0x6C, 0x86, 0xC6, 0x04, 0x6C, 0xC6, 0x6C, 0x6C, 0xC6, 0x82, 0x6C, 0x82, 0xC6, 0x83, 0x6C, 0x03,
  0x0C, 0x6C, 0xC6, 0xC6, 0x84, 0x6C, 0x02, 0xC6, 0x6C, 0x6C, 0x82, 0xC6, 0x81, 0x6C, 0x0A, 0xC6,
  0x6C, 0xC6, 0xC6, 0x6C, 0x0C, 0xC6, 0x6C, 0xC6, 0x6C, 0x0C, 0x82, 0x6C, 0x81, 0x0C, 0x00, 0x6C,
  0x82, 0x0C, 0x04, 0x6C, 0xC6, 0x6C, 0x6C, 0x06, 0x82, 0x6C, 0x82, 0x0C, 0x01, 0xC6, 0x65, 0x82,
  0x06, 0x00, 0x6C, 0x82, 0x0C, 0x85, 0x06, 0x81, 0x6C, 0x86, 0x06, 0x00, 0x6C, 0x87, 0x06, 0x00,
  0x6C, 0x86, 0x0C, 0x01, 0xC6, 0x6C, 0x85, 0x0C, 0x81, 0x6C, 0x81, 0xC6, 0x83, 0x6C, 0x81, 0xC6,
  0x00, 0x06, 0x83, 0xC6, 0x03, 0x0C, 0xC6, 0x6C, 0xC6, 0x84, 0x0C, 0x82, 0x6C, 0x84, 0x0C, 0x00,
  0x6C, 0x86, 0x0C, 0x00, 0xC6, 0x86, 0x0C, 0x81, 0x6C, 0x85, 0x0C, 0x09, 0x06, 0xC6, 0x0C, 0x6C,
  0x0C, 0x0C, 0x6C, 0x0C, 0x06, 0x06, 0x82, 0x6C, 0x82, 0x0C, 0x82, 0x06, 0x04, 0x6C, 0xC6, 0x6C,
  0x0C, 0x0C, 0x84, 0x06, 0x02, 0x6C, 0x0C, 0x0C, 0x84, 0x06, 0x02, 0xC6, 0x6C, 0x6C, 0x86, 0x06,
  0x00, 0xC6, 0x85, 0x06, 0x81, 0xC6, 0x86, 0x06, 0x00, 0x0C, 0x86, 0x06, 0x00, 0x6C, 0x85, 0x06,
  0x81, 0xC6, 0x85, 0x06, 0x81, 0xC6, 0x00, 0x6C, 0x86, 0x0C, 0x00, 0xC6, 0x89, 0x0C, 0x04, 0x2C,
  0xC2, 0xC2, 0x02, 0x02, 0x82, 0x0C, 0x01, 0x2C, 0xC2, 0x82, 0x02, 0x82, 0x0C, 0x81, 0x2C, 0x82,
  0x02, 0x83, 0x0C, 0x03, 0x2C, 0xC2, 0x02, 0x02, 0x82, 0x0C, 0x01, 0x2C, 0xC2, 0x82, 0x02, 0x82,
  0x0C, 0x82, 0xC2, 0x81, 0x02, 0x84, 0x0C, 0x02, 0xC2, 0x02, 0x02, 0x82, 0x0C, 0x01, 0x2C, 0xC2,
  0x82, 0x02, 0x85, 0x2A, 0x00, 0x02, 0x86, 0xA2, 0x01, 0xCA, 0x2A, 0x84, 0xA2, 0x00, 0x2A, 0x82,
  0xA2, 0x05, 0x2A, 0xCA, 0x2A, 0xA2, 0x02, 0x02, 0x86, 0xA2, 0x81, 0x2A, 0x84, 0xA2, 0x0A, 0x2A,
  0xA2, 0xA2, 0x5F, 0x05, 0x05, 0x00, 0x5F, 0x05, 0x05, 0x50, 0x82, 0xA2, 0x81, 0xC2, 0x84, 0xA2,
  0x00, 0xC2, 0x87, 0xA2, 0x84, 0x2A, 0x00, 0x2C, 0x83, 0xA2, 0x82, 0xC2, 0x82, 0xA2, 0x82, 0xC2,
  0x83, 0xA2, 0x00, 0xC2, 0x82, 0xA2, 0x00, 0x02, 0x83, 0xA2, 0x84, 0x2A, 0x02, 0x2C, 0xA2, 0xA2,
  0x82, 0x2A, 0x81, 0xA2, 0xC7, 0x00, 0x8F, 0xF0, 0x87, 0xA2, 0x0D, 0x8F, 0x08, 0x08, 0x00, 0x8F,
  0xF8, 0x08, 0x08, 0x5F, 0x05, 0x05, 0x00, 0x5F, 0xF5, 0x81, 0x05, 0xFF};