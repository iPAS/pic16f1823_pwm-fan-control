# PIC16F1823: Monitoring Temperature and Fan Control, implemented via MCC

This code demonstrates the tasks of 
    slave-I2C monitoring on temperature with DS18B20 for PWM Control on PIC16F1823 micro-controller. 
It is implemented with assistant of Microchip Code Configurator (MCC) and 
    [PIC18F library](https://github.com/jrmcguire/DS18B20).
To interface with the controller via Raspberry-Pi, 
    please use [this tutorial](https://elinux.org/Interfacing_with_I2C_Devices).


## Issues

* In case using a new version of XC8, 
    please use C90-compliant libraries which support feature '24-bit floating-point types' -- 
    [ref](http://ww1.microchip.com/downloads/en/DeviceDoc/xc8-2.10-full-install-release-notes-PIC.pdf).
