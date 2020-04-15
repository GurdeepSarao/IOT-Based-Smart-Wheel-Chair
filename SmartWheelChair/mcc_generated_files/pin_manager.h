/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.79.0
        Device            :  PIC18F43K22
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.10 and above
        MPLAB 	          :  MPLAB X 5.30	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set A0_LM_PWM aliases
#define A0_LM_PWM_TRIS                 TRISAbits.TRISA0
#define A0_LM_PWM_LAT                  LATAbits.LATA0
#define A0_LM_PWM_PORT                 PORTAbits.RA0
#define A0_LM_PWM_ANS                  ANSELAbits.ANSA0
#define A0_LM_PWM_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define A0_LM_PWM_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define A0_LM_PWM_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define A0_LM_PWM_GetValue()           PORTAbits.RA0
#define A0_LM_PWM_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define A0_LM_PWM_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define A0_LM_PWM_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define A0_LM_PWM_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set A1_LM_BIN2 aliases
#define A1_LM_BIN2_TRIS                 TRISAbits.TRISA1
#define A1_LM_BIN2_LAT                  LATAbits.LATA1
#define A1_LM_BIN2_PORT                 PORTAbits.RA1
#define A1_LM_BIN2_ANS                  ANSELAbits.ANSA1
#define A1_LM_BIN2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define A1_LM_BIN2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define A1_LM_BIN2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define A1_LM_BIN2_GetValue()           PORTAbits.RA1
#define A1_LM_BIN2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define A1_LM_BIN2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define A1_LM_BIN2_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define A1_LM_BIN2_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set A2_LM_BIN1 aliases
#define A2_LM_BIN1_TRIS                 TRISAbits.TRISA2
#define A2_LM_BIN1_LAT                  LATAbits.LATA2
#define A2_LM_BIN1_PORT                 PORTAbits.RA2
#define A2_LM_BIN1_ANS                  ANSELAbits.ANSA2
#define A2_LM_BIN1_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define A2_LM_BIN1_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define A2_LM_BIN1_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define A2_LM_BIN1_GetValue()           PORTAbits.RA2
#define A2_LM_BIN1_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define A2_LM_BIN1_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define A2_LM_BIN1_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define A2_LM_BIN1_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set STBY aliases
#define STBY_TRIS                 TRISAbits.TRISA3
#define STBY_LAT                  LATAbits.LATA3
#define STBY_PORT                 PORTAbits.RA3
#define STBY_ANS                  ANSELAbits.ANSA3
#define STBY_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define STBY_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define STBY_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define STBY_GetValue()           PORTAbits.RA3
#define STBY_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define STBY_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define STBY_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define STBY_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set A4_RM_AIN1 aliases
#define A4_RM_AIN1_TRIS                 TRISAbits.TRISA4
#define A4_RM_AIN1_LAT                  LATAbits.LATA4
#define A4_RM_AIN1_PORT                 PORTAbits.RA4
#define A4_RM_AIN1_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define A4_RM_AIN1_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define A4_RM_AIN1_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define A4_RM_AIN1_GetValue()           PORTAbits.RA4
#define A4_RM_AIN1_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define A4_RM_AIN1_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)

// get/set A2_RM_AIN2 aliases
#define A2_RM_AIN2_TRIS                 TRISAbits.TRISA5
#define A2_RM_AIN2_LAT                  LATAbits.LATA5
#define A2_RM_AIN2_PORT                 PORTAbits.RA5
#define A2_RM_AIN2_ANS                  ANSELAbits.ANSA5
#define A2_RM_AIN2_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define A2_RM_AIN2_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define A2_RM_AIN2_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define A2_RM_AIN2_GetValue()           PORTAbits.RA5
#define A2_RM_AIN2_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define A2_RM_AIN2_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define A2_RM_AIN2_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define A2_RM_AIN2_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set D5 aliases
#define D5_TRIS                 TRISAbits.TRISA6
#define D5_LAT                  LATAbits.LATA6
#define D5_PORT                 PORTAbits.RA6
#define D5_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define D5_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define D5_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define D5_GetValue()           PORTAbits.RA6
#define D5_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define D5_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set D4 aliases
#define D4_TRIS                 TRISAbits.TRISA7
#define D4_LAT                  LATAbits.LATA7
#define D4_PORT                 PORTAbits.RA7
#define D4_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define D4_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define D4_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define D4_GetValue()           PORTAbits.RA7
#define D4_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define D4_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)

// get/set REAR_ECHO aliases
#define REAR_ECHO_TRIS                 TRISBbits.TRISB0
#define REAR_ECHO_LAT                  LATBbits.LATB0
#define REAR_ECHO_PORT                 PORTBbits.RB0
#define REAR_ECHO_WPU                  WPUBbits.WPUB0
#define REAR_ECHO_ANS                  ANSELBbits.ANSB0
#define REAR_ECHO_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define REAR_ECHO_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define REAR_ECHO_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define REAR_ECHO_GetValue()           PORTBbits.RB0
#define REAR_ECHO_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define REAR_ECHO_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define REAR_ECHO_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define REAR_ECHO_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define REAR_ECHO_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define REAR_ECHO_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set REAR_TRIG aliases
#define REAR_TRIG_TRIS                 TRISBbits.TRISB1
#define REAR_TRIG_LAT                  LATBbits.LATB1
#define REAR_TRIG_PORT                 PORTBbits.RB1
#define REAR_TRIG_WPU                  WPUBbits.WPUB1
#define REAR_TRIG_ANS                  ANSELBbits.ANSB1
#define REAR_TRIG_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define REAR_TRIG_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define REAR_TRIG_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define REAR_TRIG_GetValue()           PORTBbits.RB1
#define REAR_TRIG_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define REAR_TRIG_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define REAR_TRIG_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define REAR_TRIG_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define REAR_TRIG_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define REAR_TRIG_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set D6 aliases
#define D6_TRIS                 TRISCbits.TRISC0
#define D6_LAT                  LATCbits.LATC0
#define D6_PORT                 PORTCbits.RC0
#define D6_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define D6_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define D6_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define D6_GetValue()           PORTCbits.RC0
#define D6_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define D6_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)

