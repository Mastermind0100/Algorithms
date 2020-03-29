# Eager Algorithm
This is a solution to the Dynamic Connectivity problem. It is a Quick Find approach and focuses on simply finding out whether two points are somehow connected to each other by any possible path. <br>

The idea is that any two elements that have the same value in the <b>id</b> array will be connected to each other. In this example:<br><br>
![Capture](https://user-images.githubusercontent.com/36445600/77840864-653b0580-71a9-11ea-9ace-1383c4e48fc3.JPG)<br><br>
The points 0, 5 and 6 are interconnected;<br>
The points 1, 2 and 7 are interconnected;<br>
The points 3, 4, 8 and 9 are interconnected, as they have the same values at those indexes.

This algorithm is, however, of time complexity n<sup>2</sup>. Therefore,, data structures of a larger size, especially of sizes compared to modern storage devices, this algorithm is unreasonably slow and cannot be scaled.<br>
