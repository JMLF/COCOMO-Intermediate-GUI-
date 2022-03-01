# COCOMO-Intermediate-GUI-Constructive cost model 1, intermediate model 

## Brief 

The Constructive Cost Model (COCOMO) is a procedural software cost estimation model 
developed by Barry W. Boehm. The model parameters are derived from fitting a regression 
formula using data from historical projects 
(63 projects for COCOMO 81 and 163 projects for COCOMO II).

## Intermediate COCOMOs

Intermediate COCOMO computes software development effort as function of program size 
and a set of "cost drivers" that include subjective assessment of product, hardware, 
personnel and project attributes. This extension considers a set of four "cost drivers", 
each with a number of subsidiary attributes:

Product attributes

+ Required software reliability extent
+ Size of application database
+ Complexity of the product

Hardware attributes

+ Run-time performance constraints
+ Memory constraints
+ Volatility of the virtual machine environment
+ Required turnabout time

Personnel attributes

+ Analyst capability
+ Software engineering capability
+ Applications experience
+ Virtual machine experience
+ Programming language experience

Project attributes

+ Use of software tools
+ Application of software engineering methods
+ Required development schedule

Each of the 15 attributes receives a rating on a six-point scale that ranges from 
"very low" to "extra high" (in importance or value). The product of all effort 
multipliers results in an effort adjustment factor (EAF). 
Typical values for EAF range from 0.9 to 1.4.

## Image

![alt text](https://github.com/JMLF/COCOMO-Intermediate-GUI-/blob/main/Capture/Capture%20d%E2%80%99%C3%A9cran%202022-03-01%20091135.png)