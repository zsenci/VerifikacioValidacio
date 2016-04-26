#include "myClass.h"

	bool MyClass::endsWith(string s)
	{
		string slr = "slr";
		int j = s.length() - 1;
		for (int i = slr.length() - 1; i >= 0; i--)
		{
			if (s[j] != slr[i])
				return false;
			j--;
		}
		return true;
	}

	bool MyClass::isValidFileName(string s)
	{
		int l = s.length();
		if (l < 3)
			throw(kivetel());
		else
			return true;
	}