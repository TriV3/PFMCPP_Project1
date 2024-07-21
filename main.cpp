#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:       cat
//  action 1:   the cat meows
cat.meow();
//  action 2:   the cat purrs
cat.purr();
//  action 3:   the cat jumps
cat.jump();
//  2)
//  Noun:        tree
//  action 1:    the tree grows
tree.grow();
//  action 2:    the tree sheds leaves
tree.shedLeaves();
//  action 3:    the tree absorbs CO2
three.absorbCO2(); // Not sure of the CO2 in capital letters
//  3)
//  Noun:        phone
//  action 1:    the phone rings
phone.ring();
//  action 2:    the phone vibrates    
phone.vibrate();
//  action 3:    the phone takes photos
phone.takePhoto();
//  4)
//  Noun:        airplane
//  action 1:    the airplane flies
airplane.fly();
//  action 2:    the airplane takes off
airplane.takeOff();
//  action 3:    the airplane lands
airplaine.land();
//  5)
//  Noun:        washing machine
//  action 1:    the washing machine washs
washingMachine.wash();
//  action 2:    the washing machine dries
washingMachine.dry();
//  action 3:    the washing machine spins
washingMachine.spin();
//  6)
//  Noun:        camera
//  action 1:    the camera takes pictures
camera.takePicture();
//  action 2:    the camera records video
camera.recordVideo();
//  action 3:    the camera zooms
camera.zoom();
//  7)
//  Noun:        chair
//  action 1:    the chair tilts back
chair.tiltBack();
//  action 2:    the chair rotates
chair.rotates();
//  action 3:    the chair adjusts height
chair.adjusetHeight();
//  8)
//  Noun:        wireless charger
//  action 1:    the wireless charger charges devices
wirelessCharger.chargeDevice();
//  action 2:    the Wireless charger indicates charging status
wirelessCharger.indicateChargingStatus();
//  action 3:    the wireless charger consumes energy
wirelessCharger.consumeEnergy();
//  9)
//  Noun:        microwave
//  action 1:    the microwave heats
microwave.heat();
//  action 2:    the microwave defrosts
microwave.defrost();
//  action 3:    the microwave beeps
microwave.beep();
//  10)
//  Noun:        remote control
//  action 1:    the remote control changes channel
remoteControl.changeChannel();
//  action 2:    the remote control adjusts volume
remoteControl.adjustVolume();
//  action 3:    the remote control ajusts settings
remoteControl.adjustSettings();

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
  std::cout << "good to go" << std::endl;
  return 0;
}
