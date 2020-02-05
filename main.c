/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.78
        Device            :  PIC16F1823
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"
#include "DS18B20.h"
#include "mcc_generated_files/drivers/i2c_slave.h"


int16_t current_temp;
float current_celsius;


/******************************************************************************
 * Local functions
 ******************************************************************************/


void reset_cm3(void) {
    IO_RUN_SetLow();
    IO_RUN_SetDigitalOutput();
    __delay_ms(500);
    IO_RUN_SetDigitalInput();
}

void show_error_led(void) {
    while (1) {
        EPWM_LoadDutyValue(0x1FFF);
        __delay_ms(1000);
        EPWM_LoadDutyValue(0);
        __delay_ms(1000);
    }
}


/**
 * Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();


    uint16_t i = 0;
    EPWM_LoadDutyValue(i);
    int16_t previous_temp = OneWireTemp();  // In Celsius

    // An examples in https://www.microchip.com/forums/m1125901.aspx
    //
    i2c_driver_open();
    i2c_slave_open();
    i2c_slave_enable();
    
    i2c_slave_write(0x55);
    
    
//    reset_cm3();
    
    while (1)
    {
        current_temp = OneWireTemp();
        if ((current_temp >= previous_temp+1) || 
            (current_temp <= previous_temp-1))
        {
            i = (i == 0)? 1 : i << 2;
            EPWM_LoadDutyValue(i);
            
            previous_temp = current_temp;
            current_celsius = countToCelsius(current_temp);
        }
        
        __delay_ms(1000);
    }
}
/**
 End of File
*/