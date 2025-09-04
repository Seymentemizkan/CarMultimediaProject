#ifndef SEATSCREENVIEW_HPP
#define SEATSCREENVIEW_HPP

#include <gui_generated/seatscreen_screen/SeatScreenViewBase.hpp>
#include <gui/seatscreen_screen/SeatScreenPresenter.hpp>

class SeatScreenView : public SeatScreenViewBase
{
public:
    SeatScreenView();
    virtual ~SeatScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    // Override virtual functions from base class
    virtual void SeatLiftfunction() override;
    virtual void SeatLowerfunction() override;
    virtual void SeatTiltfunction() override;
    virtual void SeatTiltBackwardsfunction() override;
    
    virtual void handleTickEvent();

protected:
    // Member variables for servo positions
    uint16_t liftPosition;    // Current lift position (0-180 degrees) - PH6 servo
    uint16_t tiltPosition;    // Current tilt position (0-180 degrees) - PB15 servo
    uint32_t tickCounter;

private:

};


#endif // SEATSCREENVIEW_HPP
