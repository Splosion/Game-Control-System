### Crestron Touchpanel Plans:


Start Page

* TV Choice
* Controls (Volume, etc)
	- All (useful) controls for any individual device are in a page dedicated to that device.

If a Display is chosen:

* Nintendo
	* NES (AVS)
	* SNES (Super NT)
	* N64 PAL
	* N64 JP
	* Gamecube
	* Wii
* Sony
	* PS1
	* PS2 PAL
	* PS2 JP
	* PSP
	* PS3
	* PS4
	* PS4/PSVR
	* PSTV
* Sega
	* Master System
	* Mega Drive
	* Saturn PAL
	* Saturn JP
	* Dreamcast
* Microsoft(?)
	* Xbox
	* Xbox 360
	* Xbox One S
* Misc
	* Intellivision
	* Philips CD-i
	* Philips VideoPac G7000
	* Atari 2600
	* Atari Jaguar
	* NEO GEO MVS
* MicroConsoles
	* Famicom Mini
	* SNES Mini
	* PS1 Classic
	* OUYA

In addition to the above, the Controls page contains a list of devices (switchers, processors and displays) that gives access to all of the (useful) commands that a user might want, in order to fix a configuration issue on any of the devices.

Example Workflow

1. TV Choice	(Enables a signal to say this screen is the choice)
2. Nintendo 	(this is just a screen selector, no hardware logic besides switching screens)
3. Wii 			(this fires Extron Analog switcher commands, OSSC IR commands, HDMI Switcher Commands, Turns on the selected TV and switches it to the correct channel after a delay)


##### Note:

* Serial I/O logic symbols can send directly to the tx/rx lines of the Serial Drivers on the control unit, so use this to enable functionality without directly editing the serial driver.
* Use Interlock symbol for each IR device to prevent clashes, this prevents the possibility of weirdness on IR controlled devices.
* Set/Reset Latch to turn button into switch. This can be used to set an enable signal for use in AND symbols, to prevent logic firing when it isn't supposed to.

##### TO DO:

* Work out Console -> Crosspoint -> Rxi -> Crosspoint -> OSSC/BVM routing (Potentially multiple Serial fires from a single button press)
* Work out Keeping state of outputs for duplicate devices -> Rxi 202 #1 in use, use #2 instead, same for DSC, audio options etc
* Query all extron device statuses on startup and set options for touchpanel feedback
* Check serial response messages from extron devices
* Fully Implement Panasonic Network Control
	* Use LAN Protocol Notes
	* Check and keep state
	* Capture response fully before parsing
* Extron Crosspoint Network Implementation
	* Keep switching simple with existing SIMPL+ Modules
* New Devices
	* TCP/IP
		* DXP 84
		* Crosspoint 450 1616
		* Power switch
	* Serial
		* YC SW6
		* C2-1350
	*IR
		* Toslink 4x2
		* Onkyo AVR
		* DSC-1024G (Limited controls, Uses Sony Control-S)
	* Other
		* RetroTink2x (Relays and I/O Most likely)
* Capture IR 
	* Carby
	* Xbox One
	* Toslink Switch
	* Onkyo AVR
* UI for new TPS-6x (multiple if they arrive)
* BVM Serial Control for direct controls
* Finish discrete Device control screens on touchpanel
* Investigate avoiding Serial jamming (No jamming is apparent currently) - I think Serial Concatenation can solve this
* Tidy up signals that don't go anywhere
	* OUYA
	* Mini Famicom
	* Steamlink
	* Composite Select
	* S-Video Select
* Any Additional functionality?
