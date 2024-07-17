# <p align="center">FOTA_WITH-ADAS-Project-NTI</p>

## team member
### 👨‍🎓 👩‍🎓Members:



- <a href="https://www.linkedin.com/in/tarek-alaa-468117204?utm_source=share&utm_campaign=share_via&utm_content=profile&utm_medium=android_app" target="_blank">Tarek Alaa</a>

- <a href="https://www.linkedin.com/in/mohamed-dahy-6250631b6?utm_source=share&utm_campaign=share_via&utm_content=profile&utm_medium=android_app" target="_blank"> Mohamed Dahy</a>

- <a href="https://www.linkedin.com/in/mohamed-yasser-b9ba9716b/?utm_source=share&utm_campaign=share_via&utm_content=profile&utm_medium=ios_app" target="_blank">Mohamed Yasser</a>

- <a href="https://www.linkedin.com/in/ali-azzouz-b88b5b11a?utm_source=share&utm_campaign=share_via&utm_content=profile&utm_medium=android_app" target="_blank">Ali Azzouz</a>

- <a href="https://www.linkedin.com/in/roqaia-khalid-wagih-932804187/" target="_blank">Roqaia Khalid Wagih</a>

- <a href="https://www.linkedin.com/in/rehab-khaled-449b46246?utm_source=share&utm_campaign=share_via&utm_content=profile&utm_medium=android_app" target="_blank"> Rehab Khaled</a>

- <a href="https://www.linkedin.com/in/roaa-aiman-0613a41b7/" target="_blank">Roaa Aiman</a> 

- Mohamed Hussein
<hr>

### 👨‍💻 Technical Overview For the Project

**Technologies & Tools used :**

- Eclipse IDE for ARM <img width="100" align="center" src="/assets/Main/eclipseLogo.png">
- Cube IDE <img width="80" align="center" src="/assets/Main/cubeLogo.png">
- Arduino IDE <img width="80" align="center" src="/assets/Main/arduinoLogo.png">
- PuTTY: Serial Communication <img width="40" align="center" src="/assets/Main/puttyLogo.png">
- FireBase: Database for updated code to upload
- NodeRed: Dashboard
<hr>


## Table of Contents

