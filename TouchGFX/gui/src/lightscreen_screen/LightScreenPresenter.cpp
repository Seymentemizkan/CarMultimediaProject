#include <gui/lightscreen_screen/LightScreenView.hpp>
#include <gui/lightscreen_screen/LightScreenPresenter.hpp>
extern "C" {
#include "stm32f7508_discovery.h"
}

LightScreenPresenter::LightScreenPresenter(LightScreenView& v)
    : view(v)
{

}

void LightScreenPresenter::activate()
{

}

void LightScreenPresenter::deactivate()
{

}

