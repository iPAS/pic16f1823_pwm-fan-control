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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.78
        Device            :  PIC16F1823
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.05 and above
        MPLAB 	          :  MPLAB X 5.20	
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

// get/set IO_DIP1 aliases
#define IO_DIP1_TRIS                 TRISAbits.TRISA2
#define IO_DIP1_LAT                  LATAbits.LATA2
#define IO_DIP1_PORT                 PORTAbits.RA2
#define IO_DIP1_WPU                  WPUAbits.WPUA2
#define IO_DIP1_ANS                  ANSELAbits.ANSA2
#define IO_DIP1_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define IO_DIP1_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define IO_DIP1_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define IO_DIP1_GetValue()           PORTAbits.RA2
#define IO_DIP1_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define IO_DIP1_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define IO_DIP1_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define IO_DIP1_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define IO_DIP1_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define IO_DIP1_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set IO_RUN aliases
#define IO_RUN_TRIS                 TRISAbits.TRISA5
#define IO_RUN_LAT                  LATAbits.LATA5
#define IO_RUN_PORT                 PORTAbits.RA5
#define IO_RUN_WPU                  WPUAbits.WPUA5
#define IO_RUN_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define IO_RUN_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define IO_RUN_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define IO_RUN_GetValue()           PORTAbits.RA5
#define IO_RUN_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define IO_RUN_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define IO_RUN_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define IO_RUN_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)

// get/set SCL aliases
#define SCL_TRIS                 TRISCbits.TRISC0
#define SCL_LAT                  LATCbits.LATC0
#define SCL_PORT                 PORTCbits.RC0
#define SCL_WPU                  WPUCbits.WPUC0
#define SCL_ANS                  ANSELCbits.ANSC0
#define SCL_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define SCL_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define SCL_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define SCL_GetValue()           PORTCbits.RC0
#define SCL_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define SCL_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define SCL_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define SCL_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define SCL_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define SCL_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set SDA aliases
#define SDA_TRIS                 TRISCbits.TRISC1
#define SDA_LAT                  LATCbits.LATC1
#define SDA_PORT                 PORTCbits.RC1
#define SDA_WPU                  WPUCbits.WPUC1
#define SDA_ANS                  ANSELCbits.ANSC1
#define SDA_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define SDA_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define SDA_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define SDA_GetValue()           PORTCbits.RC1
#define SDA_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define SDA_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define SDA_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define SDA_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define SDA_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define SDA_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set IO_DIP0 aliases
#define IO_DIP0_TRIS                 TRISCbits.TRISC2
#define IO_DIP0_LAT                  LATCbits.LATC2
#define IO_DIP0_PORT                 PORTCbits.RC2
#define IO_DIP0_WPU                  WPUCbits.WPUC2
#define IO_DIP0_ANS                  ANSELCbits.ANSC2
#define IO_DIP0_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define IO_DIP0_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define IO_DIP0_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define IO_DIP0_GetValue()           PORTCbits.RC2
#define IO_DIP0_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define IO_DIP0_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define IO_DIP0_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define IO_DIP0_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define IO_DIP0_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define IO_DIP0_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetPullup()             do { WPUCbits.WPUC3 = 1; } while(0)
#define RC3_ResetPullup()           do { WPUCbits.WPUC3 = 0; } while(0)
#define RC3_SetAnalogMode()         do { ANSELCbits.ANSC3 = 1; } while(0)
#define RC3_SetDigitalMode()        do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set IO_W1T1 aliases
#define IO_W1T1_TRIS                 TRISCbits.TRISC4
#define IO_W1T1_LAT                  LATCbits.LATC4
#define IO_W1T1_PORT                 PORTCbits.RC4
#define IO_W1T1_WPU                  WPUCbits.WPUC4
#define IO_W1T1_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IO_W1T1_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IO_W1T1_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IO_W1T1_GetValue()           PORTCbits.RC4
#define IO_W1T1_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IO_W1T1_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define IO_W1T1_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define IO_W1T1_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)

// get/set IO_W1T0 aliases
#define IO_W1T0_TRIS                 TRISCbits.TRISC5
#define IO_W1T0_LAT                  LATCbits.LATC5
#define IO_W1T0_PORT                 PORTCbits.RC5
#define IO_W1T0_WPU                  WPUCbits.WPUC5
#define IO_W1T0_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define IO_W1T0_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define IO_W1T0_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define IO_W1T0_GetValue()           PORTCbits.RC5
#define IO_W1T0_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define IO_W1T0_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define IO_W1T0_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define IO_W1T0_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)

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