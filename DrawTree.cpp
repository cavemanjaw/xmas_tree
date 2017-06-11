#include "DrawTree.h"
#define TREE_FIRST_LINE_SIZE 1

void DrawTree(int segmentSizeInLines, int segmentAmount)
{
  int lastLineSize = TREE_FIRST_LINE_SIZE;
  for (int segmentIdx = segmentAmout - 1; segmentIdx >= 0; --segmentIdx)
  {
    lastLineSize = DrawTreeSegment(segmentSizeInLines, lastLineSize, segmentIdx)
    std::cout << "*" << std::endl;
  }
}
