# Abstraction Sampling for Graphical Models

## Short Introduction

Abstraction Sampling is a novel algorithm designed to approximate sum-product queries (such as computation of the partition function) over graphical models by sampling subtrees of the full search space. Abstraction Sampling builds upon exact algorithms that traverse weighted directed state-space graphs representing global functions over graphical models such as joint probability distributions.  With the aid of an abstraction function and randomization, the state space is stochastically compacted to a tractably computable subspace, ultimately providing an unbiased Monte Carlo estimate. The Abstraction Sampling framework offers an interpolation between systematic search and randomness, reducing redundancy and variance compared to traditional methods.  The code base and executable provided are designed to compute the partition function of discrete probabilistic graphical models encoded in UAI format. However, the Abstraction Sampling method is applicable to a variety of summation tasks.

## Related Papers

[[PDF](https://ics.uci.edu/~dechter/publications/r248.pdf)] **Filjor Broka, Rina Dechter, Alexander Ihler, and Kalev Kask**. "Abstraction Sampling in Graphical Models" *in Proceedings of the 34th Conference on Uncertainty in Artificial Intelligence (UAI 2024)*.

[[PDF](https://ics.uci.edu/~dechter/publications/r261.pdf)] **Kalev Kask, Bobak Pezeshki, Filjor Broka, Alex Ihler, and Rina Dechter**. "Scaling Up AND/OR Abstraction Sampling" *in Proceedings of the International Joint Conferences on Artificial Intelligence (IJCAI-20)*.

[[PDF](https://ics.uci.edu/~dechter/publications/r278.pdf)] **Bobak Pezeshki, Kalev Kask, Alexander Ihler, Rina Dechter**. "Value-Based Abstraction Functions for Abstraction Sampling" *in Proceedings of the 40th Conference on Uncertainty in Artificial Intelligence (UAI 2024)*.


## Using The Code

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
