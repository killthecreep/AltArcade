<h1>Franken Pong Project</h1>

<h3> Created by: Sam Kasten </h3>

<img src="Images/Franken%20Pong%20Controller.jpg" alt="Franken Pong Project">
<h2>
    Concept
</h2>

<p>
Challenged to create an alternate arcade controller for the classic video game Pong, resulted in the following Frankenstien inspired switch. The controller is mimicking keyboard input using HID, powered by TinyCore and simply moves the paddle upward when switched up, while moving down while switched down. The concept revolved around making the classic player movement a little more difficult and challenging in hopes to create an entertaining and unique gaming experience.
    
</p>
    
<h2>
    Ideation
</h2>

<p>
After settling on the creation of a Frankenstien inspired switch I went about designing the physical components that will be needed in Fusion 360. I created the physical components in three major parts, the base-plate plus lever, the conductive connectors, and the handle. The base-plate and the lever were created to be able to print as a single component with minimal supports needed. While the connectors were printed to be inserted into the base, this was with the goal of insuring proper clearance with the ability to quickly resize and reprint if necessary. Finally, the handle was split in two and printed with a cavity on the inside, allowing for room for a Rumble Motor to be installed and activated whenever the switch was used.

</p>

<img src="Images/Switch%20Sketch.png" alt="Sketch Designs for Controller" width="6200">
<img src="Images/3D%20Model.png" alt="3D Model made in Fusion">

<p>
Originally I wanted to use Neodynamic Magnets to not only conduct a current, but to create a good tactile feedback when the player "switches" the switch. These proved to be a problem when attempting to glue the magnets into the 3D printed PLA, as the magnets were too strong and ripped out of the plastic. Attempting to salvage the situation I resorted to embedding the magnets into the 3D print, unfortunately even with the smallest walls possible any gap in the magnets would result in lack of connectivity. Fortunately I was introduced to Copper Foil tape,this tape is conductive and able to be easily soldered to. This allowed easy conductivity to the printed components, including the connectors and the switch levers. The switch lever had this tape strategically placed in the middle, this was to ensure that when the levers were in the down position it would bridge the connection needed within the connectors.
</p>

<h2>
    The Controller
</h2>

<img src="Images/Franken%20Pong%20Controller2.jpg" alt="Franken Pong Project">

<p>
The switch had two functions, to act as keyboard input, and to rumble for the tactile feedback. To accomplish this I was fortunate to be able to borrow a TinyCore ESP-32 S3 board, this board has HID or Human Interface Device capabilities. Using this board I was able to program it to act ask keyboard input, this allowed me to use Unreal Engines built-in keyboard input system. For the switch to actually send the input signal the TinyCore was wired to all four of the contacts, though only two of the contacts acted as data, one on each side, while the other two simply helped supply power to the rumble motor. 
</p>

<h2>
    The Game
</h2>
<p>
As a gluten for punishment I decided to develop the game in Unreal Engine 5 with Assets built in Blender. This came with its own share of problems as though I am comfortable with Blender, I had have only just started my Unreal journey. Mainly caused by issues with transferring materials and textures over unless everything was prebaked in a specific format to ensure they came over properly. 
</p>

