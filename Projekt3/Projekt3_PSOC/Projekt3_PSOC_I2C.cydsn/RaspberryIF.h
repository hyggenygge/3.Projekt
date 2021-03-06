/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#ifndef RASPBERRYIF_H
#define RASPBERRYIF_H

#include "PSOC_controller.h"
#include <stdint.h>
class PSOC_controller;
    
class RaspberryIF
{
    public:
        RaspberryIF();
        void outOfPill();
        void pillsTaken();
        void pillsNotTaken();
        void dispenseDone();
        void setControllerPtr(PSOC_controller* ptr);
        PSOC_controller* getControllerPtr();
        void I2C_1_ISR_ExitCallback();
    
    private:
        //read og write buffer.
        uint8_t readBuf[8];
        uint8_t writeBuf[8];
        PSOC_controller* PSOC_controller_Ptr;
        
        
    
};
    #endif

/* [] END OF FILE */
