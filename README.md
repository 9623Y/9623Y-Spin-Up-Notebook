# ***SpinUp1WeekBuild-DesignContest***




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

-Screw Placement

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




## **5/19/2020 - _Designing a Test_**

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

_Insert Image Here_

#### **The Bed**

##### **Flexing Issues** 

There was alot of flexing in the c-channels that held our gear ratios and had our motors and flywheels mounted to them, this flexing was causing deflection in the flywheels whenever attempting to fire a disc, to fix this issue of flexing we opted to add another base plate the is screwed in between the bottom c-channels, this made our rig very rigid and almost completely prone to any kind of flexing.

-Image of fix to the bed

_Insert Image Here_

##### **Disc Hitting the Flywheels too low**

Our discs were coming through the flywheels towards the bottom which was causing the flywheels to try and ride over the disc, instead of raising the whole base plate or lowering the flyhweels we opted to add 3 layers of plexiglass for the disc to rest on so that the discs would ride up higher and be pushed through the middle of the flywheels instead of almost under the flywheel. To keep from having to raise everything on the back of the test bed up we decided to mount the pusher device higher in relation to the height of the piston so that it wouldn't have to be moved up.

- Image of Solution for the discs hitting the Flywheel too low

_Insert Image Here_


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

_insert image here_


#### **Bed Rigidity**

Our bed was more than likely already rigid enough but when the base plate connecting the bottom c-channels got put in it was no square with the c-channels and was causing mounting issues. In our move to High Strength axles we swapped the 2 wide c-channel we had on the sides out for 3 wide c-channel to give enough room to the high strength axles and their bearing blocks. When we took apart the bed to re-level it we decided to add more standoffs to create more support for the beds and c-channels this means that the bed will be more stable and have less flexing issues.

-Image of New Bed Desing

_insert image here_

#### **Conversion to High Strength Axles**

We also decide to convert the axles for the flywheel system to high strength axles because they are going to be what we most likely use in our actual robot so we need to run all of our tests using them, this will allow us to have accurate data to base our robot off of. We chose to use high strength axles because they are less likely to bend and twist that the low strength axles and flex less than the low strength axles.

-Image of High Strength Axle gear ratio

_insert image here_


### **End of Entry Thoughts**

Today we got a lot done and we are very close to being able to begin testing to figure out what will work the best for our flywheels. I am very happy with the progress we made today and feel like the we will be able to get the testing done and begin looking at intakes very shortly.




-------




## **5/26/2022 - _Testing Begins_**

Today we're gong to finish converting our test bed to high strength axles. Once we finish converting the test bed we can begin testing and collecting data on rpm values and how long the flywheel takes to get back up to the set rpms after a disc is launched through it.

## **Goals For Today**

-[x] convert test bed to high strength axles.
-[x] collect data on dirrent rpm values.
-[x] measure and record how long it takes for the flywheel to regain the rpms.

### **Analysis of Data**


##### **Test 1 Graph**

_Insert Image of secondTest Graph Here_

Looking at the graph it's apparent that the flywheels take around 2 seconds to spin up to our desired rpms. After the desired rpm is reached it tends to fluctuate above or below our target speed by up to 50 rpm. 

#### **Test 2 Graph**

_Insert image of ninthTest Graph here_

In this test we reduced the speed of the left flywheel to create a horizontal disc spin to prevent wobble and make shots more accurate. The left flywheel is spinning at 1500 rpm while the right is spinning at 2000 rpm. The left motor didn't take as long to reach it's full speed but the diffrence seems almost negligible. When we shot a disc through the flywheel the right one lost more speed, losing around 600 while the left motor lost around 250. The recovery time was also much shorter on our left flywheel, being around half a second while the right flywheel took around a second to recover. While I expected there to be a diffrence in the rpm loss and recovery time was to be expected, it was a surpise to me that the diffrence in numbers was that large.

### **End Of Entry Thoughts**

The data we are collecting today is crucial for the design of our bot and the overall outcome of our team this season. I'm glad we are figuring this data out now to implement on the bot later. I'm very happy with the test bed and the kind of crucial data it's been able to provide us. Now that we've finished designing the test bed, we can run all the different tests we need to collect even more data that will help in the designing of our bot. Tests we'll be running are things like what hardness of flex wheels is best for distance and accuracy, how combinging wheels affects our results, what kind of grarbox/rpm is optimal for our goal, what the best angle to shoot from is and what can be done to reduce time required to get the flywheel back up to speed.




------




## **5/27/2022 - _Heavily Testing_**

Today we will begin testing all of the things in our end of entry thoughts from yesterday as well as many other new things such as will the motors be able to run at full speed for the entire match without losing performance.


### **Goals for Today**

- [ ] Run the Motor Overheat Tests
- [ ] collect data on different wheel hardnesses and combonations for them
- [ ] what gearbox/rpm is best
- [ ] what is the best overall setup (angle, rpm, wheel hardness)
- [ ] what can be done to decrease spinup and recovery time for rpms


### **Testing**

#### **Overheat Testing**

##### **Overheat Testing No Discs Fired**

_Insert 2MinOverheatTestND Graph Here_

We ran this test to see if we can run the flywheels at full speed for 2 minutes without over heating the motors and if the motors don't overheat how much performance is lost if any performance is lost at all.
