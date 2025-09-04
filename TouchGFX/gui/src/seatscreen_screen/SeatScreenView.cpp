#include <gui/seatscreen_screen/SeatScreenView.hpp>
#include "main.h"

#ifdef __cplusplus  
extern "C" {
#endif

void set_ph6_servo_position(uint16_t angle);  // PH6 servo function for lift control
void set_pb15_servo_position(uint16_t angle); // PB15 servo function for tilt control

#ifdef __cplusplus
}
#endif

SeatScreenView::SeatScreenView() :
    liftPosition(0),     // Start lift at middle position  
    tiltPosition(0),     // Start tilt at middle position
    tickCounter(0)
{
}

void SeatScreenView::setupScreen()
{
    SeatScreenViewBase::setupScreen();
    
    // Initialize lift servo to middle position (0 degrees) - PH6
    liftPosition = 0;
    set_ph6_servo_position(liftPosition);
    
    // Initialize tilt servo to middle position (0 degrees) - PB15
    tiltPosition = 0;
    set_pb15_servo_position(tiltPosition);
    
    tickCounter = 0;
}

void SeatScreenView::tearDownScreen()
{
    SeatScreenViewBase::tearDownScreen();
}

void SeatScreenView::SeatLiftfunction()
{
    // Seat lift function implementation - move PH6 servo up
    // This function is called repeatedly while upperbuton is held down
    if (liftPosition < 180)
    {
        liftPosition++;
        set_ph6_servo_position(liftPosition);
    }
}

void SeatScreenView::SeatLowerfunction()
{
    // Seat lower function implementation - move PH6 servo down
    // This function is called repeatedly while lowerbutton is held down
    if (liftPosition > 0)
    {
        liftPosition--;
        set_ph6_servo_position(liftPosition);
    }
}

void SeatScreenView::SeatTiltfunction()
{
    // Seat tilt forward function - move PB15 servo forward incrementally
    // This function is called repeatedly while tiltbuton is held down
    if (tiltPosition < 180)
    {
        tiltPosition++;
        set_pb15_servo_position(tiltPosition);
    }
}

void SeatScreenView::SeatTiltBackwardsfunction()
{
    // Seat tilt backward function - move PB15 servo backward incrementally
    // This function is called repeatedly while tiltbackwardsbuton is held down
    if (tiltPosition > 0)
    {
        tiltPosition--;
        set_pb15_servo_position(tiltPosition);
    }
}

void SeatScreenView::handleTickEvent()
{
    // This function is called every frame by TouchGFX
    // Can be used for other periodic tasks if needed
    tickCounter++;
}
