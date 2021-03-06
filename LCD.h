* File:   newfile.h
 * Author: GurdeepSarao
 *
 * Created on April 6, 2020, 4:52 PM
 */

#ifndef NEWFILE_H
#define	NEWFILE_H

#ifdef	__cplusplus
extern "C" {
#endif

    
void Lcd_SetBit(char data_bit) //Based on the Hex value Set the Bits of the Data Lines
{
    if(data_bit& 1) 
        D4_SetHigh();
    else
        D4_SetLow();

    if(data_bit& 2)
        D5_SetHigh();
    else
        D5_SetLow();

    if(data_bit& 4)
        D6_SetHigh();
    else
        D6_SetLow();

    if(data_bit& 8) 
        D7_SetHigh();
    else
        D7_SetLow();
}

void Lcd_Cmd(char a)
{
    RS_SetLow();           
    Lcd_SetBit(a); //Incoming Hex value
    EN_SetHigh();         
        __delay_ms(4);
        EN_SetLow();         
}


Lcd_Clear()
{
    Lcd_Cmd(0); //Clear the LCD
    Lcd_Cmd(1); //Move the curser to first position
}

void Lcd_Set_Cursor(char a, char b)
{
    char temp,z,y;
    if(a== 1)
    {
      temp = 0x80 + b - 1; //80H is used to move the curser
        z = temp>>4; //Lower 8-bits
        y = temp & 0x0F; //Upper 8-bits
        Lcd_Cmd(z); //Set Row
        Lcd_Cmd(y); //Set Column
    }
    else if(a== 2)
    {
        temp = 0xC0 + b - 1;
        z = temp>>4; //Lower 8-bits
        y = temp & 0x0F; //Upper 8-bits
        Lcd_Cmd(z); //Set Row
        Lcd_Cmd(y); //Set Column
    }
}
void Lcd_Start()
{
  Lcd_SetBit(0x00);
  for(int i=1065244; i<=0; i--)  NOP();  
  Lcd_Cmd(0x03);
    __delay_ms(5);
  Lcd_Cmd(0x03);
    __delay_ms(11);
  Lcd_Cmd(0x03); 
  Lcd_Cmd(0x02); //02H is used for Return home -> Clears the RAM and initializes the LCD
  Lcd_Cmd(0x02); //02H is used for Return home -> Clears the RAM and initializes the LCD
  Lcd_Cmd(0x08); //Select Row 1
  Lcd_Cmd(0x00); //Clear Row 1 Display
  Lcd_Cmd(0x0C); //Select Row 2
  Lcd_Cmd(0x00); //Clear Row 2 Display
  Lcd_Cmd(0x06);
}

void Lcd_Print_Char(char data)  //Send 8-bits through 4-bit mode
{
   char Lower_Nibble,Upper_Nibble;
   Lower_Nibble = data&0x0F;
   Upper_Nibble = data&0xF0;
   RS_SetHigh();             // => RS = 1
   Lcd_SetBit(Upper_Nibble>>4);             //Send upper half by shifting by 4
   EN_SetHigh();
   for(int i=2130483; i<=0; i--)  NOP(); 
   EN_SetLow();
   Lcd_SetBit(Lower_Nibble); //Send Lower half
   EN_SetHigh();
   for(int i=2130483; i<=0; i--)  NOP();
    EN_SetLow();
}

void Lcd_Print_String(char *a)
{
    int i;
    for(i=0;a[i]!='\0';i++)
       Lcd_Print_Char(a[i]);  //Split the string using pointers and call the Char function 
}




#ifdef	__cplusplus
}
#endif

#endif	/* NEWFILE_H */

