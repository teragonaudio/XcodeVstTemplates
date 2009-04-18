Thank you for using the VST plugin templates created by Teragon Audio!  These templates are designed to facilitate in the creation of VST effects and instruments.

Due to licensing restraints, these templates do not actually provide the VST or VSTGUI source code.  You must download the SDK, and then point your project to the source code.  This is done in two places:

  * In the main source tree, click "Get Info" on the "vstsdk2.4" folder, and choose the location where you downloaded the 2.4 SDK
  * In the targets tree, click "Get Info" on your target and change the Header Search Paths to point to the VST SDK location.

By default, the run scripts for this project will copy your plugin to ~/Library/Audio/Plug-Ins/VST after building.

Finally, if you find any problems with these templates, or have any suggestions for improvements, please email me at nik@teragon.org.  Thanks, and happy coding!

-Nik Reiman
Teragon Audio
http://www.teragon.org