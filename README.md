cpp-lvq
=======

## Introduction

CppLVQ is a C++ implementation of Learning Vector Quantization classification algorithm. According to Wikipedia:

> LVQ can be understood as a special case of an artificial neural network, more precisely, it applies a winner-take-all Hebbian learning-based approach. It is a precursor to Self-organizing maps (SOM) and related to Neural gas, and to the k-Nearest Neighbor algorithm (k-NN). LVQ was invented by Teuvo Kohonen.

## Why?

I've found LVQ both very efficient and easy to understand. My previous implementation was coded in Java but it wasn't as good as I wanted it to be. Still it was way faster and more accurate than MATLAB's implementation, though. 

The main reason why I've decided to do this, is lack of similar implementations on the Internet. The few I'd found, turned out to be buggy and horrible documented.

## Solution

CppLVQ will be:

* Fast
* Well-documented
* Easy to understand
* Easy to use (static library or pure code)
