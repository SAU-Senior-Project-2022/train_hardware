## Project Title: train_hardware

 * By the way, to see this as markdown (in VS Code), make sure to click on the preview button
   * It should be over next to the tabs for your open files
 * `.vscode/c_cpp_properties.json` is very specific to each person's computer, so I have added it to the `.gitignore` file
 * `Train_Hardware.ino` is the main entrypoint for the device firmware
 * The LIDAR sensor we are using is the TFmini-S: [LIDAR Product Manual](https://cdn.sparkfun.com/assets/8/a/f/a/c/16977-TFMini-S_-_Micro_LiDAR_Module-Product_Manual.pdf)
    * Arduino Library for LIDAR: [TFMini Library](https://www.arduino.cc/reference/en/libraries/tfmini/) 
 * The LTE group is using the SIM7000A: [LTE Shield](https://www.botletics.com/products/sim7000-shield)
    * If using 5V Battery instead of 3.7V: [Link](https://www.circuitlab.com/editor/#?id=zcy3fv)
    * LTE Shield Pinout: ![Pinout](https://github.com/botletics/SIM7000-LTE-Shield/raw/master/Media/SIM7000%20Shield%20Pinouts%20v6.PNG)

 