# ***9623Y Spin Up Notebook***


# ***Important Info & ToC***

1. [***Team Bio***](#team-bio)
2. [***Game Explanation***](#game-explanation)
3. [**5/11/22 - _The Contest Begins_**](#51122---the-contest-begins)
4. [**5/12/2022 - _Beginning Design_**](#5122022---beginning-design)
5. [**5/16/2022 - _Fusion Design Begins_**](#5162022---fusion-design-begins)
6. [**5/17/2022 - _Design Continues and Building Begins_**](#5172022---design-continues-and-building-begins)
7. [**5/18/2022 - _Prototyping Continues_**](#5182022---prototyping-continues)
8. [**5/19/2022 - _Designing a Test_**](#5192022---designing-a-test)
9. [**5/20/2022 - _Gear Ratios_**](#5202022---gear-ratios)
10. [**5/23/2022 - _Programming and Maybe Testing_**](#5232022---programming-and-maybe-testing)
11. [**5/24/2022 - _Programming and Working Towards Finalizing the Prototyping/Test Bed_**](#5242022---programming-and-working-towards-finalizing-the-prototypingtest-bed)
12. [**5/25/2022 - _Continuing Work on the Test Bed_**](#5252022---continuing-work-on-the-test-bed)
13. [**5/26/2022 - _Testing Begins_**](#5262022---testing-begins)
14. [**5/27/2022 - _Heavily Testing_**](#5272022---heavily-testing)
15. [**5/31/2022 - _Launcher Testing and Intake Design_**](#5312022---launcher-testing-and-intake-design)
16. [**7/28/22 -  _Returning from break / Returning to planning_**](#72822----returning-from-break--returning-to-planning)
17. [**8/18/2022 - _Beginning Work in Class / First In-Season Team Meeting_**](#8182022---beginning-work-in-class--first-in-season-team-meeting)
18. [**8/19/22 - _Intake Design_**](#81922---intake-design)
19. [**8/22/2022 - _Intake Prototype Building Begins_**](#8222022---intake-prototype-building-begins)
20. [**8/23/2022 - _Intake Prototype Design and Discussion Day 2_**](#8232022---intake-prototype-design-and-discussion-day-2)
21. [**8/24/2022 - _Intake Problem Solving_**](#8242022---intake-problem-solving)
22. [**8/25/2022 - _Base Prototype Building Begins_**](#8252022---base-prototype-building-begins)
23. [**8/26/2022 - _Mecanum Base Experimentation_**](#8262022---mecanum-base-experimentation)
24. [**8/29/2022 - _Intake Prototyping and GPS Testing_**](#8292022---intake-prototyping-and-gps-testing)
25. [**8/30/22 - _Intake Prototyping Day 2_**](#83022---intake-prototyping-day-2)
26. [**8/31/2022 - _Intake Prototyping Day 3_**](#8312022---intake-prototyping-day-3)
27. [**9/1/2022 - _Intake Prototyping Day 4_**](#912022---intake-prototyping-day-4)
28. [**9/2/2022 - _Intake Prototyping Day 5_**](#922022---intake-prototyping-day-5)
29. [**9/6/2022 - _Intake Prototyping Day 6_**](#962022---intake-prototyping-day-6)
30. [**9/7/2022 - _Intake Prototyping Day 7_**](#972022---intake-prototyping-day-7)
31. [**9/8/2022 - _Intake Prototyping Day 8_**](#982022---intake-prototyping-day-8)



## ***Team Bio***




## ***Game Explanation***
This year the competition is titled VEX: Spin-Up

The field will be divided diagonally.

robots will be attepting to score discs from the field into high goals,low goals as well as at the end of the round cover as many tiles as possible. Teams may also change the color of rollers to their assigned color to gain points as well.
Rollers are worth 10 points per (4 rollers)
High goal scores 5 points per(1 goal per team)
Low goal scores 1 point per(1 goal per team)
tile scores 3 points per tile covered(36 tiles)
The team also can gain 10 points from winning the autonomous period
The game starts with 15 seconds autonomous period, then a 1:45 minute driver controlled period.

You can score points in autonomous, however the same rules still apply to both autonomous and driver controlled periods. Trapping a robot is not allowed, which includes blocking a robot from moving on their path. Trapping for 5 seconds or more will penalize the team on the offense. You get 2 preloaded discs and 7 match discs you can load onto the field at any time. During the matches, you have an internal disc capacity of at most 3 discs at any given time. Building has a limit of 8 motors, 2 pneumatic resivoirs(each at 100Psi max). No external tampering with any electronic components is allowed. There is a 24" vertical height limit and an 18" by 18" horizontal height limit. Horizontal expansion does become unlimited at the last 10 seconds of the driver controlled period.


### ***Scoring***

|Scoring Objective| Points Rewarded |
| :---: | :---: |
|Disc Scored in High Goal| 5 points|
|Disc Scored in Low Goal| 1 point|
|Owned Roller| 10 points|
|Each Covered Field Tile| 3 points|
|Winner of Autonomus Bonus| 10 points|





-------




# Dated Entries




## **5/11/22 - _The Contest Begins_**

Tonight a one week build and design contest to see who can build the best disc launcher for Spin Up was announced in out Robotics team Discord server. We began working on designs as soon as we saw the announcement.


### **The Challenge**

The main challenge with designing a good launcher is finding a balance between spinning the discs enough so that they are able to keep balanced throughout their flight and provided the discs with enough forward momentum so that the discs are able to reach the high goal, another challenge that will be faced is finding the optimial angle to launch the discs at, launch at too steep of an angle and the disc is going straight over the high goal, launch at too shallow of an angle and that disc is going right into the enemies low goal.


### **Criteria for an optimal launcher**

- Be able to spin the discs enough to keep them balanced in air
- Launch the Discs at an acceptable velocity
- Have some type of resivor to hold the 3 disc capacity
- Some sort of pusher arm to feed the discs from the resivor into the flywheel(s)
- Be compact enough to allow for an intake while still being functional


### **Possible Designs for Launchers**

- 2L1R (2 Left 1 Right) Flywheel System
  - A Flywheel system with two Flywheels on the left side and one flywheel on the right side, the first flywheel on the left side works to induce spin and feed the second set of flywheels which give the disc it's forward momentum. The spin induced by the first flywheel by having the flywheel on the same side as the first flywheel spining faster than the flywheel opposite from it.
- 2L0R (2 Left 0 Right) Flywheel System
  - A flywheel system that works by using two flywheels on one side with none on the other side that both spin the disc as well as give the disc a decent amount of forward momentum by using the wall on the side opposite to help guide the disc straight
- 1L1R (1 Left 1 Right) Flywheel System
  - A flywheel system that uses two flywheels on each side spining in opposite directions to propel the disc forward, with this method spin on the disc is induced by one flywheel spining faster than the other.


### **End of Entry Thoughts**

It's getting rather late to continue, so we will continue on tomorrow. Tomorrow we will begin mock designs of the differnt possible designs for the Launcher in Fusion as well as expand further with any new ideas or additions to past ideas.



-----



## **5/12/2022 - _Beginning Design_**

Today we will begin working on concept designs of the possible designs that were mentioned last night. First we will do a diagram of how the flywheel system should work in theory, then we will begin to design the launchers more indepth in Fusion 360, so we will be able to build the launchers physically easily because we can just copy the in-depth designs from Fusion 360.


### **Goals for Today**

- [x] Diagram how the 2L1R system will work
- [x] Diagram how the 2L0R system will work
- [x] Diagram how the 1L1R system will work
- [ ] (If time) Begin desinging the 2L1R system in Fusion 360
- [ ] (If time) Begin desinging the 2L0R system in Fusion 360
- [ ] (If time) Begin desinging the 1L1R system in Fusion 360


### **Diagrams of the Different Possible Flywheel Systems**

In the diagrams the black arrows represent the direction of spin of the flywheels(the grey circles), while the red arrows represent the effect that the flywheels had on the disc(yellow circles). In the case of the black arrows, the larger the arrow the faster the flywheels are spinning. In the case of the red arrows, the larger the arrow the greater the effect the flywheels are having on the the disc.


![image](https://user-images.githubusercontent.com/102620185/168121627-b917f3b5-effa-49e0-ad0d-7ccc6f0134f8.png)


![image](https://user-images.githubusercontent.com/102620185/168122349-67391738-b4c8-435c-b528-131fb72ac656.png)


![image](https://user-images.githubusercontent.com/102620185/168186614-59678fa3-d9a9-4819-adb0-48b6cc12ecd8.png)



### **End of Entry thoughts**

Today I was able to get the Diagrams for each type of flywheel system made and put it to the notebook, however I ran out of time to begin working on the in-depth designs of each flywheel system because I was helping with the creation of a Fusion 360 library that has every VRC legal part in it as well as every size piece of metal available. This parts library is to help save our robotics teams time when they model their robot in CAD.



-----



## **5/16/2022 - _Fusion Design Begins_**

Today, Me(Rhett) and Tyler, are going to begin designing our prototype launchers in Fuison. The First Design we will do in Fusion is the 2L1R Launcher, then we will move on to the 2L0R and 1L1R Launchers if time allows today. The main Goal today is to get the 2L1R Launcher fully built in Fusion so that we can hopefully get it completely built in one team meeting tomorrow then we can begin on the other two designs.


### **Goals for Today**

- [x] Begin to Design the 2L1R Launcher in Fusion
- [ ] (If time)Begin to design the 2L0R Launcher in Fusion
- [ ] (If time)Begin to design the 1L1R Launcher in Fusion


### **Designing of the 2L1R Launcher**

#### **The Ramp**

The Ramp is made of 3 1x5x1x22 Steel C-Channels and 2 1x2x1x22 Alumnium C-Channel being is held together by 32 Star drive #8-32 x 1/4" screws with Nylon Nuts on them. We chose this design because the 5 wide C-Channels allow for enough space for the disc and flywheels and the 2 wide C-Channel gives a place to mount the flywheels and motors with a gear ration on.

- Top View

![image](https://user-images.githubusercontent.com/102620185/168681511-b60f925a-3e57-466e-990b-792fd131b7ac.png)

- Bottom View

![image](https://user-images.githubusercontent.com/102620185/168681578-8ebbeaea-b7c8-4508-a616-37dee6d5b2ee.png)

- Screw Placement

![image](https://user-images.githubusercontent.com/102620185/168681602-184568c0-4a61-4279-856c-b62be762183e.png)


#### **The Flywheels and their Gear Ratios**

For the Gear Ratio we are using a 1:10 Ratio with at Green Motor. We chose this Ratio because we will be able to dial back the speed from the full speed to the target speeds of 1600 and 1500 RPM and because the motors aren't running at full force they will be under less strain meaning they are less prone to overheatings, and with the two different sides of the flywheel system spinning at different speeds, because we are tuning the speed of the motor down with the code, we can use the same gear ratio on both sides, this will also make it easier to sync up the motors if we want to be able to control the speed of the flywheels mid match.

##### **Diagram of the Gear Ratio for the Flywheels**

![image](https://user-images.githubusercontent.com/102620185/168694547-b73bff81-094d-4452-94c5-6e3d00ecba0f.png)

##### **Further explaination of the Gear Ratio**
Both sides will have the same gear ratio but on the left side where there is two motors, following the 12 tooth pinion gear in the 1:5 ratio a series of 1:1 ratios will continue that motion to the second flywheel. This means that the Flywheel system only needs 2 motors instead of 3 meaning we have 1 motor to allocate else where.


### **End of Entry Thoughts**
I was unable to get the 2L1R Launcher Fully Designed in Fusion today, I'm hoping to be able to finish it tomorrow morning before we meet for Robotics, today was very productive however as we were able to figure the Gear ration for the flywheels and have come up with a game plan of how to design it.




-----




## **5/17/2022 - _Design Continues and Building Begins_**

Today we are going to have the first meeting since the build and design contest began meaning that we will able to begin to build our prototype launchers today. However before the meeting today I'm going to try and design the rest of the prototype launcher before we have our meeting today. If I'm able to get the design finished in Fusion before the meeting we will be able to easily build the prototype and possibly begin coding today. When I(Rhett) got  into class today I began to talk with Mr.Holmes about the next step, he said before we begin to work on a launcher we should do tests to figure out what the best rpm to launch the discs at are and make tables to show that data, instead of just designing off of what we guess will work the best. He also suggested to use blue gearboxes for the motors so we would need less of a gear ratio to get to our target rpm to reduce friction in between the gears. So instead of finsihing the design for the launcher we began working on a prototyping bed to run our tests on.


### **Goals for Today**

- [x] Begin Designing a prototype bed in Fusion
- [x] Begin Prototyping
- [x] (If time) Program the Prototype

### **Designing of the Prototyping Bed**

#### **The Base for the 1L1R prototype**

The Base is made up of a 15x30 Steel Base Plate and two 1x2x1x30 Aluminum C-Channels and held together by 8 #8-32 x 1/4" screws with Nylock Nuts on them. We chose to use nylocks so that the basee would be sturdy enough so that it would be able to produce consistent tests while we try different rpms to fire the discs at. This Base is going to be the foundation for all the test we do with the 1L1R System  to find what the best RPM for the flywheels to run at is. Two of these bases can belinked together to get the base used for the 2L1R Prototype.

- Top View

![image](https://user-images.githubusercontent.com/102620185/168926641-d5713442-36da-493e-980f-6d294d65b40d.png)

- Bottom View

![image](https://user-images.githubusercontent.com/102620185/169158093-2a7e29fa-b61a-4f7a-ad80-71c3aca5fb21.png)

- Screw Placement

![image](https://user-images.githubusercontent.com/102620185/169158126-c04b5038-d448-4146-b5ba-af1e51a57778.png) __________![image](https://user-images.githubusercontent.com/102620185/169158319-9babcb69-27a9-4af8-b119-0fdbe5745c51.png)


### **End of Entry Thoughts**

Overall today was very productive and I feel like we mad great progress on our prototyping bed, tomorrow we will hopefully be able to finish designing the beds and get them put together so that we can begin testing either tomorrow or Thursday. I think that these prototypes and test will be very helpful to our final design because it will allow up to go into beginning our design for the launcher on our robot knowing what works and what the best format for the launcher will be.




------




## **5/18/2022 - _Prototyping Continues_**

Today we will continue prototyping with the same Design as yesterday. The first thing to work on today is a pnuematic pusher to feed the discs into the flywheels so we can get consistent test results. Then if time allows we can begin to work on designing the different tests for the different speeds we could possibly use for our flywheels.


### **Goals for Today**

- [x] Design the Pnuematic Pusher
- [ ] (If Time) Began to create a formulated test for rpm to run the flywheels at
- [ ] (If Time) Work on a Universal Gear Ratio to test the different RPMs at
- [ ] (If Time) Begin testing


### **Designing of the 1L1R Prototyping Bed(_Cont._)**


#### **The Pnuematic Pusher**

This Pnuematic pusher will allow us to consistantly push the disc in a way that will provide accurate results when we test the effectiveness of the flywheels running at different speeds.


###### **The Mount**

The Mount for the pnuematic piston has to be extremely sturdy because we dont want the piston to be able to move around when firing it because it would throw off the results of our tests.

###### **The Mounting Point**

The mounting point that we will mount the cylinder to is a Bevel Gearbox screwed into our base plate as far back as possible. We chose to use a bevel gearbox to mount the pneumatic piston to because it is small enough to not take up too much room on our prototyping bed while still being sturdy enough so that it won't move around while firing. This gearbox is screwed into the bed with 2 #8-32 x 3/8" screws with Nylocks on them.

- Side View

![image](https://user-images.githubusercontent.com/102620185/169047632-7615d9fe-0752-47a7-afa2-b633b1e38b15.png)

- Top View

![image](https://user-images.githubusercontent.com/102620185/169177544-e0a09b7a-b18d-41f9-b968-fad7f35d7f57.png)

- Screw Placement

  - Bottom View

  ![image](https://user-images.githubusercontent.com/102620185/169177607-29cd20ec-ec32-4638-80b5-89e4118727b5.png)

  - Top View

  ![image](https://user-images.githubusercontent.com/102620185/169177511-f853c883-4c27-4b6e-b8da-6a42acb195f8.png)


###### **Mounting the Cylinder**

The Cylinder is mounted to the gearbox with the standard cylinder mounting bracket, attached to cylinder with a #8-32 x 7/8" screw with a nylock nut, screwed into the bottom row of the gearbox with two #8-32 x 1/4" screws held and nylock nuts. We chose this mounting format because it places the cylinder at about the center of the disc width and height wise meaning that it will be able to consistently push the disc straight into the flywheels.

- Mount Without Cylinder Attached

![image](https://user-images.githubusercontent.com/102620185/169172020-7459bf92-7f0e-4b6c-8d91-032d7cb0b1aa.png)

- Side View

![image](https://user-images.githubusercontent.com/102620185/169174490-a7a6ce81-c3b3-4255-b5eb-5fa45d2caa53.png)

- Top View

![image](https://user-images.githubusercontent.com/102620185/169177442-8c7fcd05-46c2-41bf-b0df-be6895d72e4b.png)


###### **Rod Guide**

Even though the piston would work to push the discs in its current state, a rod guide that doubles as a support for the cylinder and triples as the back of a place to set the disc. The rod guide will be a piece of 10 long 2x2 Aluminum angle, this will have 1 piece of 10 long 2x2 Aluminum angle on either side to act as the disc guide as well. These pieces of 2x2 Aluminum angle are each held down by two #8-32 x 3/8" screws with Nylock nuts. We opt'ed to use Nylock nuts so that we can ensure that the Angle pieces aren't able to move around and are very steady so that we can get consistent test results.


###### **Issue**

While looking at spacing for a prototype I built to base my fusion design off of the cylinder bore looks a good bit shorter in Fusion than it is in real life. So just in case it is I'm going to wait until I can check and see whether or not the cylinder bore in Fusion is a different length than the actual physical cylinder bore because if the lengths are different the designs could very in spacing greatly between Fusion and real life.


### **End of Entry Thoughts**

It's quite unfortunate that there is potentially a spacing issue because I would have like to get a prototyping bed close to fully built in Fusion tonight. At least I have a pnuematic pusher designed physically and built and I just need to wait and see if lengths are correct for the cylinder bores and if I need to alter the design to accomodate for any potential differences. Since I can't really work on designs until I know what my spacing is for the pnuematic pusher, I would like to begin tomorrow by working on forumalating a test for the different RPM Speeds and work on figuring out a gear ratio that will work universally for all the different RPMs so we dont have to constantly change gear ratios on the prototyping bed.




---------




## **5/19/2022 - _Designing a Test_**

Today we will work on coming up with a test to test the different RPMs that we could run the launcher at so that we can figure out what the most optimal RPM for the flywheels are. We will also work to come up with a gear ratio that we think will impact the speed of the flywheels after a disc is launched the least and that will get us to all the different RPMs we want through chaning the code.


### **Goals for Today**

- [x] Come up with a test that we can use to Test the different RPMs for the flywheels
- [x] Come up with requirements for a gear ratio to use with the test


#### **The Test**

For our test we will start out at 600 RPM for each motor and then gradually increase the RPM of each motor by intervals of 100 each time up to 6000 rpm, for each different rpm we will shoot ten discs and average their distance together for our data entry, each set of ten will be done with a fully charged battery and a full cylinder at 100 psi, this test will give us a good base line for how each different RPM combination preforms and then we will be able to test the RPMs with the best result with the different flex wheel hardnesses to figure out what hardness will work the best, we might also look at combining different hardnesses of Flex Wheels.


#### **Gear Ratio to Test With**

For a Gear Ratio to test with we were thinking about using a 1:10 gear ratio potentially using 5 gears, we chose to use 5 gears because it would transfer less energy to the motor, which means less wear on the motor as well as the motor will be able to spin back up to speed faster, which means we can shoot at a faster rate. This Gear Ratio will allow use to get all of the speeds we want for the flywheels with one gear ratio and the use of selecting the speed in the code. We will work to design a Gear Ratio that fits these requirements tomorrow.


### **End of Entry Thoughts**

Althought we didn't do much today, today's discussion about what the test should look like and what kind of gear ratio we think would work the best, this discussion helped us layout how our next week or so will look and what we need to do to test everything properly and get the best idea of what will be most effective for our launcher on our robot when we begin buildin



-------




## **5/20/2022 - _Gear Ratios_**

Today we are going to took at all the different gear ratios and come up with a compound gear ratio that can get us up to our desired RPM target, this Gear Ratio may only be for testing and we come up with a gear ratio that puts us closer to our ideal RPM for our flywheels or this gear ratio may be implemented into our actually launcher if it performs well enough.


### **Goals For Today**

- [x] Make a Table of all Possible Simple Gear Ratios
- [x] Look at all 1:10 Compound Gear Ratios
- [x] Pick a Gear Ratio out of the different possible 1:10 Gear Ratio


### **Taking a look at all possible Simple Gear Ratios**

||**12 T Driven**|**24 T Driven**|**36 T Driven**|**48 T Driven**|**60 T Driven**|**72 T Driven**|**84 T Driven**|
| :----: | :----: | :----: | :----: | :----: | :----: | :----: | :----: |
|**12 T Driving**|1:1|2:1|3:1|4:1|5:1|6:1|7:1|
|**24 T Driving**|1:2|1:1|3:2|2:1|5:2|3:1|7:2|
|**36 T Driving**|1:3|2:3|1:1|4:3|5:3|2:1|7:3|
|**48 T Driving**|1:4|1:2|3:4|1:1|5:4|3:2|7:4|
|**60 T Driving**|1:5|2:5|3:5|4:5|1:1|6:5|7:5|
|**72 T Driving**|1:6|1:3|1:2|2:3|5:6|1:1|7:6|
|**84 T Driving**|1:7|2:7|3:7|4:7|5:7|6:7|1:1|


### **1:10 Gear Ratio Chosen for Prototyping bed**

When I got into class Tyler and our other friend Alex who is helping us with this bed had been working on it and had decided on a 1:10 Gear Ratio that used a 48T Gear Driven by the motor to a 24T Gear on an axle with a 60T Gear that was driving a 12T Gear. This Gear Ratio was chosen because it gives us a ceiling of 6000 RPM and will allow us to test a wide range of different RPMs. We chose 6000 RPMs as our ceiling because of tests I've seen online that use 3000 RPM Flywheels that are unable to consistently score from the opposite side of the field which gives me an estimate that the ideal gear ratio will be somewhere around 4500 RPM but may be higher than that or maybe even lower than that.


### **End of Entry Thoughts**

Today I'm happy with what we got done and we will hopefully be able to get a program written on Monday and begin testing either Monday or Tuesday to get our Results and begin to test other things, our test will most likely be done 3 times for each type of flywheel system so that we can test the best hardness of the flex wheels for each flywheel type.




-------




## **5/23/2022 - _Programming and Maybe Testing_**

Today we will look at getting a program written for our prototyping bed that will output the RPMs of the flywheels to an array so we can import the data into a spredsheet and look at a graph of how the disc going through the flywheels affects the RPM of the flywheel and how long it takes the flywheels to get back up to full speed. Once this is done we will potentially be able to start testing. However we might run out of time and not be able to begin testing today.


### **Goals for Today**

- [ ] Write a Program for the test bed
- [ ] (If Time) Collect the Data from the Program and graph it
- [ ] (If Time) Begin testing


### **What The Program should be able to do**

The Program for the test bed should be able to have the flywheel speed be able to be independantly controlled with a controller and be able to fire a disc with the press of a button on the controller by acuating a pnuematic piston. This code also needs to be able to output the speed of the flywheels to an array that expands as much as needed.


### **End of Entry Thoughts**

Today we weren't able to get the program working but we will begin with that tomorrow and hopefully be able to get a program that will allow use to visualize the data recieved from the encoders on the flywheels.




------




## **5/24/2022 - _Programming and Working Towards Finalizing the Prototyping/Test Bed_**

Today we will work on getting a program that reliably collects data from the rotational sensors on the flywheels. Once that is done we will begin to try and finalize our design for the test bed so that we can begin testing.

### **Goals for Today**

- [x] Get the Program for the Test Bed Written
- [x] Begin Working towards finalizing the design of the prototyping bed
- [ ] (If Time) Begin Testing


### **Finalizing the Testing/Prototyping Bed Design**

#### **The Pnuematic Pusher**

We decided to redesign the pusher on our pneumatic piston because the old one was causing the disc to be pressed down in the back which popped the front of the disc up instead of the disc being pushed straight through the flywheels like intended

- Image of New Pneumatic Pusher Device

![Snapchat-1389870806](https://user-images.githubusercontent.com/102620185/171167628-6cb88f8b-64e3-406a-8b0f-cd6a603b9734.jpg)

#### **The Bed**

##### **Flexing Issues**

There was alot of flexing in the c-channels that held our gear ratios and had our motors and flywheels mounted to them, this flexing was causing deflection in the flywheels whenever attempting to fire a disc, to fix this issue of flexing we opted to add another base plate the is screwed in between the bottom c-channels, this made our rig very rigid and almost completely prone to any kind of flexing.


##### **Disc Hitting the Flywheels too low**

Our discs were coming through the flywheels towards the bottom which was causing the flywheels to try and ride over the disc, instead of raising the whole base plate or lowering the flyhweels we opted to add 3 layers of plexiglass for the disc to rest on so that the discs would ride up higher and be pushed through the middle of the flywheels instead of almost under the flywheel. To keep from having to raise everything on the back of the test bed up we decided to mount the pusher device higher in relation to the height of the piston so that it wouldn't have to be moved up.

- Image of Solution for the discs hitting the Flywheel too low

![Snapchat-92939264](https://user-images.githubusercontent.com/102620185/171167484-1d1cb8a3-f15e-46c1-8ab6-5ada45500a67.jpg)


### **End of Entry Thoughts**

Today we began working on finalizing the design of our prototyping bed which means that we are getting close to being able to test our first type of flywheel system and begin to gather data on what will work and what won't work.




--------




## **5/25/2022 - _Continuing Work on the Test Bed_**

Today we will continue working on the finalization of our design for the Test bed by fixing some minor issues that came with the design changes yesterday, as well as converting to high strength axles to drive the flywheels, and better securing the test bed together by making it more rigid.


### **Goals for Today**

- [x] Fix some Minor Issues that came with yesterdays design changes
- [x] Make the test bed even more rigid
- [x] Begin converting to High Strength Axles


### **Finalizing the Testing/Prototyping Bed Design(_Cont._)**

#### **The Pnuematic Pusher (_Cont._)**

When we went to mount the pneumatic pusher we designed yesterday we found out that there were some fitment issues and that we need to change the support for the piston as well as raise the mounting bracket one row of holes from the bottom row to the second row of holes on it's mounting plate.

- Image of Pnuematic Pusher Mount

![Snapchat-607726671](https://user-images.githubusercontent.com/102620185/171167272-6c0dc82e-38db-4b2a-88d9-b2c40d027b10.jpg)


#### **Bed Rigidity**

Our bed was more than likely already rigid enough but when the base plate connecting the bottom c-channels got put in it was no square with the c-channels and was causing mounting issues. In our move to High Strength axles we swapped the 2 wide c-channel we had on the sides out for 3 wide c-channel to give enough room to the high strength axles and their bearing blocks. When we took apart the bed to re-level it we decided to add more standoffs to create more support for the beds and c-channels this means that the bed will be more stable and have less flexing issues.

-Image of New Bed Desing

![Snapchat-834160790 (1)](https://user-images.githubusercontent.com/102620185/171167916-e3ff7d24-4860-4b93-b6a9-b4796dfe681c.jpg)

#### **Conversion to High Strength Axles**

We also decide to convert the axles for the flywheel system to high strength axles because they are going to be what we most likely use in our actual robot so we need to run all of our tests using them, this will allow us to have accurate data to base our robot off of. We chose to use high strength axles because they are less likely to bend and twist that the low strength axles and flex less than the low strength axles.

-Image of High Strength Axle gear ratio

![Snapchat-1892870560](https://user-images.githubusercontent.com/102620185/171167555-628fe186-0d48-4a47-b999-64921d0a07bb.jpg)


### **End of Entry Thoughts**

Today we got a lot done and we are very close to being able to begin testing to figure out what will work the best for our flywheels. I am very happy with the progress we made today and feel like the we will be able to get the testing done and begin looking at intakes very shortly.




-------




## **5/26/2022 - _Testing Begins_**

Today we're gong to finish converting our test bed to high strength axles. Once we finish converting the test bed we can begin testing and collecting data on rpm values and how long the flywheel takes to get back up to the set rpms after a disc is launched through it.

### **Goals For Today**

- [x] Convert test bed to high strength axles.
- [x] Collect data on different rpm values.
- [x] Measure and record how long it takes for the flywheel to get back up to speed after a disc is fired

### **Analysis of Data**


##### **Test 1 Graph**

![image](https://user-images.githubusercontent.com/102620185/171165553-177020b7-27bb-41ac-a13a-69132239f64f.png)

Looking at the graph it's apparent that the flywheels take around 2 seconds to spin up to our desired rpms. After the desired rpm is reached it tends to fluctuate above or below our target speed by up to 50 rpm.

#### **Test 2 Graph**

![image](https://user-images.githubusercontent.com/102620185/171165650-8db16ba6-cbae-49ef-8594-a650941eeab9.png)

In this test we reduced the speed of the left flywheel to create a horizontal disc spin to prevent wobble and make shots more accurate. The left flywheel is spinning at 1500 rpm while the right is spinning at 2000 rpm. The left motor didn't take as long to reach it's full speed but the diffrence seems almost negligible. When we shot a disc through the flywheel the right one lost more speed, losing around 600 while the left motor lost around 250. The recovery time was also much shorter on our left flywheel, being around half a second while the right flywheel took around a second to recover. While I expected there to be a diffrence in the rpm loss and recovery time was to be expected, it was a surpise to me that the diffrence in numbers was that large.

### **End Of Entry Thoughts**

The data we are collecting today is crucial for the design of our bot and the overall outcome of our team this season. I'm glad we are figuring this data out now to implement on the bot later. I'm very happy with the test bed and the kind of crucial data it's been able to provide us. Now that we've finished designing the test bed, we can run all the different tests we need to collect even more data that will help in the designing of our bot. Tests we'll be running are things like what hardness of flex wheels is best for distance and accuracy, how combinging wheels affects our results, what kind of grarbox/rpm is optimal for our goal, what the best angle to shoot from is and what can be done to reduce time required to get the flywheel back up to speed.




------




## **5/27/2022 - _Heavily Testing_**

Today we will begin testing all of the things in our end of entry thoughts from yesterday as well as many other new things such as will the motors be able to run at full speed for the entire match without losing performance.


### **Goals for Today**

- [x] Test Different RPM Combinations with 1 Fixed at 2000 RPM
- [ ] Test Different Wheel Hardnesses and Combinations of Wheel Hardnesses
- [ ] Run the Motor Overheat Tests
- [ ] What is the best overall setup (angle, rpm, wheel hardness)
- [ ] What can be done to decrease spin up and recovery time of the Flywheels


### **Testing**

#### **RPM Combination Testing - Test 001 A-U**

For all of these test we will do five shots at each different tested settings with a fresh fully charged battery and a full tank of air. The Camera is posistion 8 feet away from the base line that is in line with the center of the Launcher with the Camera 4 feet in the air.

##### **Inital Take Away**

My inital take away before reviewing footage from this test is that with the left flywheel spinning slower the disc seems to not only go straighter but fly farther than the discs fired with the right flywheel spinning slower. Something I noticed when the right flywheel was spinning slower was that the discs began to shoot out right instantly and began curving to the left, unlike the disc fired with the left flywheel moving slower which caused the disc to curve to the right.

##### **Table of Data**

||Left Flywheel RPM|Right Flywheel RPM|Stable (Y/N)|
|:---|:---:|:---:|:---:|
|Test 001 A|2000|2000|N|
|Test 001 B|1900|2000|N|
|Test 001 C|1800|2000|N|
|Test 001 D|1700|2000|N|
|Test 001 E|1600|2000|Y|
|Test 001 F|1500|2000|Y|
|Test 001 G|1400|2000|Y|
|Test 001 H|1300|2000|Y|
|Test 001 I|1200|2000|Y|
|Test 001 J|1100|2000|Y|
|Test 001 K|1000|2000|Y|
|Test 001 L|2000|1900|N|
|Test 001 M|2000|1800|N|
|Test 001 N|2000|1700|N|
|Test 001 O|2000|1600|Y|
|Test 001 P|2000|1500|Y|
|Test 001 Q|2000|1400|Y|
|Test 001 R|2000|1300|Y|
|Test 001 S|2000|1200|Y|
|Test 001 T|2000|1100|Y|
|Test 001 U|2000|1000|Y|


##### **Take Away**
I noticed that the disc tends to stabalize around when one wheel is spinning at 2000 and the other at 1600. While it does get more stable as one side is decreased, it also tends to veer more and not go as far. The veering is more noticable when the left wheel is spinning faster than the right wheel. The disc is more stabalized as the left wheel is slowed and the right wheel is kept at 2000.


### **End of Entry Thoughts**

We didn't get as much as we wanted to do today done, but we will continue to do a few more test Tuesday, then we can move on to desinging and building intakes. Today however yielded some valuable information on combinations of flywheel speeds that will greatly help us in future designing of launchers.




--------



## **5/31/2022 - _Launcher Testing and Intake Design_**

Today we will continue to do a small amount of final testing on the launcher such as overheat testing, and then we will move on to designing and building an intake prototype.


### **Goals for Today**

- [x] Overheat Testing for Launcher - (Test 002)
- [x] Test Number of Pneumatic Shots - (Test 003)
- [x] Begin Designing Intake
- [ ] (If time) Begin Building Intake


### **5/31/2022 Testing**

#### **Test 002**

Test 002 is going to be focused on figuring out if our motors begin to lose performance due to things such as thermal issues over the span of 2 minutes. This will help us figure out whether or not we will be able to run our flywheels constantly over the full length of the match or if we will have to have the flywheels only cut on when we need to shoot discs.

##### **Test 002 A**

![image](https://user-images.githubusercontent.com/102620185/171196552-35a788d1-b255-4a3f-a739-935a2fd2c38e.png)

Left Flywheel:2000 Right Flywheel:2000 for 2 minutes with no discs

There was little to no change in speed and the motors didn't get much warmer, with the tempurature only varying a few degrees.

##### **Test 002 B**

![image](https://user-images.githubusercontent.com/102620185/171196277-e7cb22c9-ab79-44b9-aabe-4c2dd934689f.png)

Left Flywheel:1500 Right Flywheel:2000 for 2 minutes with discs every 10 seconds

While it does dip down after firing a disc, it does stabalize fairly quickly and we don't lose any performance throughout the test.

#### **Test 003**

This test was to figure out how many shots could be realiably gotten on one tank of air with our current pnuematic pusher. This will help us figure out how many shots we could potentially have during a match.

##### **Test 003 A**
When we ran the test with the regulator, we were able to get around 75-80 good shots.

##### **Test 003 B**
When we ran the test without the regulator, we were able to get around 60-65 good shots.

### **Design**

#### **Intake Design**
We decided that we would prefer a single motored design over a double motored design. One idea for a duel motored design we had was to create tracks with rubber flappers along the sides that lifted the disc through the robot. A way to make this design use only one motor is to create longer flappers and replace one track with a wall to prevent the disc from falling out.

Another idea we found was an intake system using flex wheels that pushed the disc up through the back of the robot and out the top into the launcher.

### **End of Entry Thoughts**
We found a lot of valuble information through different tests we ran today. Some test results, like Test 002, varied greatly from our original hypothesis. We were able to get everything we wanted to do done which allows us to move on tomorrow. We plan to continue designing intakes and building a prototype of one or more designs.




--------



## **7/28/22 -  _Returning from break / Returning to planning_**

Today we came back together as a team to planning design ideas and to explore some of the rules that have changed or been updated since the last time we met.

### **Goals for Today**

- [x] Look over the Version 1.1 Game Manual
- [ ] Discuss Possible Robot Ideas
- [ ] (If Time) Begin designing intake

#### **Looking over the Game Manual**
* There is now no verical expansion limit in the endgame - SG5
* No trap limit in endgame - G15

#### **End of Entry**

We didnt get a ton done because we started rather late at night so we only got looking over the game manual but we will do some more work later in the week.




--------




## **8/18/2022 - _Beginning Work in Class / First In-Season Team Meeting_**

Today we began working in class on a drive train to mount our prototype intake on, as well as brainstorming and designing an intake for our robot. We also have our first team meeting of the season afterschool for returning members.


### **Goals For Today**

- [x] Begin Building Drivetrain to Mount Prototype intake on
- [x] Begin brainstorming and  a few different prototype intakes
- [x] Figure out teams involving returning members during the meeting


#### **Drivetrain for intake prototype**

*For our drive train we are planning on going with a 4 motor drive train with omni wheels that is 25 Wide and 30 Long. This should mimic the approximate size of our base for our final robot and should allow us to prototype a way to intergrate our Flywheel and intake together after we have designed our intake.*


#### **Possible Intake Designs**


##### **Flex Wheel Intake**
One option for a possible intake would be to have multiple rows of flex wheels, with the bottom row of flex wheels being smaller and able to move up and down to accommodate for the height and oriantation of the disc.


##### **Intake Roller Intake**

###### **Row Configuration**
Another option is to use multiple rows of intake rollers that would work similar to the flex wheel intake and would use a mobile bottom row for adaptability.

###### **Column Configuration**
A third option is to use two columns of intake rollers on either side of the intake, with a possible bottom row of intake rollers or flex wheels to help feed the discs into the space between the columns of intake rollers.


#### **8/18/22 Meeting Overview**
Today we spent the majority of the day organizing teams with the returning members, our team didn't change at all, but we are looking at the possibility of adding a freshman to our team to give us one more member to help us out and learn about robotics.


#### **End of Entry**
Today we accomplished everything we wanted to get done and are very happy with our place right now and moving forward.




-------




## **8/19/22 - _Intake Design_**

Today we found an already built drive train to use for intake prototyping so we are going to use that instead of building one for time purposes. We are also sketching the intake designs before we build them today.


### **Goals for Today**

- [x] Contiune brainstorming possible intake ideas
- [x] Sketch out the intake ideas
- [ ] (If Time) Begin Building the intakes


#### **Drivetrain For Intake Prototyping**

When we got into class today we were looking for something to use as a testing base and found the base for Rhett and Tyler's Tipping Point robot. We wanted to test how an intake would function while being driven around, so an old base worked perfectly for prototyping. This base is 35 Long and 30 Wide with 6 wheels with only 4 of the wheels being driven by motors.

##### **Images of the Base**

![Snapchat-736651369](https://user-images.githubusercontent.com/102620185/185942969-e7989403-266a-40f0-be34-fbbae343ee40.jpg)


![Snapchat-1790966623](https://user-images.githubusercontent.com/102620185/185942988-35acb786-4855-4461-9140-b62c192d690e.jpg)


![Snapchat-1684113494](https://user-images.githubusercontent.com/102620185/185943014-b2eae981-5061-4ca0-b9ab-9cfe5210ed6d.jpg)


![Snapchat-1983686247](https://user-images.githubusercontent.com/102620185/185943067-6dc349ff-53c2-45fa-ab93-6ccc6a7278b6.jpg)


![Snapchat-41641988](https://user-images.githubusercontent.com/102620185/185943099-201cb1f5-5599-4575-a652-1362805c84e2.jpg)


#### **New Ideas for Intakes**


##### **Tank Tread Intake**

The tank tread intake works by using tank tread and paddles to pull discs in. The intake is angled slightly upwards with a piece of pelxiglass under the disc to guide it into the launcher.


#### **Intake Concept Sketches**

##### **Flex Wheel Intake Sketch**


![IMG_20220822_100521](https://user-images.githubusercontent.com/102620185/185947050-f94d49c4-26ea-483f-b40d-57310be1b409.jpg)


##### **Intake Roller RC (Row Configuration) Sketch**


![IMG_20220822_101700](https://user-images.githubusercontent.com/102620185/185946842-fe71a30e-b2e2-4cc4-9622-9bce3f6a42e8.jpg)


##### **Intake Roller CC (Column Configuration) Sketch**


![IMG_20220822_101416](https://user-images.githubusercontent.com/102620185/185947093-aefcf684-e802-417b-ac11-9c421996c3b1.jpg)


##### **Tank Tread Intake Sketch**


![IMG_20220822_100551](https://user-images.githubusercontent.com/102620185/185946952-62dbdf44-9757-4ded-947c-935cd75e11c7.jpg)


#### **End of Entry Thoughts**

Today we were able to Sketch out the intakes and are at a place where we feel that we will be able to begin building intakes on Monday.




---------




## **8/22/2022 - _Intake Prototype Building Begins_**

Today we will begin building the 4 different types of intakes, the first two we will focus on building are the tank tread intake and the flex wheel intake.


### **Goals For Today**

- [x] Begin Building Tank Tread Intake
- [ ] Begin Building Flex Wheel Intake
- [ ] (If Time) Begin Building Intake Roller RC Intake
- [ ] (If Time Begin Building Intake Roller CC Intake


#### **Intake Building**


##### **Tank Tread Intake**


###### **Images of Tank Tread Intake**

![IMG_20220822_132542](https://user-images.githubusercontent.com/102620185/185985839-faa83d0f-e681-4527-b8f2-8d9d02f5dcb3.jpg)

![IMG_20220822_132550](https://user-images.githubusercontent.com/102620185/185985854-9a0e942a-6759-4ac2-835f-e8e5c3c37aab.jpg)

![IMG_20220822_132557](https://user-images.githubusercontent.com/102620185/185985860-fbf074cb-6542-4ad7-b10c-0613c501976c.jpg)


#### **End of Entry Thoughts**

Today we were unable to finish as much as we would like, as we didnt get to start the Flex Wheel Intake but hopefully we will be able to begin that tomorrow as well as continue working on the tank tread intake.




------




## **8/23/2022 - _Intake Prototype Design and Discussion Day 2_**

Today we continued discussing our intake ideas, as well as got a rough idea of teams and showed the new kids the basics of this years game.


### **Goals For Today**

- [x] Continue Discussing Intake Ideas
- [x] Identify Potential Problems with the Different Intake Ideas
- [ ] (If Time) Begin Building our First Prototype Intake


#### **Possible Problems with Intake Ideas**

When beginning to build the tank tread intake, we ran into the issue of the vex tank treads being too flimsy for our application and too weak for our ideas. Also, when looking at intake rollers for our intake roller design, we realized that the intake rollers can only work using low-strength shafts, meaning that we wouldn't be able to use high-strength shafts. High-strength shafts are a big priority for us due to the stress the robot might be under during competitions. These discoveries led us to scraping our tank tread and intake roller intake designs and going with the flex wheel intake.


#### **Big Issue in Building the Flex Wheel Intake**

When we went to begin building our Flex Wheel Intake we found that we didn't have enough of the VersaHex Adapters to make the intake. We decided to stop there in our venture to build an intake and give ourselves until the next day to think of possible ways that we will be able to circumnavigate the need for VersaHex Adapters in our building of the Flex Wheel Intake.

#### **Meeting the New Kids**
We spent the meeting showing the new kids this season's game and telling them about different roles found in teams. We gained a new member, Ari, who we are hoping to show the ropes and help us during the season.

#### **End of Entry Thoughts**

Today we were unable to start building our intake like we had planned to do, but we were able to learn a lot from our struggles today. We will continue to overcome our challenges in building an intake tomorrow by discussing ways to bypass the need for the VersaHex Adapters while building the intakes.




--------




## **8/24/2022 - _Intake Problem Solving_**

Today we will return to discuss our possible solutions to not having enough VersaHex Adapters to make our intake. We will also begin to build our intake if we have time to.


### **Goals For Today**

- [x] Discuss Solutions to our Problems in Building the Intake
- [ ] (If Time) Begin Building the Intake


#### **Possible Solutions**

After looking at how many VersaHex Adapters we have, we found that we have enough to do at most 5 Flex Wheels with adapters in them. We chose to use these 10 Adapters in our larger flex wheels in our intake, which will be the 3" OD Flex Wheels of an undetermined hardness, and for our bottom row of wheels, which will be the 2" OD Flex Wheels of an undetermined hardness. We will insert a 12 tooth pinon in the center hole because it will friction fit in an stay held into place in the wheel. This is the simplest and best solution for solving our issue of not having enough VersaHex Adapters of every Flex Wheel.


#### **End of Entry Thoughts**

Today we were able to come up with what we believe to be a viable solution to our issue, tomorrow we will hopefully be able to make our last few design decisions on our intake prototype so we can then begin to build our intake prototype.




-------




## **8/25/2022 - _Base Prototype Building Begins_**

Today we began building a new base prototype as we found the old base unfit for our needs. We also met afterschool with the whole team to teach team members about Github who weren't knowlageable with the site.

### **Goals For Today**
- [x] Begin building base prototype
- [x] Show Ari and Rebecca how to use Github

#### **Pre-built Base Realizations**

While working with the base, we realized the pre-build base was too specialized for our needs. We aren't able to accurately test the intakes we wanted to as the results would vary from a more basic base or a base specialized to the new game.

#### **New Base**

The new base will be a mecanum base that is 12.5' long by 17' wide. It will use a 4-motor drivetrain as that is one of the most universal motor set ups and can be easily altered and coded.

#### **End of Entry Thoughts**

Today we were able to build the prototyping base and teach members who haven't use Github much, if it all, how to format the notebook. We were also able to teach Ari how we plan to do notebook compared to one from one of last season's team. While a lot of what we learned notebook-wise is from experience, we can try to help Ari understand how notebook works by showing him mistakes from last season and how we are going to fix it this year.



-------




## **8/26/2022 - _Mecanum Base Experimentation_**

Today we began experimenting with the mecanum base we built yesterday.

### **Goals For Today**
- [x] Finish building mecanum base
- [x] Start experimenting with the mecanum base

#### **Mecanum Base Testing**
We began experimenting with the mecanum base to test different movements we might have to do during competitions. While we might have some extra weight during competitions that might change how we manuver the robot, we needed to ensure we had the range of motion needed for this season.

#### **End of Entry Thoughts**
We were able to test some of the manuvers we think we might have to do during competitions.



-------




## **8/29/2022 - _Intake Prototyping and GPS Testing_**

Today we are working with the GPS built into the field. We also plan to begin building the flexwheel intake.

### **Goals For Today**
- [x] Experiment with the GPS
- [x] Begin Building Intake

#### **GPS Experimentation**

We are using an inertial sensor and a GPS sensor to help with our autonomous code and our skills code. The GPS sensor uses the patterning along the walls to know its placement in the field. The inertial sensor allows us to accuratly use turning degrees and distances, only getting more accurate with the help of the GPS sensor.

#### **Intake Building**

We are building another base identical to the previous mecanum base for the intake. We are using the other base for GPS testing and we will be able to test and alter two different things without altering either one, creating less time we have to wait till its built.

#### **End of Entry Thoughts**



-------



## **8/30/22 - _Intake Prototyping Day 2_**

Today we were able to focus on the prototype for the intake system and the notebook.

### Attendence
- [x] Rhett
- [x] Tyler
- [x] Noly
- [x] Rebecca
- [x] Ari


### **Goals for Today**

- [x] Start writing the intake code
- [ ] Write the Game Manual Explanation
- [ ] Start Team Bios

#### **Intake Testing**

We started working on the code and the base for the intake. We also tested different angles by hand to see which might be better. We decided that if the disc hits the chain, its likely to go into the high goal, but if it hits the roof of the high goal, it has a low change of going into the goal.

#### ****Notebook**

We decided to start another repository to make the proccess of moving the notebook to a more user-friendly site easier down the line. We are organizing everything by month and then creating separate files for each day. We also used the beginning of our meeting to talk about different notebook requirement and what we can do to meet them. We realize we forgot to include attendence for our previous entries so we are including entries from this entry forward.

#### **End of Entry Thoughts**
We were able to work on the prototype for the intake system and where we plan to aim. We were also able to get a lot done notebook-wise that can help us in the future.





-------




## **8/31/2022 - _Intake Prototyping Day 3_**

Today we hope to finish the base for our intake as well as Continue to test for autonomous and skills programming, we would also like to begin building our intake if we have time today

### **Attendence**
- [x] Rhett
- [x] Tyler
- [x] Noly
- [ ] Rebecca
- [ ] Ari


### **Goals for today**
- [x] Finish Base
- [ ] Continue Autonoumous/Skills Testing
- [ ] (If Time) Start Building Intake


#### **Intake Base**
We found that the chain would hit the screw heads on the bearing block so we put a spacer in between the sprocket and the bearing block. This will create enough distance between the chain and the screw heads to prevent them from hitting each other. After the base was finished we began testing it to see how it felt to drive and how reliable it was with it being partially chain driven. We chose chain drive because it allowed us to move the motors back and free up space for the intake. After about 5 minutes of driving the chain had snapped on three seperate occasions. We decided to make some ajustments and it fixed our issues. We were able to run more stress tests without anything snapping or breaking. One thing that was observed from the occasions where the chain popped was that the base was still fully functional and driving with only a small loss of precision. From the testing today, we are confident that chain drive will work reliably, if we continue down the same path with out final base. A major takeaway is that even if our chain fails, though we highly doubt it will, our robot isnt completely debilitated.


##### Intake Base Images

- Picture of Chain Spacing Fix
  
<img src="https://user-images.githubusercontent.com/102620185/187935084-534ccbd0-e3f4-4ed8-9257-f0b09f21b2c4.jpg" height = "300">

- Full Base Picture

<img src="https://user-images.githubusercontent.com/102620185/187935147-c1e0bea4-bc88-4029-8e89-4aac73403a55.jpg" height = "450">

#### **End of Entry Thoughts**
Today we were unable to continue program testing for autonomous and skill or start intake building, but we were finally able to finish the base we will build our intake off of, meaning tomorrow our main goals will be to add coding entries into our notebook and begin building the intake as well as to finish and refine our game entry and team bio entries.




------





## **9/1/2022 - _Intake Prototyping Day 4_**

Today we are going to start building the intake and write code explanation, as well as, finish and refine our game explantation and team bio entries if we have time to do so today.


### **Attendance**
- [x] Rhett
- [ ] Tyler
- [x] Noly
- [x] Rebecca
- [x] Ari


### **Goals for Today**
- [x] Write Code Explanation
- [ ] Start Building Intake
- [ ] (If Time) Finish and Refine Game Explanation
- [ ] (If Time) Finish and Refine Team Bios


#### **Code Explanation**

For the Code Explanation Entries the basic format will be a code block with the description of what in that code block directly under the code block

##### **Mecanum Drive Code**

```cpp
 int turn = Controller1.Axis1.position();
 int power = Controller1.Axis3.position();
 int strafe = -(Controller1.Axis4.position());
```
This code sets the variables for reading the controller joystick values to use in motor control. Orginally when you strafe pushing the joystick right would cause you to strafe left, and pushing the joystick left would cause you to strafe right, which is opposite from what we need. By setting the controller's axis4 to negative, we reverse the baseline program, which allows us to strafe the position the joystick is.



```cpp
int fl = -(power + turn - strafe);
int rl = power + turn + strafe;
int fr = -(power - turn + strafe);
int rr = power - turn - strafe;
```
This code is for determining the amount of power to give each motor based on math using the controller values defined in the first shown code block. The fl and fr equations are set negative because the front left and front right motors spin the opposite direction of the back left and back right motors.



```cpp
leftMotorA.spin(forward, fl, vex::percent);
leftMotorB.spin(forward, rl, vex::percent);
rightMotorA.spin(forward, fr, vex::percent);
rightMotorB.spin(forward, rr, vex::percent);
```
This code spins the motors based on the math done in the previously shown code block allowing the bot to drive based on the controller inputs given.


##### **Intake Toggle On/Off Code**

```cpp
bool lastKnownStateOfButtonIntake = false;
bool shouldIntakeRun = false;
```
This code intitalizes the booleans that will be used to toggle the intake on and off



```cpp
//Intake Toggle On/Off Control

   // check if the button's state is different from its last known state (has there been a change?)
   if(Controller1.ButtonUp.pressing() != lastKnownStateOfButtonIntake){

   //update last know state for next loop
   lastKnownStateOfButtonIntake = Controller1.ButtonUp.pressing();

    //check the new state of the button (what just happened?)
	  if(Controller1.ButtonUp.pressing()){

		//the button was just pressed - time to toggle the variable
		  if(shouldIntakeRun == true){shouldIntakeRun = false;}
        	else if(shouldIntakeRun == false){shouldIntakeRun = true;}

            }else{
        // the button was just released, but we don't care; do nothing
      }
    }
```
This code checks for button presses which would cause changes in the state of the "lastKnowStateOfButtonIntake" boolean to see if the "shouldIntakeRun" boolean needs to be altered from "true" to "false" or "false" to "true" because of a change in the "lastKnowStateOfButtonIntake" boolean caused by the Up Button on the Controller being pressed.



```cpp
//Intake Toggling On and Off Code
if(shouldIntakeRun == true){ //Spins the Motor if shouldIntakeRun is equal to true
      InRollMotor.setVelocity(200,rpm);
      InRollMotor.spin(reverse);
    }
  else if(shouldIntakeRun == false){ //Stops the Motor if shouldIntakeRun is equal to false
      InRollMotor.stop();
    }
    else{
      // If Neither requirement is met do nothing
    }
```
This code uses the "shouldIntakeRun" boolean to turn the intake on if the "shouldIntakeRun" boolean is set to "true" and turn the intake off if the "shouldIntakeRun" boolean is set to "false"


#### **End of Entry**

Today we unfortunatly unable to begin building the intake or get our game explanations and team bio written, but we will begin working on the intake tomorrow and hopefully get the team bios and game explanation written at our next meeting on the 6th.




-------




## **9/2/2022 - _Intake Prototyping Day 5_**

Today we will finally start building our intake that we are prototyping after a lot of consideration on how we were doing this and what exactly we were trying to accomplish in building this intake.

### **Attendance**
- [x] Rhett
- [x] Tyler
- [ ] Noly
- [ ] Rebecca
- [x] Ari


### **Goals for Today**

- [x] Start Building the Intake Protype


#### **Building the Intake**

The basic idea of this intake is to use flex wheels on a slightly angled ramp to bring the discs up to the launcher. Today in class, Tyler begun building the frame that the intake will be mounted on. 

This was done using 2 pieces of 25-long two wide aluminum angle and 1 piece of 20-long two wide steel c-channel across the top and 1 piece of 25-long two wide aluminum c-channel diagonal. To mount this frame to the base, Tyler used some interesting stand-off placement to acheieve the desired angle of the intake, although a file was needed to enlarge the hole so that the stand-off could better fit. 

The frame of the intake was all we were able to build but the objective next time will be to get the polycarb cut to fit our intake to use it as the ramp and then beginning to build the actual part to intake the discs with flex wheels. 

We decided to mount it at an angle to smoothen the ascent and cause less stress on the intake motors. We put it at a random angle just to test and see if it would work. We plan to test different angles in the future if we find that this angle doesn't work.

##### **Images of the Intake**

- Stand-off usage to get desired angle

<img src="https://user-images.githubusercontent.com/102620185/188656821-bf0d3c7e-0b21-4a36-ba92-6aa51a793a8c.jpg" height = "500">


  
- The frame without polycarb
  
<img src="https://user-images.githubusercontent.com/102620185/188656854-1385f529-8d44-4eb7-967f-b88988be4c8d.jpg" height = "500">


#### **End of Entry Thought**

Today we were able to finally begin building the intake. The next time we work on the robot we will begin working towards mounting the polycarb and possibly begin building the actual intake with the flex wheels to move the disc.




------




## **9/6/2022 - _Intake Prototyping Day 6_**

Today we will begin to mount the polycarb for our intake and begin to build the actual part to move the discs using flex wheels if we have time today.


### **Attendance**
- [x] Rhett
- [x] Tyler
- [ ] Noly
- [x] Rebecca
- [x] Ari


### **Goals for Today**

- [x] Work towards mounting the polycarb for the Ramp of the Intake
- [ ] (If Time) Begin the part of the Intake that actually moves disc with flex wheels


#### **Building the Intake _(Cont.)_**

We started off the meeting by discussing how the polycarb would fit and warp if connected to the frame. 

Rebecca made the argument that if the polycarb was screwed into the top and bottom on the front of the frame, then there would be a bump in the middle of the polycarb going from left to right because of the standoff protruding from the bottom of the frame. 

Rhett made the argument that if the polycarb was screwed into the top and middle on the front of the frame, then ziptied at the bottom front of the frame, the standoff that is purtruding from the bottom will cause the polycarb to warp.
 
Ari started the meeting by working on the summary of the game explination and worked on endgame design ideas. Rhett drilled holes into the polycarb for screws to attach it to the metal frame. Rebecca added screws into the polycarb and then everyone cleaned up. Rebecca was writing today's notebook entry as the meeting was happening.


#### **End of Entry Thoughts**

Today we weren't exactly able to get the polycarb mounted but we will hopefully get it mounted tomorrow and be able to begin working on the flex wheel rollers for the intake.




-------




## **9/7/2022 - _Intake Prototyping Day 7_**

Today we are going to finish mounting the polycarb to the ramp and then begin on building the flex wheel rollers to bring the Discs up the ramp


### **Attendance**
- [x] Rhett
- [x] Tyler
- [ ] Noly
- [ ] Rebecca
- [x] Ari


### **Goals For Today**

- [x] Mount the Polycarb Ramp
- [ ] Begin Working on the Flex Wheel Rollers


#### **Building the Intake _(Cont.)_**

Today we were able to finish mounting the polycarb for the ramp but we were unhappy with how the ramp turned out so instead of our design we have been working towards coming up with a new design idea, our polycarb cracking while trying to mount the ramp so wehen that happened we began looking into other alternatives for our intake design


#### **End of Entry Thoughts** 

We ended up having issues with mounting our intake so we are being led to redesign our intake, we believe that the redesign of our intake will make meshing our intake and shooting mechanism together a much easier task.




------




## **9/8/2022 - _Intake Prototyping Day 8_**

Today we will begin looking at redesign possibilities for our intake and then hopefully begin designing the new intake we are going to build.


### **Attendance**
- [x] Rhett
- [x] Tyler
- [x] Noly
- [x] Rebecca
- [x] Ari


### **Goals for Today**
- [x] Begin Redesigning Intake  
- [ ] Finish Game Explanation  
- [ ] Finish Team Bios  
- [ ] (If Time) Begin Building Intake





