void f(int**){};

int main(int argc, char *argv[])
{
    int i = 47;
    int* ip = &i;
    f(&ip);

    return 0;
}