- [General Overview For the Project](#General-Overview-For-the-Project)
- [Firmware Over The Air (FOTA)](#Firmware-Over-The-Air-(FOTA))
- [Advanced Driving Assistant System (ADAS)](#Advanced-Driving-Assistant-System-(ADAS))
- [CAN Communication](#CAN-Communication)
- [Special Thanks](#Special-Thanks)
- [Video](#Video)
## General Overview For the Project

![image](https://github.com/Tarek191020/FOTA-ADAS-Project/assets/109293965/9e4db5a2-ca06-4cfa-a68d-501ced92a1c7)

🌍 Firmware Over-The-Air (FOTA) updates and Advanced Driver Assistance Systems (ADAS) are revolutionizing the automotive industry. By seamlessly integrating FOTA and ADAS technologies, vehicles are becoming safer, smarter, and more efficient
#### Components:
![image](https://github.com/RoqaiaWagih/finalproject/assets/109293965/10b9d0e1-f1b1-46fd-9c75-ce33575705c7)
##### ESP32:
- Connects to the cloud via MQTT and interfaces with the STM32F103C6 microcontroller via UART.
##### Sensors:
- Various sensors (LDR, LM35, IR Sensor, MPU6050, Ultrasonic, DC Motor) are connected to the STM32F103C6 microcontroller, likely for data acquisition.
##### STM32F103C6 Microcontroller:
- This microcontroller gathers data from sensors and communicates with another STM32F13C6 microcontroller via CAN bus.
##### Actuators/Displays: 
- Buzzer, LED, and LCD are connected to the STM32F13C6 microcontroller to perform actions or display information based on the sensor data.
### FOTA
Firmware Over-The-Air (FOTA) enables wireless updates of vehicle software, ensuring efficient and convenient maintenance. By remotely updating firmware, automakers can enhance vehicle performance, security, and functionality with minimal disruption to drivers.
**FIREBASE**
-BOOTLOADER
-ESP32
writing..............
### ADAS

**Feature**
-Manual control
-Autonomes
-Auto-Parking 
### CAN Communication 



## Firmware Over The Air (FOTA)

## FIREBASE

![image](https://github.com/RoqaiaWagih/finalproject/assets/109293965/aaa70e0c-c34e-44cb-9e85-5a981a6180b5)

## NODE RED

![image](https://github.com/RoqaiaWagih/finalproject/assets/109293965/162995f1-6590-4a8d-b2e8-8f65718d8b26)
1- /FOTA/BootReply: This node is likely used to handle the reply or response from the bootloader after a command has been sent to it.

2- Reply: This node seems to be connected to a debug node, which could be used for logging or displaying messages received from the bootloader.

3- Read Protection Level, Jump to Application, Erase Flash, Upload Application, Get Chip ID: These are various actions that can be performed as part of the FOTA process. Each action node sends a specific command to the bootloader:

- Read Protection Level: Retrieves the current protection level of the firmware.
- Jump to Application: Instructs the bootloader to jump to the main application.
- Erase Flash: Commands the bootloader to erase the firmware from the flash memory.
- Upload Application: Sends the new firmware to the bootloader for uploading to the flash memory.
- Get Chip ID: Requests the chip identification from the bootloader.
4- /FOTA/Boot: This node appears to be the central node to which various command nodes are connected. It likely represents the endpoint that communicates with the bootloader.

5- /Check/Connection: This node might be used to verify the connection status with the bootloader or the device.


The debug panel on the right shows logs of messages such as "Write Success," "Upload Success," and "Jump Success," indicating successful execution of various commands.

## GUI

![image](https://github.com/RoqaiaWagih/finalproject/assets/109293965/4e5a70a9-119e-41bb-8c6e-03aec39c5025)
- The dashboard for an FOTA (Firmware Over The Air) project, was created using Node-RED. This dashboard provides a user interface to manage and perform various firmware update operations. Here’s an explanation of the dashboard components:

- Bootloader Options:

  - *READ PROTECTION LEVEL:* This button likely sends a command to the device's bootloader to retrieve and display the current protection level of the firmware.
  - *JUMP TO APPLICATION:* This button commands the bootloader to exit the bootloader mode and jump to the main application that is stored in the device’s memory.
  - *ERASE FLASH:* This button sends a command to the bootloader to erase the firmware stored in the device’s flash memory.
  - *UPLOAD APPLICATION:* This button allows the user to upload new firmware to the device. It sends the new firmware to the bootloader for storage in the flash memory.
  - *GET CHIP ID:* This button retrieves the unique chip identification number from the device, which can be useful for device verification and management.
- Bootloader Reply:

   - *Reply:* This section displays the responses or replies from the bootloader after a command has been executed. It is used to confirm whether the operations such as reading protection level, jumping to the application, erasing flash, uploading application, or getting chip ID were successful.
- /Check/Connection:

   - *text:* This section might display the status of the connection between the Node-RED dashboard and the device. It helps in ensuring that the device is properly connected before attempting any firmware update operations.

The dashboard is designed to provide an easy-to-use interface for performing and monitoring firmware updates on IoT devices. It simplifies the process of interacting with the bootloader, making it accessible even to users who might not be familiar with command-line interfaces.
## <p align="center"><a href="github.com/Tarek191020/FOTA-ADAS-Project/tree/main/FOTA" target="_blank">FOTA Porject</a></p>

## Bootlaoder

fetch packet
parsing data 
check CRC 
execute function
- Bootloader implementation for an STM32F103 microcontroller. Here's an explanation of the different sections and functions:

### Includes and Static Functions Declarations
```c
#include "bootloader.h"

// Static functions declarations
static void Bootloader_Get_Version(uint8_t *Host_Buffer);
static void Bootloader_Get_Help(uint8_t *Host_Buffer);
static void Bootloader_Get_Chip_Identification_Number(uint8_t *Host_Buffer);
static void Bootloader_Read_Protection_Level(uint8_t *Host_Buffer);
static void Bootloader_Erase_Flash(uint8_t *Host_Buffer);
static void Bootloader_Memory_Write(uint8_t *Host_Buffer);
static void Bootloader_Change_Read_Protection_Level(uint8_t *Host_Buffer);
static void Bootloader_Jump_To_User_App(uint8_t *Host_Buffer);
static uint8_t Bootloader_CRC_Verify(uint8_t *pData, uint32_t Data_Len, uint32_t Host_CRC);
static void Bootloader_Send_ACK(uint8_t Replay_Len);
static void Bootloader_Send_NACK(void);
static void Bootloader_Send_Data_To_Host(uint8_t *Host_Buffer, uint32_t Data_Len);
static uint8_t Host_Address_Verification(uint32_t Jump_Address);
static uint8_t Perform_Flash_Erase(uint32_t Page_address, uint8_t Number_Of_Pages);
```

### Global Variables
```c
static uint8_t BL_Host_Buffer[BL_HOST_BUFFER_RX_LENGTH];
static uint8_t appExists = 1;
static uint8_t Bootloader_Supported_CMDs[12] = { ... };
```
- `BL_Host_Buffer`: Buffer for receiving commands from the host.
- `appExists`: Flag to indicate if a user application exists in flash.
- `Bootloader_Supported_CMDs`: Array listing supported commands by their command codes.

### BL_UART_Fetch_Host_Command Function
```c
BL_Status BL_UART_Fetch_Host_Command(void) {
    // Function implementation for handling host commands
}
```
- This function initializes communication with the host, receives commands, and processes them based on their command codes.

### Static Functions Definitions (e.g., Bootloader_Get_Version)
These functions handle specific commands from the host:
- They validate CRC, execute the command (such as retrieving version information, chip identification, etc.), and send responses back to the host.

### Bootloader_Jump_To_User_App Function
```c
static void Bootloader_Jump_To_User_App(uint8_t *Host_Buffer) {
    // Function to jump to the user application if valid
}
```
- This function verifies CRC, checks if a valid user application exists in flash, and jumps to its entry point if valid.

### Bootloader_CRC_Verify Function
```c
static uint8_t Bootloader_CRC_Verify(uint8_t *pData, uint32_t Data_Len, uint32_t Host_CRC) {
    // Function to verify CRC of received data
}
```
- Calculates CRC of received data and compares it with CRC received from the host for validation.

### Bootloader_Send_ACK and Bootloader_Send_NACK Functions
```c
static void Bootloader_Send_ACK(uint8_t Replay_Len);
static void Bootloader_Send_NACK(void);
```
- Functions to send acknowledgment or not-acknowledgment responses to the host.

### Bootloader_Send_Data_To_Host Function
```c
static void Bootloader_Send_Data_To_Host(uint8_t *Host_Buffer, uint32_t Data_Len) {
    // Function to send data back to the host
}
```
- Sends data back to the host after processing commands.

### Perform_Flash_Erase and Flash_Memory_Write_Payload Functions
```c
static uint8_t Perform_Flash_Erase(uint32_t Page_address, uint8_t Number_Of_Pages);
static uint8_t Flash_Memory_Write_Payload(uint16_t *Host_Payload, uint32_t Payload_Start_Address, uint8_t Payload_Len);
```
- Functions for performing flash erase and writing data to flash memory.

### Bootloader_Change_Read_Protection_Level Function
```c
static void Bootloader_Change_Read_Protection_Level(uint8_t *Host_Buffer);
```
- Handles changing read protection levels on the microcontroller.

### Explanation
This bootloader code provides a framework to communicate with a host over UART, receive commands, perform operations like flash erase, memory write, and read operations like version retrieval or chip identification. It ensures data integrity using CRC checks and provides appropriate responses to the host based on command execution results.

If you're planning to share this on GitHub, consider adding comments to clarify each section further and documenting any assumptions or dependencies. Additionally, ensure that the header file `bootloader.h` is provided with necessary declarations and definitions for this code to compile and function correctly.
## <p align="center"><a href="github.com/Tarek191020/FOTA-ADAS-Project/tree/main/FOTA" target="_blank">Bootloader</a></p>
## Advanced Driving Assistant System (ADAS)
Advanced Driver Assistance Systems (ADAS) integrate various technologies to enhance driver safety and comfort. From emergency braking to adaptive cruise control, ADAS features work together to reduce accidents and improve the overall driving experience.

ADAS encompasses a wide range of features like Manual control, autonomous, auto parking, and automatic emergency braking. Real-world data demonstrates  that vehicles equipped with ADAS technologies have shown a significant reduction in accidents and enhanced driver safety.
## <p align="center"><a href="github.com/Tarek191020/FOTA-ADAS-Project/tree/main/FOTA" target="_blank">ADAS_Project</a></p>
## CAN Communication
##### CAN_H and CAN_L: 
- The two microcontrollers (STM32F103C6 and STM32F13C6) are connected via CAN_H and CAN_L lines, which are the differential signal lines used in CAN communication.
##### Data Flow:
- Sensor data from the STM32F103C6 is transmitted to the STM32F13C6 using CAN communication. The STM32F13C6 processes this data and controls the actuators (Buzzer, LED) and display (LCD).
## <p align="center"><a href="github.com/Tarek191020/FOTA-ADAS-Project/tree/main/FOTA" target="_blank">CAN_Project</a></p>
## Video 

## Special Thanks

I would like to express my sincere gratitude to our instructors....... for his valuable guidance and support throughout this internship.

## License
- license

## References
- [References to external resources](https://www.st.com/resource/en/datasheet/stm32f103ze.pdf)
