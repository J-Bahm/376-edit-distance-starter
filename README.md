# 376 HW 2 Problem 5d: Starter Code
We have provided both Python and C++ starter code for problem 5d. To download them, either locate them on Canvas under the Files &rarr; HW &rarr 2-5-edit-distance folder, or clone the repository via your terminal: 

`git clone https://github.com/xumaple/376-edit-distance-starter`

In both cases there are comments that highlight what you need to add.  Both starter programs should run and output zero without changes. We've also provided some input files that you'll need: macbeth.txt and hamilton.txt.

## How to run

NOTE: For the C++ program, be sure to compile with -std=c++11 flag.

---

By default, both programs take zero input arguments. The code uses the basic test case of ALGORITHM and ALTRUISTIC to test your edit-distance algorithm (as defined in the programs), and you may edit these as you wish. 

Alternatively, each program can also take two input arguments (both ints), X and Y and run edit-distance on the first X characters of macbeth.txt and the first Y characters of hamilton.txt (you generally will want X == Y).  So for example, if your program is called editdist, then 

```bash
./editdist 1000 1000
```

or

```bash
python3 editdist.py 1000 1000
```


will run edit distance on the first 1000 characters of both plays. (You may find that leveraging the input arguments will help you with part e of this problem.)

## Measuring Runtime

The Linux command "time" will output the CPU time used by the program.  For example:

```bash
time ./a.out

   real    0m2.318s
   user    0m2.316s
   sys     0m0.001s
```

This means that the program used 2.316 seconds of CPU time (the user time).

###PICKING INPUT SIZES

You will likely notice that each time you run "time" it will likely report somewhat different results.  And you should also be aware that there can be a fair bit of (mostly constant) overhead in getting things set up.  So you want to pick input values carefully so that you can get a sense of the runtime of the program as the input size varies.  Very small inputs may cause the actual work to get lost in the overhead.  Very large inputs may cause the program to run for a long time or even crash.  So you want to find both an interesting (and fairly large) range of input sizes that give useful results AND don't take forever.

###GRAPHING RESULTS

It's fairly easy to just run the program with different input sizes, find the run time, pull it into a spreadsheet, and just graph the results.  If you pick a good range of values this should be enough to confirm the general shape of the curve.  You can, of course, do more than that.  Writing a bash or python script to run the program on different inputs and output a nice table isn't too hard and would reduce the "grunt work".  But this is by no means required.  You can also find other ways to measure time inside of the program(s) themselves.  Just be sure you are measuring CPU (user) time and not elapsed time (real).  
