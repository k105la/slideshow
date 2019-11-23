# RaspberryPi Slideshow Bash Script

A small bash script that takes JPG pictures from a USB drive and stores them in
a folder and displays them in a slideshow. 


## Installation/Setup

1. `git clone https://github.com/akilhylton/slideshow.git`
	* `sudo chmod 755 requirements.sh`
	
	* `./requirements.sh`

2. `mkdir ~/Desktop/pictures`

3. `cd ~/slideshow`
	### Accuring USB Device's UUID
	* `sudo blkid -sUUID`
	
	* Enter your usb device's uuid in the `UUID=` variable in the slideshow bash file.

4. `chmod 755 slideshow`

5. `./slideshow` (quick test remember to have a usb drive with pictures stored in a folder named **usb** plug into RaspberryPi)


## Add bash script to run on RaspberryPi start up

1. `cd ~/` (goes to home directory)

2. `sudo nano /etc/rc.local`

3. `~/slideshow/slideshow` (copy and paste this line into rc.local file)
