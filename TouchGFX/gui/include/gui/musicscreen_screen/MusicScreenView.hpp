#ifndef MUSICSCREENVIEW_HPP
#define MUSICSCREENVIEW_HPP

#include <gui_generated/musicscreen_screen/MusicScreenViewBase.hpp>
#include <gui/musicscreen_screen/MusicScreenPresenter.hpp>

class MusicScreenView : public MusicScreenViewBase
{
public:
    MusicScreenView();
    virtual ~MusicScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // MUSICSCREENVIEW_HPP
