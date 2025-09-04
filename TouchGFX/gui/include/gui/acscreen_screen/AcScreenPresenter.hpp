#ifndef ACSCREENPRESENTER_HPP
#define ACSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class AcScreenView;

class AcScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    AcScreenPresenter(AcScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~AcScreenPresenter() {}

private:
    AcScreenPresenter();

    AcScreenView& view;
};

#endif // ACSCREENPRESENTER_HPP
