

#ifndef _Nokia5110_H_
#define _Nokia5110_H_


#define LCD_CE  PTB0_OUT
#define LCD_Rst PTB1_OUT
#define LCD_DC  PTB2_OUT
#define LCD_DN  PTB3_OUT
#define LCD_Clk PTE6_OUT
#define LCD_Led PTB5_OUT

extern void Lcd_IO_Init();
extern void Lcd_Led(char o);
extern void msgbox(char myData,char myCOMMON);
extern void Lcd_Init();
extern void Lcd_Goto(char x,char y);
extern void Lcd_Cls();
extern void Lcd_Black();
extern void Lcd_Num_Write(char a,char x,char y);
extern void Lcd_Char_Write(char a,char x,char y);

#endif