# Embedded Protocol

This repository contains an efficient embedded communication protocol for RoboCup Small Size League (NAMeC) robots.
The protocol leverages Google's Protocol Buffers (protobuf) and the Nanopb library to provide a compact binary format optimized for resource-constrained environments.
The project is compatible with PlatformIO, a professional collaborative platform for embedded development.

## Features

- SSL Data protocol definition using Google's Protocol Buffers
- Nanopb integration for a lightweight, minimal footprint

## Installation & Usage

To integrate the protocol into your PlatformIO project, follow these steps:

1. Add the following lines to your platformio.ini file:

```.ini
lib_deps:
   https://github.com/NAMeC-SSL/embedded-protocol.git#main
```

2. Include the header files `brushless.pb.h` or `radio_wrapper.pb.h` in your source code to utilize the protocol buffer messages.

By following these steps, you can seamlessly incorporate the protocol into your project.

## Prerequisites

To get started, download the Nanopb library from the [official website](https://jpa.kapsi.fi/nanopb/download/)
Extract the downloaded archive to your local machine in this folder.

### Code generation

To generate code for embedded C in Linux, use the following command:

```bash
./nanopb-x.y.z-linux-x86/generator-bin/nanopb_generator base_wrapper.proto brushless.proto radio_command.proto radio_feedback.proto base_feedback.proto base_command.proto kicker.proto -I proto -D src
```

## Protocol Messages

The protocol includes the following message definitions:

### PCToBase and BaseToPC

These message facilitate the exchange of Commands messages between the PC and the base station, as well as the transmission of feedback messages receive from the robot.

### BaseToRobot and RobotToBase

These message facilitate the exchange of Commands and feedback between the base station and all of our robots.

### RobotToBrushless and BrushlessToRobot

These messages facilitate the control of brushless motor controllers and provide access to relevant information for SSL robots.

## License

This project is licensed under the Apache-2.0 License.
