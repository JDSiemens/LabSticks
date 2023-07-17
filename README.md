# LabSticks

This project started from the need for a very specific input controller for lab experiments.

A Psychology research study at the University of Manitoba was looking for a replacement for the currently used keyboard/mouse, which could facilitate all the inputs their testing software required while providing a number of additional QoL features.

![Controller Overview](images/1.jpeg)

The image above shows a CAD rendering of the controller, with the casing made transparent to show the inner workings.

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

![Circuit Trace Locations](images/2.jpeg)

Above is a rendering of the circuit trace locations.

## Upcoming Tasks

Here are the next steps for this project:

- Design and build the Y splitter section of the cabling. (printed in TPU)
- Design and build the disable controller
- Source appropriate 6-strand wiring (USB + 2 wires for disable control)

![Exploded View of Controller](images/3.jpeg)

The image above is an exploded view of the controller, with opaque casing. 

## Contributing

We welcome contributions to this project. Before contributing, please read our [Contributing Guidelines](contributing.md).

## License

This project is licensed under MIT Licence. See [LICENSE](LICENSE) for details.
