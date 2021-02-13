# ArduinoBot

ArduinoBot is a low-cost robot created with an emphasis on providing an entry point into the world of electronics, engineering, and software development. ArduinoBot is built from off-the-shelf components that are readily available and intended to be reusable for later projects.

## Bill of Materials

| Quantity | Part Number | Description                                                                                                                                          |
| -------- | ------      |------                                                                                                                                                |
| 1        | generic     | [Arduino Nano (328) Clone](https://www.robotshop.com/en/elecrow-nano-328-microcontroller.html)                                                       |
| 1        | 2130        | [Pololu DRV8833 Dual Motor Controller](https://www.robotshop.com/en/pololu-drv8833-motor-controller-2130.html)                                       |
| 1        | 2836        | [Pololu 5v Step-Up / Step-Down Voltage Regulator S9V11F5](https://www.robotshop.com/en/pololu-5v-step-up---step-down-voltage-regulator-s9v11f5.html) |
| 1        | 70100       | [Tamiya Track and Wheel Set](https://www.robotshop.com/en/tamiya-track-and-wheel-set.html)                                                           |
| 1        | 70097       | [Tamiya Twin-Motor Gear Box](https://www.robotshop.com/en/tamiya-twin-motor-gearbox.html)                                                            |
| 2        | generic     | [2 x AA Battery Holder](https://www.robotshop.com/en/2-aa-battery-holder.html)                                                                       |
| 1        | generic     | [400 Point Solderless Breadboard](https://www.robotshop.com/en/400-tie-point-solderless-interlocking-breadboard.html)                                |
| 22       | generic     | Jumper Wires                                                                                                                                         |
| 4        | generic     | 22 Gauge Wires                                                                                                                                       |
| 4        | generic     | Flat Head Screws with Hex Nuts for Chassis                                                                                                           |
| 4        | generic     | Flat Head Screws with Hex Nuts for Battery Holders                                                                                                   |

The wires and jumpers are not intended to be specific components. The ones I used came from a (I think Elenco) jumper kit, but any sufficiently small solid core wire cut into jumpers should do.

The screws and hex nuts are not intended to be any particular size. The Tamiya Twin-Motor Gear Box includes two 3mm x 8mm machine screws that are a bit too short, and with the wrong head. I used #4 - 40 x 1/2" to connect the body to the chassis and gearbox, and #4 - 40 x 5/16" screws to connect the battery holders to the body.

## Tools

| Tool                                    |
| --------                                |
| Rotary Tool (Dremel) with Cut-Off Wheel |
| 25W Soldering Iron                      |
| Solder                                  |
| Wire Strippers                          |
| #1 Phillips Screwdriver                 |
| Pliers or Tweezers                      |
| #31 Drill Bit                           |
| #44 Drill Bit                           |
| 1/8" Drill Bit                          |
| 82° Countersink                         |

## Print

1. Print and post-process the chassis and body available from [here](https://www.youmagine.com/designs/arduinobot).
2. Chase the the holes in the body with a 1/8" drill bit.
3. Chase the holes in the top and front of the chassis with the 1/8" drill bit.
4. Chase the front axle hole and rear hex-shaft holes with the #31 drill bit.
5. Chase the holes for the idler wheels with the #44 drill bit.
6. (Optional) Chase the countersunk holes with the countersink

## Assemble

Follow these steps to assemble the robot:

1. Cut two of the hex shafts included in the Twin-Motor Gear Box set down by 0.120"
2. Cut down one of the round axles included in the Tamiya Track and Wheel Set
3. Assemble the Twin-Motor Gear Box in the A configuration, but leaving the two hex shafts and gears out.
4. Strip approximately 1/8" from one ond of the 22 gauge wires and approximately 3/16" from the other end
5. Tin the stripped ends of the 22 gauge wires
6. Solder the 1/8" ends of the four 22 gauge wires to the motors in the Twin-Motor Gear Box
7. Solder the 90° male headers (included) to the 5v regulator
8. Solder the male headers (included) to the motor controller
9. Insert the Twin-Motor Gear Box into the rear of the chassis from the bottom. The tabs on the gearbox should be flat against the bottom of the chassis. Note that the "trestles" that the wheels mount to will need to be slightly flexed outward to install the gearbox. This should be done carefully to prevent breaking the chassis.
10. Insert two of the longer screws through the countersunk holes in the rear of the body, through the matching holes in the chassis, and through the tabs in the Twin-Motor Gear Box. Install the hex nuts onto the screws, but do not tighten.
11. Inert the hex shafts through the holes in the chassis and into the Twin-Motor Gear Box.
12. Install the remaining two longer screws through the countersunk holes in the middle-front of the body, through the matching holes in the chassis. Install the hex nuts onto the screws, and tighten all four hex nuts.
13. Feed the wires soldered to the motors up through holes in the first two rows or front of the chassis and body. 
14. Install the two battery holders on the side of the body using the shorter screws and matching hex nuts. The leads in the battery holders should be run through the holes in the sides of the body toward the front. Note that depending on the screws used to attach the battery holders the countersunk holes in the battery holders may need to be cut deeper. If battery holders without countersunk mounting holes are used, they will need to be countersunk.
15. Assemble each of the longest piece of track (30 link) from the Track and Wheel Set together with two of the middle-length pieces of track (10 link).
16. Remove both the drive wheels, the large idler wheels, six of the road wheels, and two of the  from the sprue of the Track and Wheel Set.
17. Install the drive wheels onto the hex shafts.
18. Install one of the wheel retainers and large idler wheels onto the round axle that was cut down in step two.
19. Insert the round axle into the front axle hole of the chassis, then install the remaining large idler wheel and wheel retainer on the front axle.
20. Use six of the self-tapping shoulder screws to install three of the road wheels onto each side of the chassis, being careful not to over-tighten the screws.
21. Install the jumpers, Arduino, voltage regulator, and motor controller (in order) in the breadboard as indicated in the image below.

![breadboard](https://raw.githubusercontent.com/johnny-b-goode/arduinobot/main/rsrc/breadboard.jpg)

22. Remove the adhesive backing from the breadboard and adhere to the body, lining up the back of the breadboard with the back of the body.
23. Connect the leads from the battery holders to the breadboard in series supplying 6v to the left-hand rail of the breadboard (supplying the 5v regulator). Note the "short" red and black leads (in I30, J30, and power rail) in the image above.
24. Connect the leads from the motors to the breadboard as indicated in the image above. Note the "short" blue, yellow, green, and red leads (in A22, B23, A24, and B25) in the image above.

## Program

1. Download and install the Arduino IDE from https://www.arduino.cc/en/Main.Software.
2. Connect the Arduino Nano to an available USB port. It may be necessary to install a serial driver for the COM port used by the Arduino.
3. Download the sketch from [here](https://raw.githubusercontent.com/johnny-b-goode/arduinobot/main/arduino/arduinobot.ino). Open the sketch in the Arduino IDE and upload to the Arduino Nano.

> NOTE: The referenced sketch requires the DRV8833 Motor Controller Library available from [here](https://sourceforge.net/projects/drv8833lib/files/current/).

## Operate

Install the four AA batteries into the battery holders. The short lead in A15 can then be connected to the 5v power rail to power on the robot.

Watch the robot go through a set of coordinated movements. The robot is intended to be re-programmed by the user. Try changing some of the variables in the initial sketch and re-uploading to see how the changes alter how the robot moves.

## Expand

There are multiple pins available on the Arduino to add sensors, switches, and even additional motor controllers and motors. The body and chassis have holes evenly spaced in a grid to allow for the attachment of additional body components and brackets. Create new components and more sophisticated programming, then share your creations with the rest of the world!