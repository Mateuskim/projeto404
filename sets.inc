@ Definicoes de valores de GPIO
.set GPIO_BASE,  0x53F84000
.set GPIO_DR, 0x0
.set GPIO_GDIR, 0x4
.set GPIO_PSR, 0x8

@ Definicoes de valores de GPT
.set GPT_BASE, 0x53FA0000
.set GPT_CR, 0x0
.set GPT_PR, 0x4
.set GPT_SR, 0x8
.set GPT_OCR1, 0x10
.set GPT_IR, 0xC

@ Constantes para os enderecos do TZIC
.set TZIC_BASE,             0x0FFFC000
.set TZIC_INTCTRL,          0x0
.set TZIC_INTSEC1,          0x84
.set TZIC_ENSET1,           0x104
.set TZIC_PRIOMASK,         0xC
.set TZIC_PRIORITY9,        0x424
