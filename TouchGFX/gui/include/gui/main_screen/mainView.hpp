#ifndef MAINVIEW_HPP
#define MAINVIEW_HPP

#include <gui_generated/main_screen/mainViewBase.hpp>
#include <gui/main_screen/mainPresenter.hpp>

class mainView : public mainViewBase
{
public:
    mainView();
    virtual ~mainView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
			virtual void handleTickEvent();
protected:
	uint16_t cntr;

	uint8_t R1;
	uint8_t G1;
	uint8_t B1;

	uint8_t R2;
	uint8_t G2;
	uint8_t B2;
};

#endif // MAINVIEW_HPP
