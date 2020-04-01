# Weighted Quick Union
This approach is exactly the same as that of the Lazy Algorithm in terms of forming a tree structure. The difference arises when we observe the fallacy in the Lazy Algorithm. When the tree gets too tall/large, searching for connectivities nodes becomes a time consuming task. Weighted Quick Union takes care of this. <br>

The idea is that any two trees that are to be connected are first tested for length. The smaller tree is attached to the larger tree. In this example:<br><br>
![Capture](https://user-images.githubusercontent.com/36445600/78137612-45267300-7443-11ea-8d5c-28b070565e53.JPG)
<br><br>

The advantage in terms of speed and efficiency of search of this algorithm becomes evident when we consider a large number of data points:
<br><br>
![Capture](https://user-images.githubusercontent.com/36445600/78137960-caaa2300-7443-11ea-8c88-d0352c769f43.JPG)

<br><br>