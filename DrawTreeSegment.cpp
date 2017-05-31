#include "DrawTreeSegment.h"

int DrawTreeSegment(int segmentSizeInLines, int firstLineSize)
{
	int remainingStars = 0;
	int line;
	for (line = 1; line <= segmentSizeInLines; ++line)
	{
		for (int i = 0; i < segmentSizeInLines - line; ++i)
		{
			std::cout << " ";
		}
		for (int i = 0; i < line * firstLineSize - 1; ++i)
		{
			std::cout << "*";
		}
		switch (line % 3)
		{
			case 0:
			std::cout << "**";
			remainingStars = 2;
			break;

			case 1:
			std::cout << "*";
			remainingStars = 1;
			break;
		
			default:
			break;
		}
		std::cout << std::endl;
	}
	return ((--line) * firstLineSize + remainingStars);
}
