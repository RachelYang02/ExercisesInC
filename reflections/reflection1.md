# Reflection 1
###### Rachel Yang | February 6 2017

## Written Sprint Reflection
I believe that our eduScrum ceremonies went pretty well -- we would have our standup meetings in studio, we frequently updated our trello board to document and keep track of our current progress on both our sprint and project backlog.

For the sprint review, we were less prepared than we thought we were. We had all done the readings and were expecting general concept questions regarding broader topics such as pointers and arrays instead of specific questions taken from the exercises and reading questions. Our team was a bit behind in the readings and exercises because we didn't realize until later in the sprint that those were part of our assignments and deliverables, so as we were catching up we weren't able to give them the attention and time that they deserved. So, for the latter portion of the sprint review when we were tested on our comprehension, we fell a bit short. From this, we will work harder to keep up with these assignments; we will check in with each other to make sure that we are all fully prepared for the upcoming review; and we will complete the exercises assigned before the sprint review.

This sprint, we mainly focused on defining what our project was and doing research on it than really starting to implement code. Our team's kaizen this sprint is to do more frequent check-ins and stand up meetings so that we are more accountable and so that we do more project work instead of core comprehension work.

## Link to Exercises + Reading Questions
1. [Head First C, Exercise 1](https://github.com/RachelYang02/ExercisesInC/tree/master/exercises/ex01)

2. [Head First C, Exercise 2](https://github.com/RachelYang02/ExercisesInC/tree/master/exercises/ex02)

3. [ThinkOS](https://github.com/RachelYang02/ExercisesInC/blob/master/reading_questions/thinkos_answers.md)

## Exam Question + Solution
1. When you run the command gcc, what happens? What does this compilation process look like? What is the typical output?

    gcc runs each step of the compilation process. It starts with preprocessing (where the #include directives insert source code), then goes into parsing (creating an "abstract syntax tree"), then static checking (checking type errors), then code generation (generation of machine code), followed by linking (linking appropriate libraries) and finally running optimization. The output is generally an executable file called a.out, which can be run by the machine using (./). To give this executable file a better name, you can use the (-o) flag.

2. Describe what these flags with gcc do -- (-c, -o, -0, -S).

    -c tells gcc to compile the program and generate machine code without linking it or generating an executable file. -o allows you to rename the a.out executable file to something more convenient. -0 is an optimization flag (and can be used with higher numbers) that usually speeds programs up. -S tells gcc to compile the program and generate assembly code (human-readable form of machine code).
