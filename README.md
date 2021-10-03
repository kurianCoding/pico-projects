# PICO
pico is raspberry pi's micro controller Chirstened RP2040. It is an arm cortex 0(2 cores) micro controller.

# MORSE_CODE
this is meant to be a toy project. It will allow you to turn on the onboard led of pico.
You need to plugin the pico into your usb port, and install a serial communication program, 
I have tested this with minicom, send the character `j` for a dash(long duration led blink),
any other key will be a dot(short duration blink).
# COMPILE
- To compile download arm-eab-none-gcc, keep the binary folder(of this compiler) in your path.
- Clone this repository, and make build directory
- cd into the build directory and use 
	- cmake and
	- make
- move the .uf2 file to your rpi2040

- use minicom to connect to rpi with serial communication.
- type `j`, and you will see led turn on for 200 ms
- any other char and you will see it turn on for 10 ms

# CLIENT
- `go run serial_write.go`, is a program to write serial



