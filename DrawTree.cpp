#include "DrawTree.h"
#include "DrawTreeSegment.h"

#define TREE_FIRST_LINE_SIZE 1

void DrawTree(int segmentSizeInLines, int segmentAmount)
{
  int lastLineSize = TREE_FIRST_LINE_SIZE;
  for (int segmentIdx = segmentAmount - 1; segmentIdx >= 0; --segmentIdx)
  {
    lastLineSize = DrawTreeSegment(segmentSizeInLines, lastLineSize, segmentIdx);
    std::cout << "*" << std::endl;
  }
}
