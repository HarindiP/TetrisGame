#include <iostream>

using namespace std;


wstring tetronimo[7]; 

int fieldWidth = 12;
int fieldHieght = 18;
unsigned char *pfield = nullptr;

int Rotate(int x , int y , int r)
{
	int value;
	switch (r % 4)
	{
		case 0: // 0 degrees 
			value = y * 4 + x;
			break;

		case 1: // 90 degrees 
			value = 12 + y -(x * 4) ;
			break;

		case 2: // 180 degrees 
			value = 15 - (y * 4)  - x;
			break;

		case 3: // 270 degrees 
			value = 3 -y + (4 * x);
			break;

	}

	return value;

}

bool doespiecefit(int block , int nRotate , int pos_x , int pos_y)
{

	//check for a 4 by 4 cell block
	for (int x=0; x < 4; x++)

	{
		for (int y=0; y < 4; y++)
		{
			//get index after rotation
			int value = Rotate(x,y, nRotate);

			int index = (pos_y+y) * fieldwidth + (pos_x +x);

			if ((pos_x+ x) >= 0 && (pos_x+ x) < fieldWidth);

			{
				if ((pos_y+ y) >= 0 && (pos_y+ y) < fieldWidth);
				{
					if (tetronimo[block][value]) != L"."  && field[index] !=0 )
					return false;

				}			



			}
		}
	
	}

	return true;
}

int main()
{
	//create assets where . = empty space and X is part of the shape yall

	tetronimo[0].append(L"..X.");
	tetronimo[0].append(L"..X.");
	tetronimo[0].append(L"..X.");
	tetronimo[0].append(L"..X.");
		
	tetronimo[1].append(L"..X.");
	tetronimo[1].append(L".XX.");
	tetronimo[1].append(L".X..");
	tetronimo[1].append(L"....");

	tetronimo[2].append(L".X..");
	tetronimo[2].append(L".XX.");
	tetronimo[2].append(L"..X.");
	tetronimo[2].append(L"....");

	tetronimo[3].append(L"....");
	tetronimo[3].append(L".XX.");
	tetronimo[3].append(L".XX.");
	tetronimo[3].append(L"....");

	tetronimo[4].append(L"..X.");
	tetronimo[4].append(L".XX.");
	tetronimo[4].append(L"..X.");
	tetronimo[4].append(L"....");

	tetronimo[5].append(L".X..");
	tetronimo[5].append(L".X..");
	tetronimo[5].append(L".XX.");
	tetronimo[5].append(L"....");

	tetronimo[6].append(L"..X.");
	tetronimo[6].append(L"..X.");
	tetronimo[6].append(L".XX.");
	tetronimo[6].append(L"....");



	

	return 0;
}
