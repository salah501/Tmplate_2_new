#ifndef TAPE_H
#define TAPE_H


class Tape : public Publication
{
private:
    float playingTime;
public:
    Tape()
    {
        playingTime=0.0;
    }
    Tape(string t,float p,float pt):Publication(t,p)
    {
        playingTime=pt;
    }
    void setPlayingTime(float pt)
    {
        playingTime=pt;
    }
    float getPlayingTime()
    {
        return playingTime;
    }
    void printInfo()
    {
        Publication::printInfo();
        cout<<"Playing Time : "<<getPlayingTime()<<endl;
    }
};

#endif // TAPE_H
