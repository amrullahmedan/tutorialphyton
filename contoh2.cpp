#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#define VIDEO_INT 0x10 // BIOS Video Interrupt
int main(void) 
{
asm mov ah, 0x09; // AH = 9 heks.
asm mov al, 0x41; // AL = 41 heks., huruf A
asm mov bh, 0x00; // BH = 0 heks., halaman layar
asm mov bl, 0x07; // BL = 7 heks., warna huruf
asm mov ch, 0x00; // CH dan CL menentukan banyak
asm mov cl, 0x01; // huruf yang akan dicetak
asm int VIDEO_INT; // Interupsi BIOS 10h

}

getch(); 
return 
EXIT_SUCCESS;  }
