#include <gui/main_screen/mainView.hpp>
#include "stdlib.h"                   // Device header
																			// Include standard library header for random number generation

// Constructor for the mainView class, initializing the counter to 0
mainView::mainView():cntr(0)
{

}

// Function to set up the screen when it is first displayed
void mainView::setupScreen()
{
    mainViewBase::setupScreen();			// Call base class setup function
}

// Function to tear down the screen when it is hidden or destroyed
void mainView::tearDownScreen()
{
    mainViewBase::tearDownScreen();		// Call base class teardown function
}


int flag;															// Variable to control the movement pattern of the circle
int pattern;													// Variable to store the current pattern of the circle's movement

// Function that handles tick events (called repeatedly to update the screen)
void mainView::handleTickEvent()
{
	
	// Invalidate all the boxes to ensure they are redrawn
	// This invalidation forces a redraw, which is necessary for visual updates
	box1x1.invalidate();
	box1x2.invalidate();
	box1x3.invalidate();
	box1x4.invalidate();
	box1x5.invalidate();
	box1x6.invalidate();
	box1x7.invalidate();
	box1x8.invalidate();
	box1x9.invalidate();
	box1x10.invalidate();
	box1x11.invalidate();
	
	box2x1.invalidate();
	box2x2.invalidate();
	box2x3.invalidate();
	box2x4.invalidate();
	box2x5.invalidate();
	box2x6.invalidate();
	box2x7.invalidate();
	box2x8.invalidate();
	box2x9.invalidate();
	box2x10.invalidate();
	box2x11.invalidate();
	
	box3x1.invalidate();
	box3x2.invalidate();
	box3x3.invalidate();
	box3x4.invalidate();
	box3x5.invalidate();
	box3x6.invalidate();
	box3x7.invalidate();
	box3x8.invalidate();
	box3x9.invalidate();
	box3x10.invalidate();
	box3x11.invalidate();
	
	box4x1.invalidate();
	box4x2.invalidate();
	box4x3.invalidate();
	box4x4.invalidate();
	box4x5.invalidate();
	box4x6.invalidate();
	box4x7.invalidate();
	box4x8.invalidate();
	box4x9.invalidate();
	box4x10.invalidate();
	box4x11.invalidate();
	
	box5x1.invalidate();
	box5x2.invalidate();
	box5x3.invalidate();
	box5x4.invalidate();
	box5x5.invalidate();
	box5x6.invalidate();
	box5x7.invalidate();
	box5x8.invalidate();
	box5x9.invalidate();
	box5x10.invalidate();
	box5x11.invalidate();
	
	box6x1.invalidate();
	box6x2.invalidate();
	box6x3.invalidate();
	box6x4.invalidate();
	box6x5.invalidate();
	box6x6.invalidate();
	box6x7.invalidate();
	box6x8.invalidate();
	box6x9.invalidate();
	box6x10.invalidate();
	box6x11.invalidate();
	
	box7x1.invalidate();
	box7x2.invalidate();
	box7x3.invalidate();
	box7x4.invalidate();
	box7x5.invalidate();
	box7x6.invalidate();
	box7x7.invalidate();
	box7x8.invalidate();
	box7x9.invalidate();
	box7x10.invalidate();
	box7x11.invalidate();
	
	box8x1.invalidate();
	box8x2.invalidate();
	box8x3.invalidate();
	box8x4.invalidate();
	box8x5.invalidate();
	box8x6.invalidate();
	box8x7.invalidate();
	box8x8.invalidate();
	box8x9.invalidate();
	box8x10.invalidate();
	box8x11.invalidate();
	
	box9x1.invalidate();
	box9x2.invalidate();
	box9x3.invalidate();
	box9x4.invalidate();
	box9x5.invalidate();
	box9x6.invalidate();
	box9x7.invalidate();
	box9x8.invalidate();
	box9x9.invalidate();
	box9x10.invalidate();
	box9x11.invalidate();
	
	box10x1.invalidate();
	box10x2.invalidate();
	box10x3.invalidate();
	box10x4.invalidate();
	box10x5.invalidate();
	box10x6.invalidate();
	box10x7.invalidate();
	box10x8.invalidate();
	box10x9.invalidate();
	box10x10.invalidate();
	box10x11.invalidate();
	
	box11x1.invalidate();
	box11x2.invalidate();
	box11x3.invalidate();
	box11x4.invalidate();
	box11x5.invalidate();
	box11x6.invalidate();
	box11x7.invalidate();
	box11x8.invalidate();
	box11x9.invalidate();
	box11x10.invalidate();
	box11x11.invalidate();
	
	box12x1.invalidate();
	box12x2.invalidate();
	box12x3.invalidate();
	box12x4.invalidate();
	box12x5.invalidate();
	box12x6.invalidate();
	box12x7.invalidate();
	box12x8.invalidate();
	box12x9.invalidate();
	box12x10.invalidate();
	box12x11.invalidate();
	
	box13x1.invalidate();
	box13x2.invalidate();
	box13x3.invalidate();
	box13x4.invalidate();
	box13x5.invalidate();
	box13x6.invalidate();
	box13x7.invalidate();
	box13x8.invalidate();
	box13x9.invalidate();
	box13x10.invalidate();
	box13x11.invalidate();
	
	box14x1.invalidate();
	box14x2.invalidate();
	box14x3.invalidate();
	box14x4.invalidate();
	box14x5.invalidate();
	box14x6.invalidate();
	box14x7.invalidate();
	box14x8.invalidate();
	box14x9.invalidate();
	box14x10.invalidate();
	box14x11.invalidate();
	
	box15x1.invalidate();
	box15x2.invalidate();
	box15x3.invalidate();
	box15x4.invalidate();
	box15x5.invalidate();
	box15x6.invalidate();
	box15x7.invalidate();
	box15x8.invalidate();
	box15x9.invalidate();
	box15x10.invalidate();
	box15x11.invalidate();
	
	box16x1.invalidate();
	box16x2.invalidate();
	box16x3.invalidate();
	box16x4.invalidate();
	box16x5.invalidate();
	box16x6.invalidate();
	box16x7.invalidate();
	box16x8.invalidate();
	box16x9.invalidate();
	box16x10.invalidate();
	box16x11.invalidate();
	
	box17x1.invalidate();
	box17x2.invalidate();
	box17x3.invalidate();
	box17x4.invalidate();
	box17x5.invalidate();
	box17x6.invalidate();
	box17x7.invalidate();
	box17x8.invalidate();
	box17x9.invalidate();
	box17x10.invalidate();
	box17x11.invalidate();
	
	
	// Check if the counter (cntr) is divisible by 10 to update box colors
	if (cntr%10 == 0){
	
	//BOX CAT-1
	// Update color for BOX CAT-1
	uint8_t random_num1x1 = rand() % 10;
	uint8_t random_num1x2 = rand() % 10;
	uint8_t random_num1x3 = rand() % 10;
	
	// Randomly adjust the RGB values
	R1 = R1 + random_num1x1;
	G1 = G1 + random_num1x2;
	B1 = B1 + random_num1x3;
		
	// Set the color for all the boxes in the first pattern
	box1x1.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box1x3.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box1x5.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box1x7.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box1x9.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box1x11.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	
	box2x2.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box2x4.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box2x6.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box2x8.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box2x10.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	
	box3x1.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box3x3.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box3x5.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box3x7.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box3x9.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box3x11.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	
	box4x2.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box4x4.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box4x6.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box4x8.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box4x10.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	
	box5x1.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box5x3.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box5x5.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box5x7.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box5x9.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box5x11.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	
	box6x2.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box6x4.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box6x6.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box6x8.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box6x10.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	
	box7x1.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box7x3.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box7x5.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box7x7.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box7x9.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box7x11.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	
	box8x2.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box8x4.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box8x6.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box8x8.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box8x10.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	
	box9x1.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box9x3.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box9x5.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box9x7.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box9x9.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box9x11.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	
	box10x2.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box10x4.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box10x6.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box10x8.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box10x10.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	
	box11x1.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box11x3.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box11x5.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box11x7.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box11x9.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box11x11.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	
	box12x2.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box12x4.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box12x6.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box12x8.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box12x10.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	
	box13x1.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box13x3.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box13x5.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box13x7.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box13x9.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box13x11.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	
	box14x2.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box14x4.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box14x6.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box14x8.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box14x10.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	
	box15x1.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box15x3.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box15x5.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box15x7.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box15x9.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box15x11.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	
	box16x2.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box16x4.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box16x6.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box16x8.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box16x10.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	
	box17x1.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box17x3.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box17x5.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box17x7.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box17x9.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	box17x11.setColor(touchgfx::Color::getColorFromRGB(R1, G1, B1));
	
	
		
	//BOX CAT-2	
	// Update color for BOX CAT-2
	uint8_t random_num2x1 = rand() % 10;
	uint8_t random_num2x2 = rand() % 10;
	uint8_t random_num2x3 = rand() % 10;
	
	// Randomly adjust the RGB values
	R2 = R2 + random_num2x1;
	G2 = G2 + random_num2x2;
	B2 = B2 + random_num2x3;
	
	// Set the color for all the boxes in the second pattern
	box1x2.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box1x4.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box1x6.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box1x8.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box1x10.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	
	box2x1.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box2x3.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box2x5.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box2x7.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box2x9.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box2x11.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	
	box3x2.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box3x4.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box3x6.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box3x8.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box3x10.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	
	box4x1.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box4x3.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box4x5.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box4x7.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box4x9.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box4x11.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	
	box5x2.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box5x4.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box5x6.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box5x8.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box5x10.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	
	box6x1.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box6x3.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box6x5.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box6x7.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box6x9.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box6x11.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	
	box7x2.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box7x4.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box7x6.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box7x8.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box7x10.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	
	box8x1.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box8x3.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box8x5.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box8x7.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box8x9.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box8x11.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	
	box9x2.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box9x4.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box9x6.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box9x8.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box9x10.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	
	box10x1.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box10x3.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box10x5.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box10x7.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box10x9.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box10x11.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	
	box11x2.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box11x4.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box11x6.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box11x8.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box11x10.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	
	box12x1.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box12x3.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box12x5.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box12x7.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box12x9.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box12x11.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	
	box13x2.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box13x4.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box13x6.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box13x8.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box13x10.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	
	box14x1.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box14x3.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box14x5.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box14x7.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box14x9.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box14x11.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	
	box15x2.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box15x4.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box15x6.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box15x8.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box15x10.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	
	box16x1.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box16x3.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box16x5.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box16x7.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box16x9.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box16x11.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	
	box17x2.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box17x4.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box17x6.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box17x8.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	box17x10.setColor(touchgfx::Color::getColorFromRGB(R2, G2, B2));
	
	

	}
	
	
	// Invalidate all the boxes again to reflect the new color changes
	
	box1x1.invalidate();
	box1x2.invalidate();
	box1x3.invalidate();
	box1x4.invalidate();
	box1x5.invalidate();
	box1x6.invalidate();
	box1x7.invalidate();
	box1x8.invalidate();
	box1x9.invalidate();
	box1x10.invalidate();
	box1x11.invalidate();
	
	box2x1.invalidate();
	box2x2.invalidate();
	box2x3.invalidate();
	box2x4.invalidate();
	box2x5.invalidate();
	box2x6.invalidate();
	box2x7.invalidate();
	box2x8.invalidate();
	box2x9.invalidate();
	box2x10.invalidate();
	box2x11.invalidate();
	
	box3x1.invalidate();
	box3x2.invalidate();
	box3x3.invalidate();
	box3x4.invalidate();
	box3x5.invalidate();
	box3x6.invalidate();
	box3x7.invalidate();
	box3x8.invalidate();
	box3x9.invalidate();
	box3x10.invalidate();
	box3x11.invalidate();
	
	box4x1.invalidate();
	box4x2.invalidate();
	box4x3.invalidate();
	box4x4.invalidate();
	box4x5.invalidate();
	box4x6.invalidate();
	box4x7.invalidate();
	box4x8.invalidate();
	box4x9.invalidate();
	box4x10.invalidate();
	box4x11.invalidate();
	
	box5x1.invalidate();
	box5x2.invalidate();
	box5x3.invalidate();
	box5x4.invalidate();
	box5x5.invalidate();
	box5x6.invalidate();
	box5x7.invalidate();
	box5x8.invalidate();
	box5x9.invalidate();
	box5x10.invalidate();
	box5x11.invalidate();
	
	box6x1.invalidate();
	box6x2.invalidate();
	box6x3.invalidate();
	box6x4.invalidate();
	box6x5.invalidate();
	box6x6.invalidate();
	box6x7.invalidate();
	box6x8.invalidate();
	box6x9.invalidate();
	box6x10.invalidate();
	box6x11.invalidate();
	
	box7x1.invalidate();
	box7x2.invalidate();
	box7x3.invalidate();
	box7x4.invalidate();
	box7x5.invalidate();
	box7x6.invalidate();
	box7x7.invalidate();
	box7x8.invalidate();
	box7x9.invalidate();
	box7x10.invalidate();
	box7x11.invalidate();
	
	box8x1.invalidate();
	box8x2.invalidate();
	box8x3.invalidate();
	box8x4.invalidate();
	box8x5.invalidate();
	box8x6.invalidate();
	box8x7.invalidate();
	box8x8.invalidate();
	box8x9.invalidate();
	box8x10.invalidate();
	box8x11.invalidate();
	
	box9x1.invalidate();
	box9x2.invalidate();
	box9x3.invalidate();
	box9x4.invalidate();
	box9x5.invalidate();
	box9x6.invalidate();
	box9x7.invalidate();
	box9x8.invalidate();
	box9x9.invalidate();
	box9x10.invalidate();
	box9x11.invalidate();
	
	box10x1.invalidate();
	box10x2.invalidate();
	box10x3.invalidate();
	box10x4.invalidate();
	box10x5.invalidate();
	box10x6.invalidate();
	box10x7.invalidate();
	box10x8.invalidate();
	box10x9.invalidate();
	box10x10.invalidate();
	box10x11.invalidate();
	
	box11x1.invalidate();
	box11x2.invalidate();
	box11x3.invalidate();
	box11x4.invalidate();
	box11x5.invalidate();
	box11x6.invalidate();
	box11x7.invalidate();
	box11x8.invalidate();
	box11x9.invalidate();
	box11x10.invalidate();
	box11x11.invalidate();
	
	box12x1.invalidate();
	box12x2.invalidate();
	box12x3.invalidate();
	box12x4.invalidate();
	box12x5.invalidate();
	box12x6.invalidate();
	box12x7.invalidate();
	box12x8.invalidate();
	box12x9.invalidate();
	box12x10.invalidate();
	box12x11.invalidate();
	
	box13x1.invalidate();
	box13x2.invalidate();
	box13x3.invalidate();
	box13x4.invalidate();
	box13x5.invalidate();
	box13x6.invalidate();
	box13x7.invalidate();
	box13x8.invalidate();
	box13x9.invalidate();
	box13x10.invalidate();
	box13x11.invalidate();
	
	box14x1.invalidate();
	box14x2.invalidate();
	box14x3.invalidate();
	box14x4.invalidate();
	box14x5.invalidate();
	box14x6.invalidate();
	box14x7.invalidate();
	box14x8.invalidate();
	box14x9.invalidate();
	box14x10.invalidate();
	box14x11.invalidate();
	
	box15x1.invalidate();
	box15x2.invalidate();
	box15x3.invalidate();
	box15x4.invalidate();
	box15x5.invalidate();
	box15x6.invalidate();
	box15x7.invalidate();
	box15x8.invalidate();
	box15x9.invalidate();
	box15x10.invalidate();
	box15x11.invalidate();
	
	box16x1.invalidate();
	box16x2.invalidate();
	box16x3.invalidate();
	box16x4.invalidate();
	box16x5.invalidate();
	box16x6.invalidate();
	box16x7.invalidate();
	box16x8.invalidate();
	box16x9.invalidate();
	box16x10.invalidate();
	box16x11.invalidate();
	
	box17x1.invalidate();
	box17x2.invalidate();
	box17x3.invalidate();
	box17x4.invalidate();
	box17x5.invalidate();
	box17x6.invalidate();
	box17x7.invalidate();
	box17x8.invalidate();
	box17x9.invalidate();
	box17x10.invalidate();
	box17x11.invalidate();
	


// Switch-case for selecting different movement patterns for the circle
switch (pattern)	
{
	case 0:																// First pattern
	switch (flag) 
	{
  case 0:
  circle1.invalidate();									// Invalidate current circle position
	circle1.setXY(2*cntr, cntr);					// Move the circle diagonally
	if(cntr==200){												// When circle reaches corner, update flag and reset counter
	circle1.setX(400);
	circle1.setY(190); 										// Position of bottom right corner 
	flag = 1;
	cntr=0;
	}
	
	break;
  case 1:
	circle1.invalidate();									// Invalidate current circle position
	circle1.setY(190-cntr);								// Move the circle vertically
	if(cntr==200){												// When circle reaches corner, update flag and reset counter
	circle1.setX(400);
	circle1.setY(0); 											// Position of top right corner
	flag = 2;
	cntr=0;
	}
	break;
	case 2:
	circle1.invalidate();									// Invalidate current circle position
	circle1.setX(400 - cntr );						// Move the circle horizontally
	if(cntr==400){												// When circle reaches corner, update flag and reset counter
	circle1.setX(0);
	circle1.setY(0); 											// Position of top left corner
	flag = 0;
	cntr=0;
	pattern = rand()%3;										// Randomly select a new pattern
	}
	break;
	default:
	flag = 0;															// Default case to reset flag and select new pattern
	pattern = rand()%3;
}



	break;
	case 1:																// Second pattern
	switch (flag) 
	{
  case 0:
  circle1.invalidate();									// Invalidate current circle position
	circle1.setXY(2*cntr, cntr);					// Move the circle diagonally
	if(cntr==200){												// When circle reaches corner, update flag and reset counter
	circle1.setX(400);
	circle1.setY(190); 										// Position of bottom right corner
	flag = 1;
	cntr=0;
	}
	
	break;
  case 1:
  circle1.invalidate();													// Invalidate current circle position
	circle1.setXY(400-(2*cntr), 190-(cntr));			// Move the circle diagonally
	if(cntr==200){																// When circle reaches corner, update flag and reset counter
	circle1.setX(0);
	circle1.setY(0); 															// Position of top left corner
	flag = 0;
	cntr=0;
	pattern = rand()%3;										// Randomly select a new pattern
	}

	break;
	default:
	flag = 0;															// Default case to reset flag and select new pattern
	pattern = rand()%3;
}



	break;
	case 2:																// Third pattern
	switch (flag) 
	{
  case 0:
  circle1.invalidate();									// Invalidate current circle position
	circle1.setX(cntr);										// Move the circle horizontally
	if(cntr==400){												// When circle reaches corner, update flag and reset counter
	circle1.setX(400);
	circle1.setY(0); 											// Position of top right corner
	flag = 1;
	cntr=0;
	}
	
	break;
  case 1:
  circle1.invalidate();									// Invalidate current circle position
	circle1.setY(cntr);										// Move the circle vertically
	if(cntr==200){												// When circle reaches corner, update flag and reset counter
	circle1.setX(400);
	circle1.setY(190); 										// Position of bottom right corner
	flag = 2;
	cntr=0;
	}
	
	break;
  case 2:
  circle1.invalidate();									// Invalidate current circle position
	circle1.setX(400-cntr);								// Move the circle horizontally
	if(cntr==400){												// When circle reaches corner, update flag and reset counter
	circle1.setX(0);
	circle1.setY(190); 										// Position of bottom left corner
	flag = 3;
	cntr=0;
	}
	
	break;
  case 3:
  circle1.invalidate();									// Invalidate current circle position
	circle1.setY(190-cntr);								// Move the circle vertically
	if(cntr==200){												// When circle reaches corner, update flag and reset counter
	circle1.setX(0);
	circle1.setY(0); 											// Position of top left corner
	flag = 0;
	cntr=0;
	pattern = rand()%3;										// Randomly select a new pattern
	}
	
	break;
	default:
	flag = 0;															// Default case to reset flag and select new pattern
	pattern = rand()%3;
}
	break;
	default:
	pattern = rand()%3;;									// Default case to reset flag and select new pattern
}
	cntr++;																// Increment the counter

}