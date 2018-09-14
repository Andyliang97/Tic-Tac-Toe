#include "locationgenerator.h"
#include <QTime>
#include <QList>

LocationGenerator::LocationGenerator()
{

}

int LocationGenerator::GetLocation(int spot11, int spot12, int spot13, int spot21, int spot22, int spot23, int spot31, int spot32, int spot33)
{
    if((spot11!=0) &&(spot12!=0) &&(spot13!=0) &&(spot21!=0) &&(spot22!=0) &&(spot23!=0) &&(spot31!=0) &&(spot32!=0) && (spot33!=0))
        return -1;
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));

    QList<int> list;
    if(spot11==0)
        list.append(1);
    if(spot12==0)
        list.append(2);
    if(spot13==0)
        list.append(3);
    if(spot21==0)
        list.append(4);
    if(spot22==0)
        list.append(5);
    if(spot23==0)
        list.append(6);
    if(spot31==0)
        list.append(7);
    if(spot32==0)
        list.append(8);
    if(spot33==0)
        list.append(9);
    int rand=qrand()%list.length();
    int returnvalue=list.at(rand);
    list.clear();
    return returnvalue;

}


