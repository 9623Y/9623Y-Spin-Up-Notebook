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

The Base is made up of a 15x30 Steel Base Plate and two 1x2x1x30 Aluminum C-Channels and held together by 24 #8-32 x 1/4" screws with Nylock Nuts on them. We Chose to use nylocks so that the basee would be sturdy enough so that it would be able to produce consistent tests while we try different rpms to fire the discs at. This Base is going to be the foundation for all the test we do with the 1L1R System  to find what the best RPM for the flywheels to run at is. Two of these bases can belinked together to get the base used for the 2L1R Prototype.

- Top View

![image](https://user-images.githubusercontent.com/102620185/168926641-d5713442-36da-493e-980f-6d294d65b40d.png)

- Bottom View

![image](https://user-images.githubusercontent.com/102620185/168926693-0c41a029-c496-4771-95c1-6595bce07aca.png)

-Screw Placement

![image](https://user-images.githubusercontent.com/102620185/168926729-b972627c-5c3c-4060-ac2d-70685d5657ce.png) __________![image](https://user-images.githubusercontent.com/102620185/168926741-41d53ed9-3a78-4341-a3fc-8aeca4ea9ea0.png)

### **End of Entry Thoughts**

Overall today was very productive and I feel like we mad great progress on our prototyping bed, tomorrow we will hopefully be able to finish designing the beds and get them put together so that we can begin testing either tomorrow or Thursday. I think that these prototypes and test will be very helpful to our final design because it will allow up to go into beginning our design for the launcher on our robot knowing what works and what the best format for the launcher will be.




------




## **5/18/2022 - _Prototyping Continues_**

Today we will continue prototyping with the same Design as yesterday. The first thing to work on today is a pnuematic pusher to feed the discs into the flywheels so we can get consistent test results. Then we can begin to work on designing the different tests for the different speeds we could possibly use for our flywheels.


### **Goals for Today**

- [ ] Design the Pnuematic Pusher
- [ ] Began to create a formulated test for rpm to run the flywheels at
- [ ] Work on a Universal Gear Ratio to test the different RPMs at
- [ ] (If Time) Begin testing


### **Designing of the 1L1R Prototyping Bed(_Cont._)**


#### **The Pnuematic Pusher**

This Pnuematic pusher will allow us to consistantly push the disc in a way that will provide accurate results when we test the effectiveness of the flywheels running at different speeds.


###### **The Mount**

The Mount for the pnuematic piston has to be extremely sturdy because we dont want the piston to be able to move around when firing it because it would throw off the results of our tests.

###### **The Mounting Point**

The mounting point that we will mount the cylinder to is a Bevel Gearbox screwed into our base plate as far back as possible. We chose to use a bevel gearbox to mount the pneumatic piston to because it is small enough to not take up too much room on our prototyping bed while still being sturdy enough so that it won't move around while firing. This gearbox is screwed into the bed with 4 #8-32 x 1/4" screws with Nylocks on them.

- Side View

![image](https://user-images.githubusercontent.com/102620185/169047632-7615d9fe-0752-47a7-afa2-b633b1e38b15.png)

- Top View

![image](https://user-images.githubusercontent.com/102620185/169047783-400929ac-4174-4027-95a4-54a749f18438.png)

- Screw Placement

  - Bottom View

  ![image](https://user-images.githubusercontent.com/102620185/169047985-42ccd4a4-c450-41bc-9eaa-9b88e2376dd1.png)

  - Top View

  ![image](https://user-images.githubusercontent.com/102620185/169048086-8468aa90-dff3-4116-beae-53bfed45f537.png)
  
  
###### **Mounting the Cylinder**

The Cylinder is mounted to the gearbox with the standard cylinder mounting bracket screwed into the bottom center hole of the gearbox with a single #8-32 x 1/4" screw held in with a nylock nut. We chose this mounting format because it places the cylinder at about the center of the disc width and height wise meaning that it will be able to consistently push the disc straight

- Side View 

![image](https://user-images.githubusercontent.com/102620185/169059320-6a785556-ab62-4847-9528-6cc64a3432aa.png)

-Top View

![image](https://user-images.githubusercontent.com/102620185/169059457-171002b0-fe2a-494e-828e-af10b3ad8767.png)


###### **Rod Guide**

Currently the cylinder is just floating with no support so we are going to use a rod guide that will double as support to hold the cylinder parallel to the bed. 







