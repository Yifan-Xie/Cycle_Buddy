<h2 align="center">Cycle Buddy</h2>  
<p align="center">
  <a href="https://github.com/OmarJabri7/Cycle_Buddy">
    ⭐️<a href="https://yifan-xie.github.io/"><strong>Explore Our website»</strong></a>
    <br />
    <br />
    <img src="Images/Logo.png" alt="Logo" >
  </a>
    <br />
    <br />
    ⭐️<a href="https://Yifan-Xie.github.io/Cycle_Buddy/"><strong>Explore the doxygen»</strong></a>  
  <p align="center">
    To keep people can ride bike more safely on the road.
    <br />
    <br />
    <a href="https://www.youtube.com/channel/UC4mHw6LXU8YYIvdZxgI5Btw"><img height=40 src="Images/youtube_social_circle_red.png"></img></a>&nbsp;&nbsp;&nbsp;&nbsp;
    <a href="https://hackaday.io/project/179217-cycle-buddy"><img height=40 src="Images/hackaday.png"></img></a>&nbsp;&nbsp;&nbsp;&nbsp;
    <a href="https://twitter.com/buddy_cycle"><img height=40 src="Images/2021%20Twitter%20logo%20-%20blue.png"></img></a>&nbsp;&nbsp;&nbsp;&nbsp;
    <br />


<div align="center">

