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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F1778
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
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

// get/set AN0 aliases
#define AN0_TRIS                 TRISAbits.TRISA0
#define AN0_LAT                  LATAbits.LATA0
#define AN0_PORT                 PORTAbits.RA0
#define AN0_WPU                  WPUAbits.WPUA0
#define AN0_OD                   ODCONAbits.ODA0
#define AN0_ANS                  ANSELAbits.ANSA0
#define AN0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define AN0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define AN0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define AN0_GetValue()           PORTAbits.RA0
#define AN0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define AN0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define AN0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define AN0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define AN0_SetPushPull()        do { ODCONAbits.ODA0 = 0; } while(0)
#define AN0_SetOpenDrain()       do { ODCONAbits.ODA0 = 1; } while(0)
#define AN0_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define AN0_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set INB2 aliases
#define INB2_TRIS                 TRISCbits.TRISC0
#define INB2_LAT                  LATCbits.LATC0
#define INB2_PORT                 PORTCbits.RC0
#define INB2_WPU                  WPUCbits.WPUC0
#define INB2_OD                   ODCONCbits.ODC0
#define INB2_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define INB2_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define INB2_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define INB2_GetValue()           PORTCbits.RC0
#define INB2_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define INB2_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define INB2_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define INB2_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define INB2_SetPushPull()        do { ODCONCbits.ODC0 = 0; } while(0)
#define INB2_SetOpenDrain()       do { ODCONCbits.ODC0 = 1; } while(0)

// get/set INB1 aliases
#define INB1_TRIS                 TRISCbits.TRISC1
#define INB1_LAT                  LATCbits.LATC1
#define INB1_PORT                 PORTCbits.RC1
#define INB1_WPU                  WPUCbits.WPUC1
#define INB1_OD                   ODCONCbits.ODC1
#define INB1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define INB1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define INB1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define INB1_GetValue()           PORTCbits.RC1
#define INB1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define INB1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define INB1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define INB1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define INB1_SetPushPull()        do { ODCONCbits.ODC1 = 0; } while(0)
#define INB1_SetOpenDrain()       do { ODCONCbits.ODC1 = 1; } while(0)

// get/set INA2 aliases
#define INA2_TRIS                 TRISCbits.TRISC2
#define INA2_LAT                  LATCbits.LATC2
#define INA2_PORT                 PORTCbits.RC2
#define INA2_WPU                  WPUCbits.WPUC2
#define INA2_OD                   ODCONCbits.ODC2
#define INA2_ANS                  ANSELCbits.ANSC2
#define INA2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define INA2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define INA2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define INA2_GetValue()           PORTCbits.RC2
#define INA2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define INA2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define INA2_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define INA2_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define INA2_SetPushPull()        do { ODCONCbits.ODC2 = 0; } while(0)
#define INA2_SetOpenDrain()       do { ODCONCbits.ODC2 = 1; } while(0)
#define INA2_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define INA2_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set INA1 aliases
#define INA1_TRIS                 TRISCbits.TRISC3
#define INA1_LAT                  LATCbits.LATC3
#define INA1_PORT                 PORTCbits.RC3
#define INA1_WPU                  WPUCbits.WPUC3
#define INA1_OD                   ODCONCbits.ODC3
#define INA1_ANS                  ANSELCbits.ANSC3
#define INA1_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define INA1_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define INA1_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define INA1_GetValue()           PORTCbits.RC3
#define INA1_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define INA1_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define INA1_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define INA1_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define INA1_SetPushPull()        do { ODCONCbits.ODC3 = 0; } while(0)
#define INA1_SetOpenDrain()       do { ODCONCbits.ODC3 = 1; } while(0)
#define INA1_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define INA1_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

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