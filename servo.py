#!/usr/bin/env python3
"""
Created by: Evan Beaudoin.
Created on: March 2023
This program moves a servo
"""

import time
import board
import pwmio
from adafruit_motor import servo

pwm = pwmio.PWMOut(board.A2, duty_cycle=2 ** 15, frequency=50)

my_servo = servo.Servo(pwm)

def main() -> None: 
    while True:
        for angle in range(0, 180, 5):  # 0 - 180 degrees, 5 degrees at a time.
            my_servo.angle = angle
            time.sleep(0.05)
        for angle in range(180, 0, -5): # 180 - 0 degrees, 5 degrees at a time.
            my_servo.angle = angle
            time.sleep(0.05)
        
if __name__ == "__main__":
    main()
