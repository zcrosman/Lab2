#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;


//finished
class WriteFile
{
	private:
		bool closed;
		ofstream output_file;
	public:
		WriteFile(const char* file_name);
		~WriteFile();
		void writeLine(String* line);
		void close();
};
#endif
