#include "DrawTree.h"
#define TREE_FIRST_LINE_SIZE 1

void DrawTree(int segmentSizeInLines, int segmentAmount)
{
  for (int segmentIdx = segmentAmout - 1; segmentIdx >= 0; --segmentIdx)
  {
    DrawTreeSegment(segmentSizeInLines, TREE_FIRST_LINE_SIZE, segmentIdx)
    std::cout << "*" << std::endl;
  }
}
