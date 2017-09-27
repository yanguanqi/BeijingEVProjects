#ifndef lrc2mstile_h_H
#define lrc2mstile_h_H

#include <string>

class LRC2MsTile
{
public:
	LRC2MsTile();
	~LRC2MsTile();
	static std::string calcMsTile(int level, int row, int col);
protected:

private:
	struct LRC
	{
		int mLevel;
		int mRow;
		int mCol;
		LRC(int level, int row, int col):mLevel(level), mRow(row), mCol(col){}
	};
};

#endif