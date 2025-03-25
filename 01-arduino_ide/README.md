## Installing Arduino IDE

Download the Arduino IDE:  
- [try me first](https://downloads.arduino.cc/arduino-ide/arduino-ide_2.3.4_Windows_64bit.zip) - this is a newer version and *may* work for everyone (arduino-ide_2.3.4)  
- [otherwise try me](https://downloads.arduino.cc/arduino-1.8.18-windows.zip) - this is an older but tested portable version and *did* work for everyone (arduino-1.8.18)  

Be patient while it downloads... :upside_down_face:

The above are Windows ZIP files for non admin installation on a computer you don't own, like the school computers.
For either version, open the location where the ZIP file downloads (most likely the `Downloads` folder on your computer).
Extract using Windows by right clicking on the ZIP file and clicking extract.

Be patient while it extracts...don't get on the gram :face_exhaling:.

Now, open the extracted folder(s) until you enter the main folder (it should contain `Arduino IDE.exe` 
if using the newer version or `arduino.exe` if using the older one). Inside this, create a folder called `portable`. 

This tells Arduino IDE to save sketches, settings and libraries here rather than elsewhere on the computer. 
If you can, save the entire root of the extracted folder onto a USB drive or your phone. 
By doing this, you can carry your installation with you onto any other Windows computer and avoid repeating the tedious download and extract routine. 
If you can't, try a cloud account or even attaching your `portable` folder to a draft email to at least save your sketches.

Update your copy before you log out!

### First program

Plug the Arduino board to the computer via USB, open the Arduino IDE (double click the .exe file). 
Select all the standard code and delete it, we're about to replace it. 
Under the Tools tab, check to see if the right COM port (a Windows name for USB port) is selected and picks up the Arduino Uno board. 

Open [blink](blink_led_builtin.ino) in a new tab. 
Select all the code and copy it. 
Try uploading your first file to the board by pasting the code into the IDE and clicking upload. 
If this doesn't work, let one of us know! 

But if you succeeded, congratulations :partying_face: and also let one of us know, we'll be building on this next!
