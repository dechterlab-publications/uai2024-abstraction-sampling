# uai2024-abstraction-sampling

The Abstraction Sampling executable (and code) is configured to compute the partition function of a graphical model after evidence is applied.

An example terminal command to run Abstraction Sampling is shown below.

~~~
AbstractionSampling -fUAI grid20x20.f2.uai -a equalDistQB4_dfs -nAbs 1024 -t 10 -proper 0 -treeType AO -uaiOut UAI-OUTPUT.PR  1> ./STDOUT.stdout 2> ./STDERR.stderr
~~~~

-fUAI: the UAI formatted graphcial model file

-fVO: variable elimination order to be used by the Weighted Mini-Bucket heuristic (optional)

-fEV: the UAI formatted evidence file (optional)

-iB: the i-bound parameter that controls the strength (and memory) of the Weighted Mini-Bucket heuristic used (optional)

-a: abstraction function to use (we suggest equalDistQB4_dfs or simpleRand_dfs)

-nAbs: this bounds the number of abstract states at each level of abstraction (we suggest alloting a high number that still leaves enough time for samples to be drawn)

-t: time limit

-proper: 0 lifts an unnecessary restriction and allows for greater scalability

-treeType: determines the search tree structure (we suggest AO for using AND/OR trees)

-uaiOut: file to output UAI formatted results to

**Note:** an output file (with ".out" extension) will automatically be written to the folder the program is called from
