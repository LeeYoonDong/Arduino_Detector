# 화재 및 가스 감지 경보 시스템

이 프로젝트는 Arduino를 사용하여 화재와 가스를 감지하고 경보를 발생시키는 시스템을 구현합니다.

## 목차

1. [시스템 개요](#시스템-개요)
2. [기능](#기능)
3. [하드웨어 구성](#하드웨어-구성)
4. [소프트웨어 구성](#소프트웨어-구성)
5. [설치 및 사용 방법](#설치-및-사용-방법)
6. [주의사항](#주의사항)

## 시스템 개요

이 시스템은 불꽃 감지 센서와 MQ-2 가스 센서를 사용하여 화재와 유해 가스를 감지합니다. 위험 상황 발생 시 RGB LED를 통한 시각적 경고와 피에조 부저를 통한 청각적 경고를 제공하며, 시리얼 모니터를 통해 상황을 알립니다.

## 기능

1. **화재 감지**
   - 불꽃 감지 시 "Fire Detective!" 메시지 출력
   - 적색 LED 점등 및 경고음 발생
   - 화재 종료 시 "Fire OFF" 메시지 출력 및 경고 해제

2. **가스 감지**
   - 유해 가스 감지 시 "Gas Detective" 메시지 출력
   - 황색 LED 점등 및 경고음 발생
   - 가스 감지 종료 시 "Gas OFF" 메시지 출력 및 경고 해제

## 하드웨어 구성

- Arduino Mega
- 불꽃 감지 센서
- MQ-2 가스 센서
- RGB LED
- 피에조 부저

## 소프트웨어 구성

- Arduino IDE를 사용한 프로그래밍
- 주요 기술:
  - RGB LED 제어
  - 피에조 부저 출력 제어
  - 불꽃 감지 센서 및 가스 센서 데이터 읽기
  - 시리얼 통신
  - 센서 입력에 따른 출력 제어

## 설치 및 사용 방법

1. Arduino IDE 설치
2. 필요한 라이브러리 설치 (해당되는 경우)
3. 하드웨어 연결:
   - 불꽃 감지 센서를 디지털 핀에 연결
   - MQ-2 센서를 아날로그 핀에 연결
   - RGB LED를 PWM 지원 핀에 연결
   - 피에조 부저를 디지털 핀에 연결
4. 제공된 코드를 Arduino IDE에 업로드
5. 시리얼 모니터 열기 (통신 속도 9600bps)
6. 시스템 작동 확인

## 주의사항

- 이 시스템은 교육 및 실험 목적으로 설계되었습니다. 실제 안전 시스템으로 사용하기 위해서는 추가적인 검증과 인증이 필요합니다.
- 센서의 감도와 경보 임계값은 환경에 따라 조정이 필요할 수 있습니다.
- 정기적인 센서 점검과 캘리브레이션이 필요합니다.
<br/>
<br/>

# Fire and Gas Detection Alarm System

This project implements a fire and gas detection system with alarm functionality using Arduino.

## Table of Contents
1. [System Overview](#system-overview)
2. [Features](#features)
3. [Hardware Components](#hardware-components)
4. [Software Components](#software-components)
5. [Installation and Usage](#installation-and-usage)
6. [Precautions](#precautions)

## System Overview
This system uses a flame sensor and an MQ-2 gas sensor to detect fire and harmful gases. In case of a hazardous situation, it provides visual warnings through an RGB LED and auditory warnings via a piezo buzzer, while also notifying through the serial monitor.

## Features
1. **Fire Detection**
   - Outputs "Fire Detective!" message when a flame is detected
   - Turns on red LED and triggers alarm sound
   - Outputs "Fire OFF" message and deactivates alarm when fire is no longer detected
2. **Gas Detection**
   - Outputs "Gas Detective" message when harmful gas is detected
   - Turns on yellow LED and triggers alarm sound
   - Outputs "Gas OFF" message and deactivates alarm when gas is no longer detected

## Hardware Components
- Arduino Mega
- Flame sensor
- MQ-2 gas sensor
- RGB LED
- Piezo buzzer

## Software Components
- Programming using Arduino IDE
- Key technologies:
  - RGB LED control
  - Piezo buzzer output control
  - Reading data from flame sensor and gas sensor
  - Serial communication
  - Output control based on sensor inputs

## Installation and Usage
1. Install Arduino IDE
2. Install necessary libraries (if applicable)
3. Hardware connections:
   - Connect flame sensor to a digital pin
   - Connect MQ-2 sensor to an analog pin
   - Connect RGB LED to PWM-enabled pins
   - Connect piezo buzzer to a digital pin
4. Upload the provided code to Arduino IDE
5. Open Serial Monitor (communication speed 9600bps)
6. Verify system operation

## Precautions
- This system is designed for educational and experimental purposes. Additional verification and certification are required for use as an actual safety system.
- Sensor sensitivity and alarm thresholds may need adjustment depending on the environment.
- Regular sensor checks and calibration are necessary.
