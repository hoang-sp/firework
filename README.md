
# Firework Animation in C++ (graphics.h)

This project displays a simple animated firework effect using the `graphics.h` library in C++. It uses randomly generated angles, colors, and radii to simulate fireworks on screen.

## 💻 Features

- Randomly generated firework locations
- Explosion effect using lines at different angles
- Multiple fireworks drawn on the screen with delays
- Uses `graphics.h` for simple graphics rendering

## 🛠 Requirements

- C++ compiler (Dev-C++, Turbo C++, or Code::Blocks with graphics.h support)
- `graphics.h` library installed  
  (For Dev-C++ or Code::Blocks, use WinBGIm: [https://winbgim.codecutter.org/](https://winbgim.codecutter.org/))

## ▶️ How to Run

1. Clone this repository or download the `.cpp` file.
2. Make sure `graphics.h` is set up correctly in your compiler.
3. Compile and run the program.

```bash
g++ firework.cpp -o firework -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
./firework
