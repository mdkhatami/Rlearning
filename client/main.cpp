#include <stdio.h>
#include<iostream>
#include "indiprovclient.h"
using namespace std;
int main()
{
InDiProvClient* provclient = new InDiProvClient();
    string wfname="WFName1";
    string wfpass = "password";
    //int wfid = provclient->createWF(wfname ,wfpass);
    //if (wfid != -1){
    int wfid = 2;
    //cout << "Workflow created sucessfully with ID: "<< wfid << endl;
    if (provclient->loadWF(wfid , wfpass)==wfid)
        cout << "Workflow loaded sucessfully with ID: "<< wfid << endl;
return 1;
}
