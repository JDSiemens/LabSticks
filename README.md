# LabSticks

This project started from the need for a very specific input controller for lab experiments.

![Initial Sketch](images/4.jpg)

A Psychology research study at the local University was looking for a replacement for the currently used keyboard/mouse, which could facilitate all the inputs their testing software required while providing a number of additional QoL features.

## Keymaps

The keymaps required are as follows:

| MAP     | GMK Map       | Description                  |
|---------|---------------|------------------------------|
| UP      | KC_KP_8       | Keypad 8                     |
| RIGHT   | KC_KP_6       | Keypad 6                     |
| DOWN    | KC_KP_2       | Keypad 2                     |
| LEFT    | KC_KP_4       | Keypad 4                     |
| BLUE    | KC_MS_BTN1    | Mouse Button 1 (Left click)  |
| ORANGE  | KC_MS_BTN2    | Mouse Button 2 (Right click) |
| START   | KC_ENT        | Enter (Carriage Return)      |
| DISABLE | TG(BLANK_LAYER)| Toggle Keypad Disable        |

## Design

The idea was for this to be built using easily accessible components, and the widely supported GMK firmware to ensure continued support. I currently have all the CAD work done for the PCB and the enclosure of the controller itself. The design was loosely based on the dimensions of a classic gaming controller. 

![Controller Overview](images/1.jpg)

![Circuit Trace Locations](images/2.jpg)

![Exploded View of Controller](images/3.jpg)

## Upcoming Tasks

Here are the next steps for this project:

- Design and build the Y splitter section of the cabling. (printed in TPU)
- Design and build the disable controller
- Source appropriate 6-strand wiring (USB + 2 wires for disable control)

## Contributing

We welcome contributions to this project. Before contributing, please read our [Contributing Guidelines](contributing.md).

## GMK Firmware

This section will be updated with the necessary code and instructions once they become available. 

## Bill of Materials (BOM)

| Quantity | Part | Description |
|---------|---------------|------------------------------|
| 7 | Gikfun AE1027 microswitches | Used for input buttons |
| 1 | ATmega32u4 | Microcontroller for handling inputs |
| 1 | Multi-Conductor Cable | 6-strand, colour-coded cable for wiring (e.g., Alpha Wire 3583/6C multi-conductor cable, or similar) |
| 1 | Toggle Switch | For enabling/disabling the controller (e.g., Miniature SPDT slide switch, or similar) |
| 1 | Custom Printed PCB | Houses the microcontroller and the switches |
| 1 | 3D Printed Enclosure | Top and bottom casing for the controller |
| 1 | 3D Printed Enclosure | Case for the disable toggle controller |
| 1 | Resin 3D Printed Button  | Orange color is needed |
| 4 | M3 Heatset Inserts | For fastening the casing |
| 4 | M3x12 Flat Top Tapered Screws | For fastening the casing |
| 1 | Zip Tie | Strain relief |
| 1 | Micro USB Connector with Breakout Board | Connection to the microcontroller |
| 1 | USB A Connector with Breakout Board | Connection to the host machine |

## License

This project is licensed under MIT Licence. See [LICENSE](LICENSE) for details.
