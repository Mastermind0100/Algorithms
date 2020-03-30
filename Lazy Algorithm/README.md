# Lazy Algorithm
This is also a solution to the Dynamic Connectivity problem. It is a Quick Union approach and focuses on forming something like a tree structure. The algorithm focuses on whether the roots of every point are interconnected and not the points themselves. <br>

The idea is that any two elements that have their roots connected to each other, will be connected to each other. In this example:<br><br>
![Capture](https://user-images.githubusercontent.com/36445600/77889183-19f92380-728b-11ea-8d52-0c44ddd3dd82.JPG)
<br><br>
Every point is connected to a parent node (and hence its value in the array is that of the parent node's index). To check if 7 is connnected to 3, we must find the absolute roots of both the nodes and check if the values coincide. In this case, all the nodes are interconnected.

This algorithm is faster than the Eager Approach in most cases, but lacks when it comes to finding whether two points are interconnected, especially when it comes to a large number of data points, due to the fact that the trees hence generated could be unreasonable tall.