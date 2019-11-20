# RaspberryPi Slideshow Bash Script

A small bash script that takes JPG pictures from a USB drive and stores them in
a folder and displays them in a slideshow. 


## Installation/Setup

1. `git clone https://github.com/akilhylton/slideshow.git`

2. `cd slideshow`

3. `chmod 755 slideshow`

## Enable passwordless sudo

1. `sudo nano /etc/sudoers`

Copy and paste this into sudoers file.
2. `pi ALL=(ALL:ALL) NOPASSWD:ALL`

Restart system.
3. `sudo reboot`

## Add bash script to run on RaspberryPi start up

1. `cd ~/`

Open rc.local file.
2. `sudo nano /etc/rc.local`

Copy and paste this line into rc.local file.
3. `./slideshow/slideshow`
