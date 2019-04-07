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
* BVM "REMOTE 2" Function described in User Manual. Ext Sync toggle is troublesome, it's much easier to configure a specific channel for such each desired setting (up to a max of 7 channels)
* Maybe Updated VTPro/SIMPL? (Consider Calling support and pretending to be a tech dept for some company) This will enable other two-way touchpanels, enabling additional (maybe simpler) logic.
* Investigate avoiding Serial jamming (No jamming is apparent currently)
* Tidy up signals that don't go anywhere
	* OUYA
	* Mini Famicom
	* Steamlink
	* Composite Select
	* S-Video Select
* Incorporate RetroTink2x (Relays?)
* Any Additional functionality?
	* Extron YC6
	* Sony 1024? (Requires investigation of Sony's S-Control)
