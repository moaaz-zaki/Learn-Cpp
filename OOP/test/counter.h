#ifndef _COUNTER_H
#define _COUNTER_H

class counter
{
private:
    unsigned int count;

public:
    counter() : count(0)
    {

    }
    counter(int c) : count(c)
    {

    }
    unsigned int get_count ()
    {
        return count;
    }

    //prefix increament
    counter operator++ ( )
    {
        ++count;
        return counter(count);
    }

    //postfix increament
    counter operator++ (int)
    {
        count++;
        return counter(count);
    }

    //prefix decrement
    counter operator-- ()
    {
        --count;
        return counter(count);
    }

    //postfix decrement
    counter operator-- (int)
    {
        count--;
        return counter(count);
    }
};

#endif