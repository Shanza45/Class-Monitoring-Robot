# Class-Monitoring-Robot :
### Introduction:                                                                                                                                                         The proposed system will inspect the classes automatically. It will monitor each class and send email to head that teacher is taking class or not. This robot is capable of following line and avoiding hurdles by using Arduino, IR sensors and Ultra sonic sensors. 
#### FOR ESP32 CAM:
For this program, we will be utilizing OpenCV and Visual Studio. OpenCV is a free and open-source image processing library that is widely used not only in business but also in research and development. Microsoft Visual Studio is an IDE designed for various kinds of software development that includes completion tools, compilers, and other features to make the software development process easier.
                The primary heavy program will run on the server which will be our computer, or a Raspberry Pi can be used as a server. We will not only identify the person in this attendance system, but we will also save the person's information in a Microsoft Excel file. Furthermore, the amount of time they spent in the frame is documented in an excel sheet. A system is also developed to send email to head.
#### ESP-32 cam and Arduino Uno connection:
 ![image](https://user-images.githubusercontent.com/126508260/222667320-e4edce56-a2a7-4907-90cb-93de74a3fcb7.png)
**The pins will be attached as follows**:
Arduino Uno   :	ESP32 Cam
- 5V	            - 5V
- GND	           - GND
- Tx	           - U0R
- Rx	            -UOT
	
### Installation OF Arduino IDE:
We use Arduino IDE to program the ESP32-CAM board. So, you need to have installed Arduino IDE version 1.8.15.
 For downloading Arduino IDE[ click here](https://www.filehorse.com/download-arduino/61669/download/#google_vignette) 
### ESP32CAM Module Installation:
We will not use the general ESP webserver example in this case, but rather another streaming procedure. As a result, we must include another ESPCAM module. The esp32cam library offers an object-oriented API for interacting with the OV2640 camera on the ESP32 microcontroller. It is an esp32-camera library shell.
- Go to the following Github link and  [download the zip library.]( https://github.com/yoursunny/esp32cam)
 
**Once obtained, place this zip library in the Arduino Library Folder. To do so, take the following steps:**
- Launch Arduino ->Sketch -> Include Library -> Add.ZIP Library... -> Navigate to the extracted zip file -> add.
### ESP32 CAM BOARD INSTALLATION:
 You have to install esp32 version 1.0.5 from board manager.
**For installation you have to add ESP32 board manager by following steps:**
 Open file -> Preferences and paste the below URL in the Additional boards manager URLs field 
(https://dl.espressif.com/dl/package_esp32_index.json)                                                                                                                     
- Now open Tools -> Board Manager-> ESP32 Arduino.
### Code and Changes:                                                                                                                                                                              
You have to download the files in this[ Github directory](https://github.com/SaniaZahra08/Class-Monitoring-Robot) and change the following according to your wifi ssid and password.
1. const char* WIFI_SSID = "ssid"; 
2. const char* WIFI_PASS = "password";
### Setting up Arduino IDE:                                                                                                                                                                                   
 Set the tool menu:
- Board: “ESP32 Wrover Module” 
* Upload Speed: “115200” 
- Flash Frequency: “80MHz” 
* Flash Mode: “Q10” 
- Partition Scheme: “Huge APP (3MB No OTA/1 MB SPIFFS)” >
* Core Debug Level: “None” 
- Port: “COMx’ > According to your port connection
 ### UPLOADING:                                                                                                                                                                           
Compile it now and send it to the ESP32 CAM Board. However, when uploading, you must take a few steps each time.
- When you hit the upload button, make sure the IO0 pin is shorted to ground.
* If you see dots and dashes while uploading, instantly press the reset button.
- Once the code has been uploaded, disconnect the I01 pin from Ground and hit the reset button once more.
* If the output of the Serial monitor is still missing, hit the reset button once more.
- Here, copy the IP address visible, we will be using it to edit the URL in python code.                                                                                    
 ### INSTALL VISUAL STUDIO:             
  First download the visual studio[from here](https://visualstudio).   
Install the community version of Visual studio. Once downloaded install the software a welcome installation screen would appear, now select the community version. After this from numerous selecting boxes, and select Desktop development with C++. Now that you've chosen the, click on Install/Modify in the lower right area. This procedure will take some time because large files will be downloaded.
- Install the community version of Visual studio. Once downloaded install the software a welcome installation screen would appear, now select the community version. After this from numerous selecting boxes, and select Desktop development with C++. Now that you've chosen the, click on Install/Modify in the lower right area. This procedure will take some time because large files will be downloaded.
Once loaded, it will prompt you to restart your computer. As a result, that will be done immediately.
- Now download the code [from here](https://github.com/SaniaZahra08/Class-Monitoring-Robot) 
Place the downloaded files, including the facial recognition file, image folder, and requirements file, in a folder.
`pip install -r requirements.txt`
 **Now open command prompt** in the same directory and write:                                                                                                            
### Python Code for Face Recognition Attendance System: 
Now copy the code in file which name is face_detection.py.
- First, we need to update the URL variable in the code with the URL copied from Arduino serial monitor earlier.
* Secondly, update the path variable in the code with the path of the image folder folder.
THE CODE IS WORKING.
### EXCEL FILE:
Now, in the present working directory, open the Attendace.csv file. You will find all of the details about who was detected and when. 
### For Line Following and Obstacles Avoiding: 
Download and install Arduino IDE Version1.8.15. Then copy the code [ from here](https://github.com/SaniaZahra08/Class-Monitoring-Robot)  and paste on Arduino IDE
### Installlation of Library:
You have to install the NewPing library before uploading the code:                                                                                                     
- Follow this procedure to install the NewPing library                                       
* First download the NewPing.zip library >>      click on sketch tab >> Include Library>> Add.ZIP LIBRARY >> Select NewPing.zip file >> Done
- [NewPing Library Link ]( https://github.com/eliteio/Arduino_New_Ping)  
### Arduino IDE Setting:  
Select the board and port.-Board: “Arduino Nano”
* Port: “COMx’ > According to your port connection
**Upload the code:**                                                                                                                                                      First verify the code then upload it.
### Hardware Requirements:
- Arduino Nano
* IR sensor
- Ultrasonic sensors
* Moter Driver
- Wheels
* Male-male jumper wires                                                                                                           
- Male-female jumper wires    
 * Bettery                                                                                                                                                        
 - Dc gear motors                                                                                                                             
### Connection between hardware components: 
 ![image](https://user-images.githubusercontent.com/126508260/222678305-2087572a-d243-4bb4-858c-62de77560120.png)
