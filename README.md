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
* Sega
* Microsoft(?)
* Misc
* MicroConsoles

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



* Finish discrete Device control screens on touchpanel
   * BVM? (Requires testing of below)
* Investigate BVM Control via RS485
* If Above doesn't work, Investigate "Parallel" control port 2 on BVM for control
	* Potentially all 8 relays necessary, quite wasteful
		* This will more than likely be less, around 4-5 depending on what I want
	* Is configurable in BVM menu
		* Can set composite channel and rgb channel
		* Enabling/disabling ext sync. 
		* Power toggle is also possible.
* Maybe Updated VTPro/SIMPL? (Consider Calling support and pretending to be a tech dept for some company) This will enable other two-way touchpanels, enabling additional (maybe simpler) logic.
* Investigate avoiding Serial jamming
* Tidy up signals that don't go anywhere
	* OUYA
	* Mini Famicom
	* Composite Select
	* S-Video Select
* Incorporate RetroTink2x (Relays?)
* Any Additional functionality?
	* Extron YC6
	* Sony 1024?
