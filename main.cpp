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
//  Noun: mySuperAwesomeAndPwettyBichir
//  action 1: devours a worm
mySuperAwesomeAndPwettyBichir.devourWorm();
//  action 2: sleeps in the plants at the surface
mySuperAwesomeAndPwettyBichir.sleepInFloatingPlants();
//  action 3: makes super big poops
mySuperAwesomeAndPwettyBichir.makeBigPoop();
//  2)
//  Noun: theColorfullPlaty
//  action 1: eats some flakes
theColorfullPlaty.eatFlakes();
//  action 2: swims in group
theColorfullPlaty.swiminGroup();
//  action 3: dies alone
theColorfullPlaty.dieAlone();
//  3)
//  Noun: khuliLoach
//  action 1: swims on the glass
khuliLoach.swimOnTheGlass();
//  action 2: hides in the sand
khuliLoach.hideInTheSand();
//  action 3: asks for more food
khuliLoach.askForMoreFood();
//  4)
//  Noun: theGrandPike
//  action 1: swims in circles
theGrandPike.swimInCircle();
//  action 2: hunt for food
theGrandPike.huntForFood();
//  action 3: grows bigger
theGrandPike.growBigger();
//  5)
//  Noun: LittleBird
//  action 1: fly around
LittleBird.flyAround();
//  action 2: make new nest
LittleBird.makeNewNest();
//  action 3: lay three eggs
LittleBird.layThreeEggs();
//  6)
//  Noun: water
//  action 1: freezes
springWater.freezeSuperFast();
//  action 2: melts
springWater.meltSuperFast();
//  action 3: sublimates
springWater.evaporateSuperFast();
//  7)
//  Noun: prettyFlower
//  action 1: grows taller
prettyFlower.growTaller();
//  action 2: blooms 
prettyFlower.bloomAgain();
//  action 3: withers // fades could cause confusion
prettyFlower.witherAndMakeSeeds();
//  8)
//  Noun: frontDoor
//  action 1: opens
frontDoor.openWithoutNoise();
//  action 2: closes 
frontDoor.closeWithNoise();
//  action 3: creaks a lot
frontDoor.creakALot();
//  9)
//  Noun: WierdDog
//  action 1: walks on two legs
wierdDog.walkOnTwoLegs();
//  action 2: runs backwards
wierdDog.runBackwards();
//  action 3: barks in silence
wierdDog.barkInSilence();
//  10)
//  Noun: something
//  action 1: does something
something.doAction1();
//  action 2: does something else
something.doAction2();
//  action 3: does another thing
something.doAction3();

// Honestly, coming up with random names and actions is harder than giving your variables and functions a proper descriptive name. I come from a C# (Unity) background, if this can help you. 
 
#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
