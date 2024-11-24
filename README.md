# Dynamic Display Project for STM32H7B3I-DK

This project demonstrates a dynamic and interactive graphical application for the STM32H7B3I-DK board. It combines the power of TouchGFX for GUI development with the Keil µVision IDE for efficient rendering and animation. The project features a checkerboard pattern and a moving circle, showcasing a visually engaging display.

---

## Features

- **Checkerboard Pattern**: A grid of 17x11 boxes, dynamically updated with random colors every 10 ticks.
- **Moving Circle Animation**: The circle follows three distinct movement patterns:
  - Pattern 0: Diagonal to corners and back.
  - Pattern 1: Diagonal with reversal.
  - Pattern 2: Rectangular path along the screen’s perimeter.
- **Randomized Behavior**: Movement paths and starting positions are randomized for continuous engagement.
- **Efficient Rendering**: Uses the `invalidate()` method to refresh only the updated screen areas.

---

## Technologies Used

- **Board**: STM32H7B3I-DK
- **Development Environment**: Keil µVision 5.39
- **GUI Framework**: TouchGFX

---

## How It Works

1. **Initialization**: 
   - The screen setup is managed in `setupScreen()`, preparing the graphical elements.
   - `tearDownScreen()` cleans up resources when the screen is no longer needed.

2. **Checkerboard Pattern**:
   - A 17x11 grid dynamically updates its color every 10 ticks, creating a checkerboard effect.
   - Colors are refreshed using random RGB values and the `invalidate()` method.

3. **Circle Movement**:
   - Movement patterns are controlled by a state machine within `handleTickEvent()`.
   - The circle's X and Y coordinates are updated based on the active pattern.

4. **Randomization**:
   - After completing a pattern, the next pattern and position are selected randomly.

5. **Efficient Rendering**:
   - Only the affected UI elements (boxes or circle) are refreshed, optimizing performance and ensuring smooth animations.

---

## Installation and Setup

### Prerequisites

- **STM32H7B3I-DK board**
- **Keil µVision 5.39 IDE**
- **TouchGFX Framework**

### Steps

1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/repo-name.git
   ```
2. Open the project in Keil µVision.
3. Compile the project.
4. Flash the compiled program to the STM32H7B3I-DK board.

---

## Usage

1. Power on the STM32H7B3I-DK board.
2. Observe the dynamic checkerboard pattern and the moving circle on the display.
3. Patterns and behaviors will randomize after each movement cycle for continued engagement.

---

## Project Structure

- **Checkerboard Grid**: Defined in `mainView` class, handles dynamic updates.
- **Moving Circle**: Implements different movement patterns based on the `pattern` variable.
- **Core Methods**:
  - `setupScreen()`: Initializes graphical components.
  - `tearDownScreen()`: Cleans up resources.
  - `handleTickEvent()`: Drives animations and updates every tick.

---

## Contributing

Contributions are welcome! Fork the repository and submit a pull request with your enhancements or fixes.

---

## License

This project is licensed under the MIT License. See the LICENSE file for more details.

---

Enjoy creating dynamic displays with this project! 🎉
