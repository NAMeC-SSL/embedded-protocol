# Embedded Protocol

This repository contains an efficient embedded communication protocol for RoboCup Small Size League (NAMeC) robots.
The protocol leverages Google's Protocol Buffers (protobuf) and the Nanopb library to provide a compact binary format optimized for resource-constrained environments.

## Features

- SSL Data protocol definition using Google's Protocol Buffers
- Nanopb integration for a lightweight, minimal footprint

## Prerequisites

To get started, download the Nanopb library from the [official website](https://jpa.kapsi.fi/nanopb/download/)
Extract the downloaded archive to your local machine in this folder.

## Code generation

To generate code for embedded C in Linux, use the following command:

```bash
./nanopb-x.y.z-linux-x86/generator-bin/nanopb_generator radio_wrapper.proto brushless.proto -I proto -D src
```

## Protocol Messages

The protocol includes the following message definitions:

### PCToBase and BaseToPC

These messages facilitate the exchange of RadioCommand messages between the PC and the base station, as well as the transmission of feedback messages from the robot.

### RobotToBrushless and BrushlessToRobot

These messages facilitate the control of brushless motor controllers and provide access to relevant information for SSL robots.

## License

This project is licensed under the Apache-2.0 License.
