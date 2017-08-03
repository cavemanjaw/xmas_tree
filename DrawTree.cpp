#include "DrawTree.h"
#include "DrawTreeSegment.h"

#define TREE_FIRST_LINE_SIZE 1

void DrawTree(int segmentSizeInLines, int segmentAmount)
{
  int lastLineSize = TREE_FIRST_LINE_SIZE;
  for (int segmentIdx = segmentAmount - 1; segmentIdx >= 0; --segmentIdx)
  {
    lastLineSize = DrawTreeSegment(segmentSizeInLines, lastLineSize, segmentIdx);
    
    int trunkSpacesAmount = segmentSizeInLines * segmentAmount - segmentAmount;
    
    //Insert spaces before star sign
    for (int i = 0; i < trunkSpacesAmount; ++i)
    {
      std::cout << " ";
    }
  
    //Insert trunk star sign
    std::cout << "*" << std::endl;
  }
}
