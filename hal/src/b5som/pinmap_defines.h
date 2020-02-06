/*
 * Copyright (c) 2019 Particle Industries, Inc.  All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#if PLATFORM_ID == PLATFORM_B5SOM

#define TOTAL_PINS 38
#define TOTAL_ANALOG_PINS 8
#define FIRST_ANALOG_PIN D14

// Digital pins
#define D0 0
#define D1 1
#define D2 2
#define D3 3
#define D4 4
#define D5 5
#define D6 6
#define D7 7
#define D8 8
#define D9 9
#define D10 10
#define D11 11
#define D12 12
#define D13 13
#define D14 14
#define D15 15
#define D16 16
#define D17 17
#define D18 18
#define D19 19
#define D20 20
#define D21 21
#define D22 22
#define D23 23

// Analog pins
#define A0 D19
#define A1 D18
#define A2 D17
#define A3 D16
#define A4 D15
#define A5 D14
#define A6 D21
#define A7 D20

#define BTN 24
#define RGBR 25
#define RGBG 26
#define RGBB 27

#define TX 9
#define RX 10
#define CTS 3
#define RTS 2

#define SS D8
#define SCK D13
#define MISO D11
#define MOSI D12

#define SDA D0
#define SCL D1

#define WKP A7

#define TX1 28
#define RX1 29
#define CTS1 30
#define RTS1 31

#define BGPWR 32
#define BGRST 33
#define BGVINT 34
#define BGDTR 35

#define NFC_PIN1 36
#define NFC_PIN2 37

#define LOW_BAT_UC A6

#endif // PLATFORM_ID == PLATFORM_B5SOM


#if PLATFORM_ID == PLATFORM_TRACKER

#define TOTAL_PINS 38
#define TOTAL_ANALOG_PINS 8
#define FIRST_ANALOG_PIN D5

// Digital pins
#define D0 0
#define D1 1
#define D2 2
#define D3 3
#define D4 4
#define D5 5
#define D6 6
#define D7 7
#define D8 8
#define D9 9
#define D10 10
#define D11 11
#define D12 12
#define D13 13
#define D14 14

// Analog pins
#define A0 D12
#define A1 D11
#define A2 D10
#define A3 D9
#define A4 D8
#define A5 D7
#define A6 D6
#define A7 D5

#define NFC_PIN1 15
#define NFC_PIN2 16

#define BTN 17
#define RGBR 18
#define RGBG 19
#define RGBB 20

#define SDA D0
#define SCL D1

#define SDA1 21
#define SCL1 22

#define PMIC_SDA SDA1
#define PMIC_SCL SCL1

#define TX D13
#define RX D14
#define CTS D3
#define RTS D2

#define SS A0
#define SCK D2
#define MOSI D3
#define MISO D4

#define SCK1 23
#define MOSI1 24
#define MISO1 25

#define TX1 26
#define RX1 27
#define CTS1 28
#define RTS1 29

#define WKP A7

#define BGPWR 30
#define BGRST 31
#define BGVINT 32
#define BGDTR 33

#define IOE_INT 34
#define IOE_RST 35
#define RTC_INT 36
#define LOW_BAT_UC 37

#endif // PLATFORM_ID == PLATFORM_TRACKER
