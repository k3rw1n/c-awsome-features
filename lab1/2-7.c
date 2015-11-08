unsigned invert(unsigned x, int p, int n)
{
    return x ^ (~(~0U << n) << p);
}

