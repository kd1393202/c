#include <stdio.h>

struct day
{
	int nen;
	int tuki;
	int hi;
};

struct profile
{
	char name[20];
	struct day birth;
	char blood[5];
};

main()
{
	struct profile student[5] = {
		{"qwe",{2000,1,1},"A"},
		{"rty",{2001,2,2},"B"},
		{"uio",{2002,1,3},"O"},
		{"pas",{2003,2,4},"AB"},
		{"dfg",{2004,2,5},"A"}
	};
	struct profile* p;
	int i;

	p = student;
	
	for (i = 0; i < 5; i++)
	{
		if (p->birth.tuki == 2)
		{
			printf("%s\\%d”N%dŒŽ%d“ú¶‚Ü‚ê ŒŒ‰tŒ^\%sŒ^\n",
				p->name,
				p->birth.nen, p->birth.tuki, p->birth.hi,
				p->blood);
		}
		p++;
	}
}