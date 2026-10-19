#include<stdio.h>
int main(void){
	double speed_kmh, distance, speed_ms, time, accel;

	printf("Enter the takeoff speed(km/hr):");
	scanf("%lf", &speed_kmh);
	printf("Enter the catapult distance (meters):");
	scanf("%lf", &distance);
	speed_ms = speed_kmh/3.6;
	time = 2*distance/speed_ms;
	accel = speed_ms/time;

	printf("Acceleration: %.2f m/s^2\n", accel);
	printf("Time to takeoff: %.2f seconds\n", time);
	return 0;
}
