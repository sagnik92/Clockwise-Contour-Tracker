Clockwise-Contour-Tracker
=========================

  This is a C based application which takes a binary image as input and tracks it's contour.
  
  How it works -
  
  1) The code scans the grey image linearly until it finds a ‘1’.
  
  2) On finding a ‘1’, the code scans it’s 8 neighbourhood cells clockwise, starting with the cell at clockwise 45deg to the direction      vector (-->).
  
  3) On finding a ‘1’ again, the direction vector shifts to the new position, pointing to the new cell, and the clockwise        circular scan on 8 neighbors is repeated. 

  4) On scanning, if it encounters all 0s, it generates an error message indicating that the image is disconnected.
  
  5) If the vector returns back to its initial position, it has scanned the entire contour of the image. The code generates      success message.

  6) Finally, on successful tracking of the contour, the code displays only the contour



	





	
