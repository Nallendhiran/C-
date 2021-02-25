#ifndef COMPOSITION_H
#define COMPOSITION_H


class composition
{
    public:
        composition(int a);
        void somecompo();
    protected:

    private:
        int avalue;
};

class compositefn
{

    public:
        compositefn();
        void somecomposite(composition com,int b);
    protected:

    private:
        composition com;
        int bvalue;
};
#endif // COMPOSITION_H
