# Rotary_ESP32S3_Powered_Software

<img src = "https://github.com/sbcshop/Rotary_ESP32S3_Powered_Software/blob/main/images/esp.png" width="648" height="432">

This GitHub page offers interfacing and getting started guide for Rotary Encoder Powered by ESP32 S3.


### Interfacing Details
- ESP32 and Touch interfacing

  | ESP32 | Touch Controller| Function |
  |---|---|---|
  |IO38 | SDA | Touch I2C  |
  |IO39 | SCL  | Touch I2C  |
  |IO47 | RESET  | Touch Reset  |
  |IO48 | INT  | Touch Intrrupt  |

- ESP32 and Display interfacing
  
  | ESP32 | Display Pin | Function |
  |---|---|---|
  | IO12 | SCLK | Clock pin of SPI interface for display|
  | IO11 | DIN  | MOSI (Master OUT Slave IN) data pin of SPI interface|
  | IO9 | DC | Data/Command pin of SPI interface|
  | IO10 | CS   | Chip Select pin of SPI interface for display|
  | IO14 | RST | Display Reset Pin |
  | IO46 | BL | Backlight of Display |
  
- ESP32 and micro SD card interfacing

  | ESP32 | microSD Card | Function |
  |---|---|---|
  | IO42 | SCLK |Clock pin of SPI interface for microSD card |
  | IO2 | DIN  | MOSI (Master OUT Slave IN) data pin of SPI interface|
  | IO41 | DOUT | MISO (Master IN Slave OUT) data pin of SPI interface|
  | IO1 | CS   | Chip Select pin of SPI interface for SDcard|

- RGBLed Interfacing with ESP32
  | ESP32 | RGB LED | Function |
  |---|---|---|
  | IO8 | DIN | WS2812 Data Pin|

- Rotary Encoder Interfacing with ESP32
  | ESP32 | Encoder |
  |---|---|
  | IO15 | OUT A | 
  | IO16 | OUT B | 