// get/set D7 aliases
#define D7_TRIS                 TRISCbits.TRISC1
#define D7_LAT                  LATCbits.LATC1
#define D7_PORT                 PORTCbits.RC1
#define D7_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define D7_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define D7_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define D7_GetValue()           PORTCbits.RC1
#define D7_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define D7_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)

// get/set BUZZER aliases
#define BUZZER_TRIS                 TRISCbits.TRISC2
#define BUZZER_LAT                  LATCbits.LATC2
#define BUZZER_PORT                 PORTCbits.RC2
#define BUZZER_ANS                  ANSELCbits.ANSC2
#define BUZZER_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define BUZZER_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define BUZZER_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define BUZZER_GetValue()           PORTCbits.RC2
#define BUZZER_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define BUZZER_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define BUZZER_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define BUZZER_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set EN aliases
#define EN_TRIS                 TRISCbits.TRISC4
#define EN_LAT                  LATCbits.LATC4
#define EN_PORT                 PORTCbits.RC4
#define EN_ANS                  ANSELCbits.ANSC4
#define EN_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define EN_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define EN_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define EN_GetValue()           PORTCbits.RC4
#define EN_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define EN_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define EN_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define EN_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSC7 = 0; } while(0)

// get/set FRONT_TRIG aliases
#define FRONT_TRIG_TRIS                 TRISDbits.TRISD0
#define FRONT_TRIG_LAT                  LATDbits.LATD0
#define FRONT_TRIG_PORT                 PORTDbits.RD0
#define FRONT_TRIG_ANS                  ANSELDbits.ANSD0
#define FRONT_TRIG_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define FRONT_TRIG_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define FRONT_TRIG_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define FRONT_TRIG_GetValue()           PORTDbits.RD0
#define FRONT_TRIG_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define FRONT_TRIG_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define FRONT_TRIG_SetAnalogMode()      do { ANSELDbits.ANSD0 = 1; } while(0)
#define FRONT_TRIG_SetDigitalMode()     do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set FRONT_ECHO aliases
#define FRONT_ECHO_TRIS                 TRISDbits.TRISD1
#define FRONT_ECHO_LAT                  LATDbits.LATD1
#define FRONT_ECHO_PORT                 PORTDbits.RD1
#define FRONT_ECHO_ANS                  ANSELDbits.ANSD1
#define FRONT_ECHO_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define FRONT_ECHO_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define FRONT_ECHO_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define FRONT_ECHO_GetValue()           PORTDbits.RD1
#define FRONT_ECHO_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define FRONT_ECHO_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define FRONT_ECHO_SetAnalogMode()      do { ANSELDbits.ANSD1 = 1; } while(0)
#define FRONT_ECHO_SetDigitalMode()     do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set RS aliases
#define RS_TRIS                 TRISDbits.TRISD3
#define RS_LAT                  LATDbits.LATD3
#define RS_PORT                 PORTDbits.RD3
#define RS_ANS                  ANSELDbits.ANSD3
#define RS_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define RS_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define RS_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define RS_GetValue()           PORTDbits.RD3
#define RS_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define RS_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define RS_SetAnalogMode()      do { ANSELDbits.ANSD3 = 1; } while(0)
#define RS_SetDigitalMode()     do { ANSELDbits.ANSD3 = 0; } while(0)

// get/set RD6 procedures
#define RD6_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define RD6_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define RD6_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define RD6_GetValue()              PORTDbits.RD6
#define RD6_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define RD6_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define RD6_SetAnalogMode()         do { ANSELDbits.ANSD6 = 1; } while(0)
#define RD6_SetDigitalMode()        do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set RD7 procedures
#define RD7_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define RD7_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define RD7_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define RD7_GetValue()              PORTDbits.RD7
#define RD7_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define RD7_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define RD7_SetAnalogMode()         do { ANSELDbits.ANSD7 = 1; } while(0)
#define RD7_SetDigitalMode()        do { ANSELDbits.ANSD7 = 0; } while(0)

// get/set E0_RM_PWM aliases
#define E0_RM_PWM_TRIS                 TRISEbits.TRISE0
#define E0_RM_PWM_LAT                  LATEbits.LATE0
#define E0_RM_PWM_PORT                 PORTEbits.RE0
#define E0_RM_PWM_ANS                  ANSELEbits.ANSE0
#define E0_RM_PWM_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define E0_RM_PWM_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define E0_RM_PWM_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define E0_RM_PWM_GetValue()           PORTEbits.RE0
#define E0_RM_PWM_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define E0_RM_PWM_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define E0_RM_PWM_SetAnalogMode()      do { ANSELEbits.ANSE0 = 1; } while(0)
#define E0_RM_PWM_SetDigitalMode()     do { ANSELEbits.ANSE0 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/