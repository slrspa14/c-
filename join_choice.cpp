#include "choice.h"
void join_data::file_save()
{
    
}

int join_data::while_vector1(string name)
{

}

int join_data::while_vector2(string id)
{

}

int join_data::while_vector3(string pw)
{
    if (pw_v.size() !=0)
    {
        for (int i = 0; i < pw_v.size(); i++)
        {
            if(pw_v[i] == pw)
                return 1;
        }
    }
    return 0;
}

int join_data::while_vector4(string pnum)
{
    if (pnum_v.size() !=0)
    {
        for (int i = 0; i < pnum_v.size(); i++)
        {
            if(pnum_v[i] == pnum)
                return 1;
        }
    }
    return 0;
}

int main()
{
    join_data a;
    while (1)
    {
        a.file_save();
    }
    return 0;
}