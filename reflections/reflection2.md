# Reflection 2
###### Rachel Yang | February 22 2017

## Written Sprint Reflection
For this past sprint, our team accomplished what we set out to do, which was to implement a working render of a sphere. At the same time, I think that we have a lot of work to do in the upcoming sprint to get to where we want to by the end of the project, so it would've been nice if we could've done more. Our team's retrospective from Sprint One was to have regular stand up meetings and check-ins, which we tried to do, but found difficult with our conflicting schedules and work habits (some only had time or preferred to work more at night versus during the day). Also, we didn't prioritize what to work on when we were meeting together, so we'd end up finishing exercises and readings but wouldn't get to work on the project itself. From this, we decided that we wanted to only work on the project while together to make the most out of the time we have and to plan more consistent meetings times/split up into teams of two when working together since trying to meet with all four team members proved to be too difficult.

## Link to Exercises + Reading Questions
1. [Head First C, Exercise 3](https://github.com/RachelYang02/ExercisesInC/tree/master/exercises/ex03)

2. [Head First C, Exercise 4](https://github.com/RachelYang02/ExercisesInC/tree/master/exercises/ex04)

3. [ThinkOS](https://github.com/RachelYang02/ExercisesInC/blob/master/reading_questions/thinkos_answers.md)

## Exam Question + Solution
Compare and contrast the following:


1. Virtual Memory vs. Paging

    It's best for both processes to have their own logical address space that's separate
    from the physical adresses of actual memory. Paging implements the mapping from
    logical to physical addresses through pages, or chunks of memory. Virtual memory lets
    processes bigger than the available physical memory to be executed, and can be implemented
    using paging.
    
2. Buffer vs. Cache

    Both allow for temporary storage. A cache copies data and stores it on a slower medium,
    whereas a buffer has the only copy of the data and is used for I/O.
