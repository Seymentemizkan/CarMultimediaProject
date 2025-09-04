#include <gui/lightscreen_screen/LightScreenView.hpp>
#include "main.h"

LightScreenView::LightScreenView()
{

}

void LightScreenView::setupScreen()
{
    LightScreenViewBase::setupScreen();
}

void LightScreenView::tearDownScreen()
{
    LightScreenViewBase::tearDownScreen();
}

void LightScreenView::turnLightOn()
{
    HAL_GPIO_WritePin(GPIOI,GPIO_PIN_1,GPIO_PIN_SET);
}

void LightScreenView::turnLightOff()
{
    HAL_GPIO_WritePin(GPIOI, GPIO_PIN_1, GPIO_PIN_RESET);

}

void LightScreenView::LightFogFunction() 
{
	HAL_GPIO_WritePin(GPIOI, GPIO_PIN_2, GPIO_PIN_SET);       

}
void LightScreenView::fogAutoFunction()
{
	HAL_GPIO_WritePin(GPIOI, GPIO_PIN_2, GPIO_PIN_RESET);

}

