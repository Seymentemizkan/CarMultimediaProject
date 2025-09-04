#include <gui/acscreen_screen/AcScreenView.hpp>
#include "main.h"

#ifdef __cplusplus  
extern "C" {
#endif

void set_motor_pwm(uint32_t value);
void set_dc_motor_speed(uint8_t speed_percent);

#ifdef __cplusplus
}
#endif

AcScreenView::AcScreenView()
{

}

void AcScreenView::setupScreen()
{
    AcScreenViewBase::setupScreen();
}

void AcScreenView::tearDownScreen()
{
    AcScreenViewBase::tearDownScreen();
}

void AcScreenView::FanMode1function()
{
    // Set motor speed to 20% (1/5 of full power)
    // PA8 (M1B) will get PWM at 20% duty cycle
    // PA15 (M1A) will remain LOW
    set_dc_motor_speed(25);
}
void AcScreenView::FanMode2function()
{
    // Set motor speed to 20% (1/5 of full power)
    // PA8 (M1B) will get PWM at 20% duty cycle
    // PA15 (M1A) will remain LOW
    set_dc_motor_speed(50);
}
void AcScreenView::FanMode3function()
{
    // Set motor speed to 20% (1/5 of full power)
    // PA8 (M1B) will get PWM at 20% duty cycle
    // PA15 (M1A) will remain LOW
    set_dc_motor_speed(75);
}
void AcScreenView::FanMode4function()
{
    // Set motor speed to 20% (1/5 of full power)
    // PA8 (M1B) will get PWM at 20% duty cycle
    // PA15 (M1A) will remain LOW
    set_dc_motor_speed(100);
}
void AcScreenView::FanModeMaxfunction()
{
    // Set motor speed to 20% (1/5 of full power)
    // PA8 (M1B) will get PWM at 20% duty cycle
    // PA15 (M1A) will remain LOW
    set_dc_motor_speed(0);
}
