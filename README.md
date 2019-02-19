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
		

Example Workflow

1. TV Choice	(Enables a signal to say this screen is the choice)
2. Nintendo 	(this is just a screen selector, no hardware logic besides switching screens)
3. Wii 			(this fires any necessary commands)

		
##### Note:

* Serial I/O logic symbols can send directly to the tx/rx lines of the Serial Drivers on the control unit, so use this to enable functionality.
* Use Interlock symbol for each IR device to prevent clashes
* Set/Reset Latch to turn button into switch

##### TO DO:

* Finish discreet Device control screens on touchpanel
   * OSSC
   * Top TV
   * Bottom TV
   * BVM?
* Touchpanel Icons
   * Power
   * Back
   * Home
   * Backlight (OSSC)
* Investigate BVM Control via RS485
* If Above doesn't work, Investigate "Parallel" control port 2 on BVM for control
* Maybe Updated VTPro/SIMPL? (Consider Calling support and pretending to be a tech dept for some company) This will enable other two-way touchpanels, enabling additional (maybe simpler) logic.
* Any Additional functionality?
