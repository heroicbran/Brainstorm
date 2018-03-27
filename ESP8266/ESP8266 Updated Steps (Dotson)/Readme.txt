1. Connect ESP according to diagram PDF

2. Test AT commands using FTDI serial cable and Putty/Arduino Serial Monitor

3. Check Baud and CR/NL

4. To Flash, use bin file and flasher. Be sure GPIO0 is connected. Close all other	   monitors. Use 115200 baud rate. Ground -> Unground reset pin to wake up    unresponsive ESP. (See other readme in ESP_IOT..etc folder).

5. If it isn't working, reset ESP power and try again. A MAC address should appear. Sometimes the MAC address only appears upon stopping and starting again.


Other Note: Must ground FTDI cable too! (AKA: HAve a common ground between power supply and arduino, or else bad data transmission)

Normally, RX -> TX.

On the Arduino, RX -> RX
