# Christmas Tree Console Animation by Denis D

![ChristmassTree Screenshot](https://github.com/user-attachments/assets/bdc70cf4-02f4-4d4f-b1f9-357b1254367e)

## Description
This is a simple C++ console application that displays a festive Christmas tree with blinking colored lights and ornaments. The tree is drawn using ASCII characters, and the lights blink in a loop to create a holiday animation effect. The project was created by Denis D on December 25, 2024, as a fun holiday-themed coding exercise.

- **Features:**
  - A 10-level Christmas tree with a trunk.
  - Colored lights (red, green, yellow, aqua, blue) that blink every 500 milliseconds.
  - Yellow ornaments scattered across the tree.
  - A "Merry Christmas!!" greeting at the top.
  - A loading delay for dramatic effect.

## Requirements
- **Operating System:** Windows (due to the use of `windows.h` for console color manipulation).
- **Compiler:** Any C++ compiler (e.g., MinGW, MSVC) that supports the C++11 standard or later.
- **Libraries:** Standard C++ libraries (`iostream`, `thread`, `chrono`) and Windows-specific `windows.h`.

## Installation
1. **Clone the Repository:**
   ```bash
   git clone https://github.com/denare/christmassTree.git
   cd christmasTree
   ```

2. **Compile the Code:**
   Use a C++ compiler to build the program. For example, with `g++`:
   ```bash
   g++ main.cpp -o christmassTree.exe
   ```

3. **Run the Program:**
   ```bash
   christmassTree.exe
   ```

## Usage
- Upon running the program, you’ll see a "LOADING,, Please wait..." message for 2 seconds.
- The Christmas tree will then appear with blinking lights, cycling through 10 iterations.
- Press any key to exit after the animation completes.
- Enjoy the festive spirit in your console!

## Code Structure
- **`main.cpp`:** The main source file containing the logic for:
  - Setting console text colors using `SetConsoleTextAttribute`.
  - Drawing the tree with `drawTree()` function.
  - Managing the blinking effect with `this_thread::sleep_for`.

## Customization
You can tweak the following to personalize the animation:
- **Tree Height:** Adjust `treeHeight` in `drawTree()` for a taller or shorter tree.
- **Blink Speed:** Modify the `chrono::milliseconds(500)` value to make lights blink faster or slower.
- **Colors:** Change the `lightColor` array to use different console color codes (e.g., 4 = red, 2 = green, etc.).
- **Loop Duration:** Alter the `while (i<=15)` condition to control how many times the tree redraws.

## Limitations
- This program is Windows-specific due to the use of `windows.h`. For cross-platform compatibility, you’d need to replace the color-setting logic (e.g., with ANSI escape codes for Linux/macOS).
- The console window must be wide enough to display the tree without wrapping.

## Author
- **Author**: Denis D
- **Date**: December 25, 2024
- **GitHub**: [denare](https://github.com/denare)

## License
This project is open-source, Feel free to use, modify, and share it!

## Acknowledgments
- Built with love for the holiday season! 🎄
- Special thanks to the C++ community for inspiration.

---

Ahsanteni sana, Thank you very much
