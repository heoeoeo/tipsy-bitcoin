# 🍻 Tipsy Bitcoin

**An ASCII-rendered Bitcoin logo that spins like it’s had one too many.**
C-powered. Beer-fueled. Terminal-native.



## 🎬 Demo

![Tipsy Bitcoin demo](assets/tnbc_demo.gif)



## 🧠 How It Works

- Static ASCII art of the Bitcoin logo
- Frame-by-frame rotation using basic 2D transformation
- ANSI escape codes to update terminal in real-time



## ⚙️ Build & Run

```bash
gcc -o tipsy_bitcoin bitcoin.c -lm
./tipsy_bitcoin
```