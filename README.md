# STM32_Drivers
Here are the FPU, UART, Timebase, GPIO, ADC and Circular drivers for the NUCLEO-F446RE board. 

This repository is part of a bigger project where an SMT32 NUCLEO board is connected to a ESP32 WROOM32 so it can later reach an AWS Lambda function to store, read and delete readings.
https://github.com/ewardq/STM32_with_ESP32_and_AWS_Lambda

## How to use this project
This project is meant to be used with the `STM32F4xx` series of microcontrollers. Clone the repository and use the specific-library files at your will on your STM32 project or directly copy the code in the `.c` and `.h` files.

The libraries are incremental; the GPIO #3 library also includes the #1 FPU and #2 UART libraries. The libraries in this proyect and their purpose are as follows:
1. Float Point Unit enable library to be able to use `float` data type. [ `fpu.c` | `fpu.h` ]
2. Universal Asynchronous Receiver-Transmitter library to be able to use the UART1 port to communicate with another microcontroller and the UART2 port as a debugging tool (Serial Console needed to visualize debugging messages from the STM32). [ `uart.c` | `uart.h` ]
3. Timebase library so you may use timers, delays and counters. [ `timebase.c` | `timebase.h` ]
4. General Purpose Input Output library as an example of how you can use the GPIO ports as digital input/output. [ `bsp.c` | `bsp.h` ]
5. Analog to Digital Converter library so you may use analog inputs and processes them later as you need. [ `adc.c` | `adc.h` ]
6. UART Communication Buffer library to better process characters comming from another microcontroller and later be able to send characters without risking overflow. [ `circular_buffer.c` | `circular_buffer.h` ]
7. ESP32 library to setup the ESP32 microcontroller in modem mode. [ `esp32_lib.c` | `esp32_lib.h` ]
8. ESP32 client library to interface with the ESP32 WROOM microcontroller in Modem mode. [ `esp32_client.c` | `esp32_client.h` ]

