#ifndef ACSCREENVIEW_HPP
#define ACSCREENVIEW_HPP

#include <gui_generated/acscreen_screen/AcScreenViewBase.hpp>
#include <gui/acscreen_screen/AcScreenPresenter.hpp>

class AcScreenView : public AcScreenViewBase
{
public:
    AcScreenView();
    virtual ~AcScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    // Motor control functions
    virtual void FanMode1function() override;
    virtual void FanMode2function() override;
    virtual void FanMode3function() override;
    virtual void FanMode4function() override;
    virtual void FanModeMaxfunction() override;


protected:
};

#endif // ACSCREENVIEW_HPP
