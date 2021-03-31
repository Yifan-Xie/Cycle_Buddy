#include "sensors_lib.h"
#include "fast_cgi_web_api.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wiringPi.h>
#include <iostream>
#include <fstream>
#include <chrono>
#include <ctime>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <jsoncpp/json/json.h>
#define _USE_MATHS_DEFINES
#include <math.h>
using namespace std;
#define INIT 2147483647
#define PORT 8080

/** Sample Call Back class inheriting SensorCallback, 
    associated with the hall effect sensor
 */
class hallSampleCallback : public SensorCallback{
    /** Call back functin associated with hall effect sensor to return the velocity readiings.
    */
    /** @param v - velocity of bicycle wheel reading from hall sensor
    */
    virtual void dataIn(double v){
        if(v != INIT){
            auto time_now = chrono::system_clock::now();
            time_t timestamp = chrono::system_clock::to_time_t(time_now);
            printf("Velocity: %f m/s\n", v);
            cout << "TIMESTAMP HALL: " << ctime(&timestamp) << endl;
        }
    }
};
/** Sample Call Back class inheriting SensorCallback, 
    associated with the sonar sensor
 */
class sonarSampleCallback : public SensorCallback{
    /** Call back functin associated with sonar sensor to return the velocity readiings.
    */
    /** @param t - time of echo heading t obstacle and coming back as reading from sonar sensor
    */
    virtual void dataIn(double t){
        auto time_now = chrono::system_clock::now();
        time_t timestamp = chrono::system_clock::to_time_t(time_now);
        printf("Distance: %f cm\n", t/58);
        cout << "TIMESTAMP SONAR: " << ctime(&timestamp) << endl;
	double distance = t/58;
	string data = to_string(distance) + ", " + to_string(timestamp);
	const void *buffer_data = data.c_str();
	//double updated_t = t/58;
	//memcpy(&distance, &(updated_t),sizeof(distance));
	/** Send sensor readings to app */
	int sock = 0, conn_status;
	struct sockaddr_in server_addr;
	char buffer[2048] = {0};
	sock = socket(AF_INET, SOCK_STREAM, 0);
	if(inet_pton(AF_INET, "100.81.12.70", &server_addr.sin_addr) <= 0) {
	  printf("\nInvalid address/ Address not supported \n");
	  }
	/*if(inet_pton(AF_INET, "100.81.12.118", &server_addr.sin_addr) <= 0){
	  printf("\nInvalid address/ Address not supported\n");
	  }*/
	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(PORT);
	conn_status = connect(sock,(struct sockaddr *)&server_addr, sizeof(server_addr));
	if(conn_status < 0){
	  perror("ERROR connecting\n");
	}
        else {
	  send(sock, buffer_data, sizeof distance, 0);
	  printf("Data sent\n");
	  close(sock);
	  }
    }
};

int main(int argc, char *argv[]){
    const int HALL = 0;
    const int SONAR = 1;
    int pinInHall = 1;
    int pinOutHall = 4;
    int pinInSonar = 24;
    int pinOutSonar = 23;
    Sensor* sonarSensor = new Sensor(&pinInSonar, &pinOutSonar);
    Sensor* hallEffectSensor = new Sensor(&pinInHall,&pinOutHall);
    sonarSampleCallback sonarCallback;
    hallSampleCallback hallCallback;
    sonarSensor->setCallBack(&sonarCallback);
    hallEffectSensor->setCallBack(&hallCallback);
    sonarSensor->start(&pinInSonar, &pinOutSonar, SONAR);
    hallEffectSensor->start(&pinInHall, &pinOutHall, HALL);
    getchar();
    sonarSensor->stop();
    hallEffectSensor->stop();
    delete sonarSensor;
    delete hallEffectSensor;
    return 0;
}
