EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L keyboard_parts:SW_PUSH SW2
U 1 1 61C1119D
P 5200 2650
F 0 "SW2" H 5200 2905 50  0000 C CNN
F 1 "SW_PUSH" H 5200 2814 50  0000 C CNN
F 2 "keyboard_parts:Kailh_MX_Socket" H 5200 2650 60  0001 C CNN
F 3 "" H 5200 2650 60  0000 C CNN
	1    5200 2650
	1    0    0    -1  
$EndComp
$Comp
L Device:D D2
U 1 1 61C119EA
P 4900 2800
F 0 "D2" V 4946 2720 50  0000 R CNN
F 1 "D" V 4855 2720 50  0000 R CNN
F 2 "keyboard_parts:D_SOD123" H 4900 2800 50  0001 C CNN
F 3 "~" H 4900 2800 50  0001 C CNN
	1    4900 2800
	0    -1   -1   0   
$EndComp
$Comp
L keyboard_parts:SW_PUSH SW4
U 1 1 61C1529A
P 5200 3300
F 0 "SW4" H 5200 3555 50  0000 C CNN
F 1 "SW_PUSH" H 5200 3464 50  0000 C CNN
F 2 "keyboard_parts:Kailh_MX_Socket" H 5200 3300 60  0001 C CNN
F 3 "" H 5200 3300 60  0000 C CNN
	1    5200 3300
	1    0    0    -1  
$EndComp
$Comp
L Device:D D4
U 1 1 61C152A0
P 4900 3450
F 0 "D4" V 4946 3370 50  0000 R CNN
F 1 "D" V 4855 3370 50  0000 R CNN
F 2 "keyboard_parts:D_SOD123" H 4900 3450 50  0001 C CNN
F 3 "~" H 4900 3450 50  0001 C CNN
	1    4900 3450
	0    -1   -1   0   
$EndComp
$Comp
L keyboard_parts:SW_PUSH SW1
U 1 1 61C15C7C
P 4450 2650
F 0 "SW1" H 4450 2905 50  0000 C CNN
F 1 "SW_PUSH" H 4450 2814 50  0000 C CNN
F 2 "keyboard_parts:Kailh_MX_Socket" H 4450 2650 60  0001 C CNN
F 3 "" H 4450 2650 60  0000 C CNN
	1    4450 2650
	1    0    0    -1  
$EndComp
$Comp
L Device:D D1
U 1 1 61C15C82
P 4150 2800
F 0 "D1" V 4196 2720 50  0000 R CNN
F 1 "D" V 4105 2720 50  0000 R CNN
F 2 "keyboard_parts:D_SOD123" H 4150 2800 50  0001 C CNN
F 3 "~" H 4150 2800 50  0001 C CNN
	1    4150 2800
	0    -1   -1   0   
$EndComp
$Comp
L keyboard_parts:SW_PUSH SW3
U 1 1 61C161CE
P 4450 3300
F 0 "SW3" H 4450 3555 50  0000 C CNN
F 1 "SW_PUSH" H 4450 3464 50  0000 C CNN
F 2 "keyboard_parts:Kailh_MX_Socket" H 4450 3300 60  0001 C CNN
F 3 "" H 4450 3300 60  0000 C CNN
	1    4450 3300
	1    0    0    -1  
$EndComp
$Comp
L Device:D D3
U 1 1 61C161D4
P 4150 3450
F 0 "D3" V 4196 3370 50  0000 R CNN
F 1 "D" V 4105 3370 50  0000 R CNN
F 2 "keyboard_parts:D_SOD123" H 4150 3450 50  0001 C CNN
F 3 "~" H 4150 3450 50  0001 C CNN
	1    4150 3450
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4150 2950 4900 2950
Connection ~ 4900 2950
Wire Wire Line
	4900 2950 5700 2950
Wire Wire Line
	4150 3600 4900 3600
Connection ~ 4900 3600
Wire Wire Line
	4900 3600 5700 3600
Wire Wire Line
	4750 2650 4750 3300
Connection ~ 4750 3300
Wire Wire Line
	4750 3300 4750 3850
Wire Wire Line
	5500 2650 5500 3300
Connection ~ 5500 3300
Wire Wire Line
	5500 3300 5500 3850
$Comp
L keebio:ProMicro_hotswap_socket_clearing U1
U 1 1 61C1AB51
P 7150 3250
F 0 "U1" H 7150 4087 60  0000 C CNN
F 1 "ProMicro_hotswap_socket_clearing" H 7150 3981 60  0000 C CNN
F 2 "Keebio-Parts:ArduinoProMicro_hotswap_socket_clear" V 8200 750 60  0001 C CNN
F 3 "" V 8200 750 60  0001 C CNN
	1    7150 3250
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x03 J1
U 1 1 61C1E45B
P 8700 3300
F 0 "J1" H 8780 3342 50  0000 L CNN
F 1 "Conn_01x03" H 8780 3251 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 8700 3300 50  0001 C CNN
F 3 "~" H 8700 3300 50  0001 C CNN
	1    8700 3300
	1    0    0    -1  
$EndComp
Text GLabel 8500 3200 0    50   Input ~ 0
GND
Text GLabel 8500 3300 0    50   Input ~ 0
RGB
Text GLabel 8500 3400 0    50   Input ~ 0
VCC
Text GLabel 5700 2950 2    50   Input ~ 0
row1
Text GLabel 5700 3600 2    50   Input ~ 0
row2
Text GLabel 4750 3850 3    50   Input ~ 0
col1
Text GLabel 5500 3850 3    50   Input ~ 0
col2
Text GLabel 6450 2900 0    50   Input ~ 0
GND
Text GLabel 6450 3400 0    50   Input ~ 0
RGB
Text GLabel 7850 3000 2    50   Input ~ 0
VCC
Text GLabel 6450 3000 0    50   Input ~ 0
GND
Text GLabel 7850 3400 2    50   Input ~ 0
row1
Text GLabel 6450 3500 0    50   Input ~ 0
row2
Text GLabel 7850 3800 2    50   Input ~ 0
col1
Text GLabel 6450 3600 0    50   Input ~ 0
col2
$EndSCHEMATC