### 1. Configure and Setup Development Environment
   - Download Arduino IDE from [official site](https://www.arduino.cc/en/software) and install into your system. We have use Arduino IDE 1.8.19
   - Once installation done will add ESP32 S3 board support into IDE, for this first you need to add below link into preference:
     ``` https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json ```
     
     Select File > Preference, and add link as show in below image,
      <img src= "https://github.com/sbcshop/3.2_Touchsy_ESP-32_Resistive_Software/blob/main/images/preference_board.gif" />
      
   - Now will install ESP32 based boards as shown in below image,

     <img src= "https://github.com/sbcshop/3.2_Touchsy_ESP-32_Resistive_Software/blob/main/images/install_ESP32boards.gif" />
     
   - Once done, keeping default settings select the ESP32S3 Dev Module with suitable com port (may be different in your case) as shown below, 

     <img src="https://github.com/sbcshop/3.2_Touchsy_ESP-32_Resistive_Software/blob/main/images/select_esp32_with_comport.gif">
     
   - In case you don't see com port then you will have to install CP2102 driver from [Link](https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers?tab=downloads). Download and install as per your operating system.
     * check below one recommended for windows user
       
       <img src="https://github.com/sbcshop/Ardi-32_Software/blob/main/images/cp2102_driver_link.png" width="626" height="377">
       
     * Once successfully installed then it appears as shown in below image
       
       <img src="https://github.com/sbcshop/Ardi-32_Software/blob/main/images/device_manager_view.png" width="488" height="353">
       
### 2. Testing First Code
   - At this step you are all set to test codes, for easy getting started we have provided various demo [example codes](https://github.com/sbcshop/Rotary_ESP32S3_Powered_Software/tree/main/examples) in github which you can download and try. 
   - Open one example code in Arduino and make sure you have selected correct board with suitable com port, click on upload button to transfer code on ESP32 of Rotary Encoder.
     <img src="https://github.com/sbcshop/ArdiFi_Software/blob/main/images/uploadCode.gif">
     
   - Checkout other examples below and build your own custom program codes using those references.

### 3. Installing Libraries
   - Download [library zip file](https://github.com/sbcshop/Rotary_ESP32S3_Powered_Software/blob/main/libraries.zip) provided here in github.
   - Extract and copy files inside Document > Arduino > Libraries folder. Make sure to restart Arduino IDE whenever you update or add any libraries.

     <img src= "https://github.com/sbcshop/3.2_Touchsy_ESP-32_Resistive_Software/blob/main/images/library_files_path.png" />

### Example Codes
   
   In examples folder you will find demo examples to try out on UHF reader for ESP32 board, some demo listed below
   - [Display Demo](https://github.com/sbcshop/Rotary_ESP32S3_Powered_Software/tree/main/examples/display_demo) : testing code for display
   - [SD card Demo](https://github.com/sbcshop/Rotary_ESP32S3_Powered_Software/tree/main/examples/sdcard_demo) : code to test onboard micro SD card interfacing
   - [RGB LED](https://github.com/sbcshop/Rotary_ESP32S3_Powered_Software/tree/main/examples/rgb_demo) : Demo code for onboard RGB Led control
   - [More](https://github.com/sbcshop/Rotary_ESP32S3_Powered_Software/tree/main/examples)
   
   Using this sample code as a guide, you can modify, build, and share codes!!  
   
## Resources
  * [Schematic](https://github.com/sbcshop/Rotary_ESP32S3_Powered_Hardware/blob/main/Design%20Data/Sch%20Rotary%20Encoder.pdf)
  * [Hardware Files](https://github.com/sbcshop/Rotary_ESP32S3_Powered_Hardware)
  * [Step File](https://github.com/sbcshop/Rotary_ESP32S3_Powered_Hardware/blob/main/Mechanical%20Data/Rotary%20encoder%20esp32.step)
  * [Getting Started with ESP32 in Arduino](https://docs.espressif.com/projects/arduino-esp32/en/latest/)
  * [ESP32 S3 Hardware Reference](https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/hw-reference/index.html)
  * [ESP32 S3 WROOM 1 Datasheet](https://github.com/sbcshop/UHF_Reader_ESP-32_Software/blob/main/documents/esp32-s3-wroom-1_wroom-1u_datasheet_en.pdf)
  * [Arduino IDE 1 overview](https://docs.arduino.cc/software/ide-v1/tutorials/Environment)

## Related Products
  * [Roundy - Round LCD Board based on RP2040/ESP-12E](https://shop.sb-components.co.uk/products/roundy?variant=39785171681363) 
   
     ![Roundy - Round LCD Board based on RP2040/ESP-12E](https://shop.sb-components.co.uk/cdn/shop/products/roundypi.png?v=1650457581&width=300)   

  * [Round LCD HAT for Raspberry Pi](https://shop.sb-components.co.uk/products/round-lcd-hat-for-raspberry-pi?_pos=2&_sid=d01bb5d53&_ss=r) 
   
     ![Round LCD HAT for Raspberry Pi](https://shop.sb-components.co.uk/cdn/shop/products/LCDHATforPi.jpg?v=1619171154&width=300) 

  * [1.28” Round LCD HAT for Pico](https://shop.sb-components.co.uk/products/1-28-round-lcd-hat-for-pico?_pos=3&_sid=d01bb5d53&_ss=r) 
   
     ![1.28” Round LCD HAT for Pico](https://shop.sb-components.co.uk/cdn/shop/products/1.28_RoundLCDHATforPico.png?v=1622634190&width=300)
    
  * [1.28” Round LCD Breakout](https://shop.sb-components.co.uk/products/1-28-round-lcd-breakout?_pos=5&_sid=d01bb5d53&_ss=r) 
   
     ![1.28” Round LCD Breakout](https://shop.sb-components.co.uk/cdn/shop/products/01_a58fb20c-7cc7-4908-bfca-549b28c721b6.png?v=1677234693&width=300)

    
## Product License

This is ***open source*** product. Kindly check LICENSE.md file for more information.

Please contact support@sb-components.co.uk for technical support.
<p align="center">
  <img width="360" height="100" src="https://cdn.shopify.com/s/files/1/1217/2104/files/Logo_sb_component_3.png?v=1666086771&width=300">
</p>
