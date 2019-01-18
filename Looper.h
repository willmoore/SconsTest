
class Looper
{
    int _loopCount;

    public:
    Looper();
    int getLoopCount();
    void loop(); /// Returns after 50 loops with a 500ms sleep in each loop
    void loop2(); /// Returns after 50 loops with a 500ms sleep in each loop
};
