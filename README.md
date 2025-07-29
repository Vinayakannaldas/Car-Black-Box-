# Car-Black-Box-
This project implements a car black box system using a PIC16F877A microcontroller. It logs vehicle events (ignition, gear changes, collisions) along with time and speed to an external EEPROM. The system also features a password-protected menu for viewing, clearing, and downloading logs, as well as setting the time and changing the password.

## Project Brief

This project implements a car black box system using a PIC16F877A microcontroller. It logs vehicle events (ignition, gear changes, collisions) along with time and speed to an external EEPROM. The system also features a password-protected menu for viewing, clearing, and downloading logs, as well as setting the time and changing the password.

## Technologies Used

- **Microcontroller:** PIC16F877A
- **Development Environment:** MPLAB X IDE
- **Compiler:** XC8 Compiler
- **Peripherals:**- Character Liquid Crystal Display (CLCD)
  - Analog-to-Digital Converter (ADC)
  - Digital Keypad
  - I2C Communication Protocol
  - DS1307 Real-Time Clock (RTC)
  - 24C02 External EEPROM
  - Timers (Timer2 for system timeouts)
  - UART (for log download)
- **Programming Language:** C

## How to Compile and Run

This project is designed for the Microchip PIC16F877A microcontroller and is typically compiled using the XC8 compiler within MPLAB X IDE.

**Steps to Compile and Run:**

1. **Install MPLAB X IDE and XC8 Compiler:**
   - Download and install MPLAB X IDE from the Microchip website.
   - Download and install the XC8 C Compiler (v3.00 or compatible) from the Microchip website. Ensure the toolchain directory is correctly set in MPLAB X.
2. **Open the Project:**
   - Clone this repository to your local machine.
   - Open MPLAB X IDE.
   - Go to ```
     File > Open Project...
     ```

      and navigate to the cloned directory. Select the ```
     CAR_BLACK_BOX.X
     ```

      project folder and click ```
     Open Project
     ```

     .
3. **Build the Project:**
   - In MPLAB X IDE, go to ```
     Clean and Build Main Project
     ```

      (hammer with broom icon) or ```
     Build Main Project
     ```

      (hammer icon) in the toolbar.
   - Alternatively, go to ```
     Run > Clean and Build Main Project
     ```

      or ```
     Run > Build Main Project
     ```

     .
   - The compiler will generate the ```
     .hex
     ```

      file (e.g., ```
     CAR_BLACK_BOX.X.production.hex
     ```

     ) in the ```
     dist/default/production
     ```

      directory within your project folder.
4. **Program the Microcontroller:**
   - Connect your PIC16F877A development board to your computer using a compatible PIC programmer (e.g., PICkit 3, PICkit 4, ICD 3/4).
   - In MPLAB X IDE, select your connected programmer from the project properties or the dashboard.
   - Go to ```
     Run > Program Main Project
     ```

      (green arrow icon). This will flash the generated ```
     .hex
     ```

      file onto the PIC16F877A microcontroller.
5. **Hardware Setup:**
   - Ensure all peripherals (CLCD, keypad, ADC potentiometer, DS1307, EEPROM) are correctly wired to the PIC16F877A as per the circuit design.
   - Power on the development board.
6. **Interaction:**
   - The CLCD will display the default dashboard with time, event, and speed.
   - Use the connected digital keypad (SW1-SW5) to interact with the system:- SW1: Collision event
     - SW2: Increase gear
     - SW3: Decrease gear
     - SW4/SW5 (short press): Password entry digits (1/0)
     - SW4 (long press): Enter menu option / Confirm
     - SW5 (long press): Exit menu / Go back to dashboard
   - Connect a terminal emulator (e.g., PuTTY, Tera Term) to the UART port (typically RC6/RC7) at 9600 baud to view downloaded logs.

## Key Learnings / Challenges

- **Interfacing Multiple Peripherals:** Gained experience in integrating various hardware components like CLCD, ADC, RTC, EEPROM, and digital keypad with a microcontroller.
- **I2C Communication:** Deepened understanding of the I2C protocol for communication with DS1307 RTC and 24C02 EEPROM, including start/stop conditions, repeated start, and ACK/NACK handling.
- **Timer Management:** Implemented Timer2 for precise time-based operations, such as managing timeouts for login attempts and menu navigation.
- **Interrupt Handling:** Developed an Interrupt Service Routine (ISR) for Timer2 to ensure non-blocking timekeeping and system responsiveness.
- **State Machine Design:** Utilized a state machine approach (```
  control_flag
  ```

  ) to manage different operational modes (dashboard, login, menu, log view, etc.), enhancing code structure and maintainability.
- **Data Persistence:** Learned to store and retrieve critical data (logs, password) in non-volatile EEPROM, ensuring data integrity across power cycles.
- **User Interface (UI) Implementation:** Designed a basic character-based UI on the CLCD for user interaction and feedback.
- **Debugging Embedded Systems:** Faced challenges in debugging real-time issues and timing-sensitive operations, improving problem-solving skills in an embedded context.

## Author

Vinayak Annaldas
