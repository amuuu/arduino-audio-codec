# Audio Codec for Arduino
This repo is a software based audio codec that decodes WAV files for Arduino.
The base code for the audio decoder is written by Adam Stark in [this repo](https://github.com/adamstark/AudioFile).
You can use this library to read WAV files from the Arduino MicroSD shield, process the sound and play the output as an mp3 file on the VS1053 player module. This library is still on development.

## How to use this library?
Include the files of this repo inside your arduino project directory and add this line in the first line of the .ino file that you want to use it:
```
#include "AudioFile.h"
```