[![Contributors](https://img.shields.io/github/contributors/OmarJabri7/Cycle_Buddy.svg?style=for-the-badge)](https://github.com/OmarJabri7/Cycle_Buddy/graphs/contributors)
[![Forks](https://img.shields.io/github/forks/OmarJabri7/Cycle_Buddy.svg?style=for-the-badge)](https://github.com/OmarJabri7/Cycle_Buddy/network/members)
[![Stars](https://img.shields.io/github/stars/OmarJabri7/Cycle_Buddy.svg?style=for-the-badge)](https://github.com/OmarJabri7/Cycle_Buddy/stargazers)
[![Issues](https://img.shields.io/github/issues/OmarJabri7/Cycle_Buddy.svg?style=for-the-badge)](https://github.com/OmarJabri7/Cycle_Buddy/issues)
[![License](https://img.shields.io/github/license/OmarJabri7/Cycle_Buddy.svg?style=for-the-badge)](https://github.com/OmarJabri7/Cycle_Buddy/blob/main/LICENSE)

</div>

<!-- TOC -->
<details open="open">
  <summary><h2 style="display: inline-block">Contents</h2></summary>
  <ol>
    <li><a href="#about">About</a>
    <li><a href="#software">Software</a></li>
    <li><a href="#hardware">Hardware</a></li>       
    </li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#Packages">Packages</a>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#Results & Real-Time Responsivness">Results & Real-Time Responsivness</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
  </ol>
</details>


<!-- Project descirption -->

## About
We are a group of graduate students currently studying at University of Glasgow.  This is our course project for Real-Time Embedded Programming Project advised by Dr. Bernd Porr and Dr. Nicholas Bailey. For our team, two members major in Robotics & Ai, one member majors in Electronic and Electrical Engineering.<br>

Our project, Cycle Buddy, is a system that detects cars that endanger the bikers on the road. Once the car overpasses our biker in a relative high speed and within a close distance, the system can detect this dangerous action and responds by capturing the car's photo and recognize its car plate number. Then it will send the id, the photo and the velocity& distance to the mobile application as long as the online database. With those infomation recorded as evidence, the bikers can then use it to contact local law enforcement to report the issue. <br />

⭐️ [**Doxygen about the project**](https://omarjabri7.github.io/Cycle_Buddy/)

### Circuit of Cycle Buddy: 

<p align="center">
  <img height = 400 src="Images/MicrosoftTeams-image.png">
  <br><br>    
  <b>Figure 1: Indoor circuit of Cycle Buddy</b>    
</p>
<br><br><br />



## Software

### Necessary:
* [**Android Studio**](https://developer.android.com/studio)	(**Mobile Phone Application**) 

  ​	Android Studio provides the fastest tools for building apps on every type of Android device. We use it for connecting the raspberry pi and get real-time information from the raspberry pi, such as car distance, car velocity, and bike velocity.

* [**Visual Studio 2019**](https://visualstudio.microsoft.com/zh-hans/vs/)    (**Raspberry pi threads**) 

  ​	Visual Studio 2019 has the latest features to bring real-time collaboration so it is convenient for us to write C++ code for their project.

* [**Firebase**](https://firebase.google.com/)    (**Real time database**) 

  ​	Firebase is Google’s mobile application development platform that helps you build, improve, and grow your app. It manages our data and stores our license plate numbers which are from the Pi camera.

* [**Cmake**](https://cmake.org/)    (**Build up the full project**) 

  ​	CMake is used to control the software compilation process using simple platform and compiler independent configuration files, and generate native makefiles and workspaces that can be used in the compiler environment of our choice.

* [**Doxygen**](https://www.doxygen.nl/index.html)    (**document generation tool**) 

  ​	Doxygen is a document generation tool that extracts documents from code, organizes them, and outputs them into beautiful documents (HTML, PDF, RTF, etc.).

  ​	With the Doxygen tool, programmers can write code directly in the document, no longer need to write a separate document for a function of the code, thus keeping the document and code as consistent as possible.

*  [**OpenALPR - Automatic License Plate Recognition**](https://www.openalpr.com/) (**API**)

  ​	This API can recognize the license plate number directly from the picture, we find a GB (Great Britain, UK) lib trained model and use it.

### Optional: 
* Putty

  ​	Find the IP address of raspberry pi simply. 

* VNC (Other Remote Desktop Services are also fine) 

  ​	Use ssh services to log in to the raspberry pi so that we do not need to use HDMI or screen to connect to the raspberry pi. It is also convenient to use UI to code in raspberry pi.

*  Typora 

  ​	Edit markdown and Html files for Doxygen and web page.

* [**Search for the car information**](https://vehicleenquiry.service.gov.uk/?_ga=2.97692959.1629293611.1618412250-1021591735.1618412250)

  ​	Here is the government website to search for the car information, so when we get the license plate number, we can search for it here.
<br><br><br />




## Hardware
### Main device:
* [Raspberry Pi 3 Model B +](https://thepihut.com/products/raspberry-pi-3-model-b-plus?src=raspberrypi) (￡33.90, **1** is needed, not included)

  ​	The Raspberry Pi 3 Model B is the earliest model of the third-generation Raspberry Pi. In our project, It can receive the real-time signals of the GPIO from all the sensors and deal with the real-time data.

### Sensors:
* [Hall sensor](https://www.amazon.co.uk/AZDelivery-Linear-Magnetic-Sensor-Arduino/dp/B07DPVTKBB/ref=sr_1_4_sspa?dchild=1&keywords=Hall+Effect+Sensor&qid=1618406619&sr=8-4-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUEyV1lEMzJNSUE5S1A4JmVuY3J5cHRlZElkPUEwMjc5ODE1MTI4TUc5SFI1R0gxUSZlbmNyeXB0ZWRBZElkPUEwMDIzNjQwMTkzSk03UDI4WFdROSZ3aWRnZXROYW1lPXNwX2F0ZiZhY3Rpb249Y2xpY2tSZWRpcmVjdCZkb05vdExvZ0NsaWNrPXRydWU=) (￡4.49, **1** is needed)

  ​	We use a hall sensor to detect the velocity of the bike. The theory is to put the magnets On the axle of the bicycle wheel. Make sure the hall sensor is close to magnets enough so that it can detect the magnetic field when the bike runs.

* [Ultrasonic sensor](https://www.amazon.co.uk/HC-SR04-Ultrasonic-Distance-Measuring-Arduino/dp/B01DM8MRTS/ref=sr_1_7?dchild=1&keywords=Ultrasonic+Sensor&qid=1618407336&sr=8-7)（￡3.99,  **1** is needed)

  ​	The Ultrasonic sensor is to detect the distance between the bicycle and car. Besides, according to the velocity of the bicycle, it can calculate the velocity of the car. 

* [Pi camera](https://www.amazon.co.uk/dp/B07XBKC6H7/ref=cm_sw_r_u_apa_glt_fabc_74TKMY2AH1HFZ4SVKC7J) （￡10.99, **1** is needed) 

  ​	The Pi camera is to capture the picture of the car, especially capture the license plate number of the car. We find a feasible location for the Pi camera so that the 

### Other auxiliary tools :

* Male/Male, Female/Female and Male/Female wires ，magnets (approximately ￡ 2.34)
* GPIO Breakout Kit Expansion Board For Raspberry Pi 3 B+ (￡14.49)
* Power supply for Raspberry Pi or Power bank. (￡ 13.56)



​	**Overall**, it costs us ￡49.86 except the **Raspberry Pi 3 Model B +** for the project.
<br><br><br />




## Roadmap
See the [open issues](https://github.com/OmarJabri7/Cycle_Buddy/issues) for a list of proposed features (and known issues).

### Threads of Sensors 
3 threads: One is for ultrasonic sensors, one for hall sensor, the  rest one is for Pi camera.
<br><br><br />




## Packages
* WiringPi 
* Raspicam
* OpenALPR
* JSON
* Cmake
<br><br />

### Packages Installations
Before install any packages, please run the following:<br>
sudo apt-get update && upgrade<br>
1. [**WiringPi**](http://wiringpi.com/):<br>
   `sudo apt-get install wiringpi`<br/>
2. [**Raspicam**](https://sourceforge.net/projects/raspicam/files/) : (For Pi camera)<br>
    Download, build, make and install it.<br>
3. [**OpenALPR**](https://github.com/openalpr/openalpr):  (Github page)<br>
   `sudo apt-get update && sudo apt-get install -y openalpr openalpr-daemon openalpr-utils libopenalpr-dev`<br>
4. [**JSON Library**](https://github.com/nlohmann/json):  (Github page)<br>
   `sudo apt-get install -y nlohmann-json-dev`<br>
   If the above method does not work, please try the following:<br>
   a.`git clone https://github.com/nlohmann/json.git`<br>
   b.`cd json`<br>
   c.`mkdir build`<br>
   d.`cd build`<br>
   e.`cmake ..`<br>
   f.`make`<br>
   g.`make install`

5. [**Cmake**](https://cmake.org/) : (Website)<br>

   Click and download it from the website above.
<br><br><br />




## Usage
This project is built using Cmake and Makefiles in order to allow users to easily run our code and tets it.<br/>
Please follow these necessary steps: <br/>
1. Clone the project with: <br/>
    `git clone https://github.com/OmarJabri7/Cycle_Buddy.git`<br/>
2. Change directorites and relocate in Cycle_Buddy project: <br/>
    `cd Cycle_Buddy`<br/>
3. Link the necessary executables and libraries using CMake: <br/>
    `cmake .`<br/>
4. Build the project using make: <br/>
    `make`<br/>
5. Generate Unit tests and check if all components pass:<br>
   `make test`<br>
6. Run the test file labeled Cycle_Buddy: <br/>
    `./Cycle_Buddy`<br/>
For more <b>information</b>, please visit this [**Youtube link**](https://www.youtube.com/watch?v=VLvaPXP31dk)
<br><br><br />




## Results & Real-Time Responsivness:
1. The Gif below demonstrates the real time nature of the system, where each sensor reading is sent to the android application and plotted in real time:
  <p align="center">
    <img height = 400 src="Images/real-time-nature.gif">
    <br><br>    
    <b>Figure 2: Real time demo</b>    
  </p>
  
* It is clear to note how the timestamp emerging from the raspberry pi is the same as the one displayed in the android app. This reinforces the real-time responsiveness of our system.

  

2. The image below demonstrates how the system triggers the Pi Camera to capture an image of the car plate and recognizes it using the OpenAlpr API:
  <br>
<p align="center"><img width="400" height="500" alt="results-app" src="https://user-images.githubusercontent.com/35663665/115084304-985d4d80-9f00-11eb-9685-0603499ff66d.png" style="margin-right: 50px" title="Indoor test results"><img width="400" height="500" alt="results_outdoor" src="https://user-images.githubusercontent.com/35663665/115085960-4cf86e80-9f03-11eb-9872-c7964fdc4ee3.png" title="Outdoor test results"><br><br><b>Figure 3: Indoor and Outdoor results</b></p>
<br>

* On the left, we have the results from the indoor testing, where the car plate is displayed on a phone screen.<br>

* On the right, we have the results from the outdoor testing, where the car plate is captured by the camera on the streets of Glasgow.<br>

* Moral of the story is, that the api is capable enough to recognize the car plates within any environment. Moreover, the data displayed under the Car Plate are the sensor readings at the instant of capturing the image. Thus, ensuring that the system operates in real time.
<br><br><br /> 

3. The final thing to notice is how the system saves the relevant data once the image is captured, reinforcing the idea of a real-time embedded system:
<p align="center">
    <img src="Images/Results+RealTime.png">
    <br><br>    
    <b>Figure 4: Real time & Results snapshot</b>    
  </p>
  
* Notice how the car plate is equivalent (green square), alongside car distance, velocity and bike velocity (red square).
<br><br><br />
<!-- Contributing -->

## Contributing
This is an open-source project, therefore, just fork it and build up the project according to the README.md in every document.
<br><br><br />


<!-- License -->
## License
Distributed under the GPL-3.0 License. See [`LICENSE`](https://github.com/OmarJabri7/Cycle_Buddy/blob/main/LICENSE) for more information.
<br><br><br />


<!-- Contact Info -->
## Contact

* Omar Jabri - [@Omar Jabri](https://github.com/OmarJabri7)
<br />

* Chang Liu - [@Chang Liu](https://github.com/Cliu1993)
<br />

* Yifan Xie - [@Yifan Xie](https://github.com/Yifan-Xie)
<br />

⭐️ **Project address** - [@Project address](https://github.com/OmarJabri7/Cycle_Buddy)
