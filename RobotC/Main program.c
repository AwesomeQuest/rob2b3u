#pragma config(Sensor, dgtl2,  leftSonar,      sensorSONAR_cm)
#pragma config(Sensor, dgtl4,  rightSonar,     sensorSONAR_cm)
#pragma config(Motor,  port2,           leftMotor,     tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port3,           rightMotor,    tmotorServoContinuousRotation, openLoop, reversed)
#pragma config(Motor,  port4,           aftMotor,      tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port5,           armMotor,      tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port6,           clawMotor,     tmotorServoContinuousRotation, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//


int surround1[400], surround2[400], rotSpeed = 127, forwdSpeed = 127, sfArmSpeed = 63;



task main()
{

		for(int a = 0; a > sizeof(surround1); a++){
			motor(leftMotor) = rotSpeed;
			motor(rightMotor) = -rotSpeed;

			surround1[a] = SensorValue(leftSonar);
			surround2[a] = SensorValue(rightSonar);

	}

}
