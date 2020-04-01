# Weighted Quick Union
This approach is exactly the same as that of the Lazy Algorithm in terms of forming a tree structure. The difference arises when we observe the fallacy in the Lazy Algorithm. When the tree gets too tall/large, searching for connectivities nodes becomes a time consuming task. Weighted Quick Union takes care of this. <br>

The idea is that any two trees that are to be connected are first tested for length. The smaller tree is attached to the larger tree. In this example:<br><br>
![Capture](https://user-images.githubusercontent.com/36445600/78137612-45267300-7443-11ea-8d5c-28b070565e53.JPG)
<br><br>

The advantage in terms of speed and efficiency of search of this algorithm becomes evident when we consider a large number of data points:
<br><br>
![Capture](https://user-images.githubusercontent.com/36445600/78137960-caaa2300-7443-11ea-8c88-d0352c769f43.JPG)

<br><br>

The depth of any node in this algorithm is at most log<sub>2</sub>N, where N is the number of nodes or data points.<br>
Side Note: Weighted Quick Union Path Compression (WQUPC) flattens the tree at every step by making every node on the path to finding the root, an immediate child node of this root. In practice, this algorithm is so fast, that it is almost of linear time complexity (almost). It takes 6 seconds to solve a Dyanmic Connectivity problem that would otherwise take 30 years by Eager approach.
