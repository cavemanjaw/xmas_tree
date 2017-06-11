#include "DrawTreeSegment.h"

int DrawTreeSegment(int segmentSizeInLines, int firstLineSize, int segmentIdx)
{
	int line;
	int segmentSpacesAmount = segmentIdx * (segmentSizeInLines - 1);
	for (line = 0; line < segmentSizeInLines; ++line)
	{
		for (int i = 0; i < segmentSizeInLines + segmentSpacesAmount - line - 1; ++i)
		{
			std::cout << " ";
		}
		for (int i = 0; i < (firstLineSize + 2 * line); ++i)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	return ((--line) * 2 + firstLineSize);
}
