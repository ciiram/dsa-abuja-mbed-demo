# DSA 2018 Abuja - IoT Practical Session

In this session we will develop four programs using the Mbed OS online compiler described in the lecture and deploy them on the [NUCLEO F446RE](https://os.mbed.com/platforms/ST-Nucleo-F446RE/) board.

The three applications are
1. The hardware hello world program *Blinky* that turns an LED on and off.
1. Temperature and humidity sensor
1. Motion detection
1. Data transmission using LoRaWAN

## Hardware requirements
1. NUCLEO-F446RE
1. LoRaWAN Transciever Shield (Custom made for DSA by ARM!)
1. USB Connector
1. Temperature sensor
1. Motion sensor


## Set Up

Follow these instructions from DSA 2018 Nyeri by Jan Jongboon to set up. Refer to the original repo [here](https://github.com/janjongboom/dsa2018-greenhouse-monitor).

1. Sign up for an Mbed account [https://os.mbed.com](https://os.mbed.com).
1. Go to the [NUCLEO-F446RE](https://os.mbed.com/platforms/ST-Nucleo-F446RE/) platform page and click *Add to your Mbed compiler*.
1. Import the example program into the Arm Mbed Compiler by clicking [this link](https://os.mbed.com/compiler/#import:https://github.com/ciiram/dsa-abuja-mbed-demo).
1. Click *Import*.
1. In the top right corner make sure you selected 'NUCLEO-F446RE'.

    ![Select the correct platform](media/mbed100.png)

This has cloned the repository.

1. Click *Compile*.

    ![Compile](media/mbed4.png)

1. A binary (.bin) file downloads, use drag-and-drop to copy the file to the NODE_F446RE device (like a USB mass storage device).

    **Note:** Here's a [video](https://youtu.be/L5TcmFFD0iw?t=1m25s).

1. When flashing is complete, hit the **RESET** button on the shield.


## Blinky
1. Open `select_program.h`.
1. Set:

    ```
    #define PROGRAM HELLO_WORLD
    ```
 1. Click *Compile*.

    ![Compile](media/mbed4.png)

1. A binary (.bin) file downloads, use drag-and-drop to copy the file to the NODE_F446RE device (like a USB mass storage device).
1. When flashing is complete, hit the **RESET** button on the shield.
1. You should notice the led on the nucleo board flashing.
1. Open `hello_world.cpp' and change the value of the constant

```
const float BLINK_PERIOD_S = 1
```

to a smaller or larger value and recompile the program and drag-and-drop the .bin to the Nucleo board. Confirm that the blinking rate has now changed.


## 


