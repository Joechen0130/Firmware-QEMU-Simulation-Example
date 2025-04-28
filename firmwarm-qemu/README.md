# Firmware QEMU Simulation Example

這是一個使用 QEMU 模擬 ARM 裸機程式的簡單專案，適合練習嵌入式開發、C 語言編譯、以及 CI/CD 自動化流程。

QEMU 是模擬硬體
arm-none-eabi-gcc 是「編譯」可以在 ARM 跑的 firmware
---

## 📦 環境需求

請先安裝以下工具：

- [QEMU](https://www.qemu.org/download/) （建議版本 8.0+）
- [ARM GNU Toolchain (arm-none-eabi-gcc)](https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads)

建議搭配 Visual Studio Code 開發。

---

## 🛠️ 安裝教學

### 1. 安裝 ARM GNU Toolchain

到官方網站下載：
> https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads

選擇 Windows 版本安裝。

安裝後，將 `bin` 資料夾路徑（例如：  
`C:\Program Files (x86)\GNU Arm Embedded Toolchain\10 2021.10\bin`）  
加入到系統環境變數 `Path`。

安裝完成後，可以在命令列確認：
```bash
arm-none-eabi-gcc --version
```

### 2. 安裝 QEMU
到官方網站下載 Windows 版本 QEMU。
>https://qemu.weilnetz.de/w64/
安裝後，將 QEMU 的 bin 資料夾路徑（例如：
C:\Program Files\qemu\)
加入到系統環境變數 Path。

確認安裝成功：
```bash
qemu-system-arm --version
```

### 3. Visual Studio Code 設定
安裝 C/C++ Extension

安裝 Makefile Extension（可選）

修改預設 Terminal（推薦使用 Command Prompt）

Ctrl + Shift + P → Terminal: Select Default Profile → 選 Command Prompt

## 🧑‍💻 使用方法
### 1.編譯 Firmware
在專案目錄下輸入：
```bash
make
```
會生成 firmware.elf
### 2.執行 QEMU 模擬器
```bash
qemu-system-arm -M versatilepb -kernel firmware.elf -nographic
```
預期輸出（Terminal 會顯示）：
```bash
Hello from QEMU!
Hello from QEMU!
Hello from QEMU!
...
```